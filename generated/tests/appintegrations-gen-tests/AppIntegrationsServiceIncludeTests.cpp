/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/appintegrations/AppIntegrationsServiceClient.h>
#include <aws/appintegrations/AppIntegrationsServiceEndpointProvider.h>
#include <aws/appintegrations/AppIntegrationsServiceEndpointRules.h>
#include <aws/appintegrations/AppIntegrationsServiceErrorMarshaller.h>
#include <aws/appintegrations/AppIntegrationsServiceErrors.h>
#include <aws/appintegrations/AppIntegrationsServiceRequest.h>
#include <aws/appintegrations/AppIntegrationsServiceServiceClientModel.h>
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/model/ApplicationAssociationSummary.h>
#include <aws/appintegrations/model/ApplicationConfig.h>
#include <aws/appintegrations/model/ApplicationSourceConfig.h>
#include <aws/appintegrations/model/ApplicationSummary.h>
#include <aws/appintegrations/model/ContactHandling.h>
#include <aws/appintegrations/model/ContactHandlingScope.h>
#include <aws/appintegrations/model/CreateApplicationRequest.h>
#include <aws/appintegrations/model/CreateApplicationResult.h>
#include <aws/appintegrations/model/CreateDataIntegrationAssociationRequest.h>
#include <aws/appintegrations/model/CreateDataIntegrationAssociationResult.h>
#include <aws/appintegrations/model/CreateDataIntegrationRequest.h>
#include <aws/appintegrations/model/CreateDataIntegrationResult.h>
#include <aws/appintegrations/model/CreateEventIntegrationRequest.h>
#include <aws/appintegrations/model/CreateEventIntegrationResult.h>
#include <aws/appintegrations/model/DataIntegrationAssociationSummary.h>
#include <aws/appintegrations/model/DataIntegrationSummary.h>
#include <aws/appintegrations/model/DeleteApplicationRequest.h>
#include <aws/appintegrations/model/DeleteApplicationResult.h>
#include <aws/appintegrations/model/DeleteDataIntegrationRequest.h>
#include <aws/appintegrations/model/DeleteDataIntegrationResult.h>
#include <aws/appintegrations/model/DeleteEventIntegrationRequest.h>
#include <aws/appintegrations/model/DeleteEventIntegrationResult.h>
#include <aws/appintegrations/model/EventFilter.h>
#include <aws/appintegrations/model/EventIntegration.h>
#include <aws/appintegrations/model/EventIntegrationAssociation.h>
#include <aws/appintegrations/model/ExecutionConfiguration.h>
#include <aws/appintegrations/model/ExecutionMode.h>
#include <aws/appintegrations/model/ExecutionStatus.h>
#include <aws/appintegrations/model/ExternalUrlConfig.h>
#include <aws/appintegrations/model/FileConfiguration.h>
#include <aws/appintegrations/model/GetApplicationRequest.h>
#include <aws/appintegrations/model/GetApplicationResult.h>
#include <aws/appintegrations/model/GetDataIntegrationRequest.h>
#include <aws/appintegrations/model/GetDataIntegrationResult.h>
#include <aws/appintegrations/model/GetEventIntegrationRequest.h>
#include <aws/appintegrations/model/GetEventIntegrationResult.h>
#include <aws/appintegrations/model/IframeConfig.h>
#include <aws/appintegrations/model/LastExecutionStatus.h>
#include <aws/appintegrations/model/ListApplicationAssociationsRequest.h>
#include <aws/appintegrations/model/ListApplicationAssociationsResult.h>
#include <aws/appintegrations/model/ListApplicationsRequest.h>
#include <aws/appintegrations/model/ListApplicationsResult.h>
#include <aws/appintegrations/model/ListDataIntegrationAssociationsRequest.h>
#include <aws/appintegrations/model/ListDataIntegrationAssociationsResult.h>
#include <aws/appintegrations/model/ListDataIntegrationsRequest.h>
#include <aws/appintegrations/model/ListDataIntegrationsResult.h>
#include <aws/appintegrations/model/ListEventIntegrationAssociationsRequest.h>
#include <aws/appintegrations/model/ListEventIntegrationAssociationsResult.h>
#include <aws/appintegrations/model/ListEventIntegrationsRequest.h>
#include <aws/appintegrations/model/ListEventIntegrationsResult.h>
#include <aws/appintegrations/model/ListTagsForResourceRequest.h>
#include <aws/appintegrations/model/ListTagsForResourceResult.h>
#include <aws/appintegrations/model/OnDemandConfiguration.h>
#include <aws/appintegrations/model/Publication.h>
#include <aws/appintegrations/model/ScheduleConfiguration.h>
#include <aws/appintegrations/model/Subscription.h>
#include <aws/appintegrations/model/TagResourceRequest.h>
#include <aws/appintegrations/model/TagResourceResult.h>
#include <aws/appintegrations/model/UntagResourceRequest.h>
#include <aws/appintegrations/model/UntagResourceResult.h>
#include <aws/appintegrations/model/UpdateApplicationRequest.h>
#include <aws/appintegrations/model/UpdateApplicationResult.h>
#include <aws/appintegrations/model/UpdateDataIntegrationAssociationRequest.h>
#include <aws/appintegrations/model/UpdateDataIntegrationAssociationResult.h>
#include <aws/appintegrations/model/UpdateDataIntegrationRequest.h>
#include <aws/appintegrations/model/UpdateDataIntegrationResult.h>
#include <aws/appintegrations/model/UpdateEventIntegrationRequest.h>
#include <aws/appintegrations/model/UpdateEventIntegrationResult.h>

using AppIntegrationsServiceIncludeTest = ::testing::Test;

TEST_F(AppIntegrationsServiceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AppIntegrationsService::AppIntegrationsServiceClient>("AppIntegrationsServiceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
