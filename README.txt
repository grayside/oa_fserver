# OA Feature Server

This module provides integration between OpenAtrium and Features Server.

## Features

1. Provides a site-wide and group-specific listing of Features Projects.
2. If the Atrium Casetracker feature is enabled, Features are a Project type.
3. If the Atrium Book Feature is enabled, Features will automatically become root books after the fashion of Project content.
4. Features are renamed in menu entries from "Project" to "Feature" to avoid name ambiguity with the Casetracker Project content type.

## Installation

1. Get the fserver feature from http://code.developmentseed.org.
  (drush dl --source=http://code.developmentseed.org/fserver dl fserver)
2. Apply patch oa_fserver.patch from fserver/.
3. Enable the fserver and grayside_oa_fserver modules.
4. In any given group for which you want to publish Features, enable the Features Server 
on the Customize Features page.

## Todos

1. Altering the fserver view to add it to spaces lock-down and content:spaces filter
2. https://community.openatrium.com/issues/node/2024: Adding cases to a feature & 
displaying cases on a Feature page needs this resolved, or manually replicated. Excluded 
from the patch for now because it seems reasonable for OA to fix this internally.
3. Features Icons

## Context 3.0 Compatibility for Features Server

The Features Server uses Context 2.0. For compatibility with OA, a new context 
(oa_fserver-section-project) was created using Atrium's native Context 3.0. When fserver 
is updated for Context 3.0, this new context should be dropped.

## What Does oa_fserver.fserver.patch Do?

 * Tweak .info file for atrium group compatibility.
 * Change fserver_project name from Project to Feature.
 * Modify field_fserver_project to use the fserver_projects view (which is modified in this module for space-awareness) 

## Creator
Adam B. Ross [Grayside](http://grayside.org) ([Drupal.Org](http://drupal.org/user/346868), [Community.OA](https://community.openatrium.com/user/529))