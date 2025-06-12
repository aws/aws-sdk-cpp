/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/controlcatalog/ControlCatalogClient.h>
#include <aws/controlcatalog/ControlCatalogEndpointProvider.h>
#include <aws/controlcatalog/ControlCatalogEndpointRules.h>
#include <aws/controlcatalog/ControlCatalogErrorMarshaller.h>
#include <aws/controlcatalog/ControlCatalogErrors.h>
#include <aws/controlcatalog/ControlCatalogRequest.h>
#include <aws/controlcatalog/ControlCatalogServiceClientModel.h>
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/controlcatalog/model/AssociatedDomainSummary.h>
#include <aws/controlcatalog/model/AssociatedObjectiveSummary.h>
#include <aws/controlcatalog/model/CommonControlFilter.h>
#include <aws/controlcatalog/model/CommonControlMappingDetails.h>
#include <aws/controlcatalog/model/CommonControlSummary.h>
#include <aws/controlcatalog/model/ControlBehavior.h>
#include <aws/controlcatalog/model/ControlFilter.h>
#include <aws/controlcatalog/model/ControlMapping.h>
#include <aws/controlcatalog/model/ControlMappingFilter.h>
#include <aws/controlcatalog/model/ControlParameter.h>
#include <aws/controlcatalog/model/ControlScope.h>
#include <aws/controlcatalog/model/ControlSeverity.h>
#include <aws/controlcatalog/model/ControlSummary.h>
#include <aws/controlcatalog/model/DomainResourceFilter.h>
#include <aws/controlcatalog/model/DomainSummary.h>
#include <aws/controlcatalog/model/FrameworkMappingDetails.h>
#include <aws/controlcatalog/model/GetControlRequest.h>
#include <aws/controlcatalog/model/GetControlResult.h>
#include <aws/controlcatalog/model/ImplementationDetails.h>
#include <aws/controlcatalog/model/ImplementationFilter.h>
#include <aws/controlcatalog/model/ImplementationSummary.h>
#include <aws/controlcatalog/model/ListCommonControlsRequest.h>
#include <aws/controlcatalog/model/ListCommonControlsResult.h>
#include <aws/controlcatalog/model/ListControlMappingsRequest.h>
#include <aws/controlcatalog/model/ListControlMappingsResult.h>
#include <aws/controlcatalog/model/ListControlsRequest.h>
#include <aws/controlcatalog/model/ListControlsResult.h>
#include <aws/controlcatalog/model/ListDomainsRequest.h>
#include <aws/controlcatalog/model/ListDomainsResult.h>
#include <aws/controlcatalog/model/ListObjectivesRequest.h>
#include <aws/controlcatalog/model/ListObjectivesResult.h>
#include <aws/controlcatalog/model/Mapping.h>
#include <aws/controlcatalog/model/MappingType.h>
#include <aws/controlcatalog/model/ObjectiveFilter.h>
#include <aws/controlcatalog/model/ObjectiveResourceFilter.h>
#include <aws/controlcatalog/model/ObjectiveSummary.h>
#include <aws/controlcatalog/model/RegionConfiguration.h>

using ControlCatalogIncludeTest = ::testing::Test;

TEST_F(ControlCatalogIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ControlCatalog::ControlCatalogClient>("ControlCatalogIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
