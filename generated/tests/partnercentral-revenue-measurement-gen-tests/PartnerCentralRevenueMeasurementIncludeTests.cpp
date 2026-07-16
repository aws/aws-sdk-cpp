/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementClient.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementEndpointProvider.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementEndpointRules.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementErrorMarshaller.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementErrors.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementRequest.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementServiceClientModel.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/AccessDeniedException.h>
#include <aws/partnercentral-revenue-measurement/model/AccessDeniedExceptionReason.h>
#include <aws/partnercentral-revenue-measurement/model/AllocationStatus.h>
#include <aws/partnercentral-revenue-measurement/model/AttributionSortBy.h>
#include <aws/partnercentral-revenue-measurement/model/AttributionSummary.h>
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>
#include <aws/partnercentral-revenue-measurement/model/ConflictException.h>
#include <aws/partnercentral-revenue-measurement/model/ConflictExceptionReason.h>
#include <aws/partnercentral-revenue-measurement/model/CreateMarketplaceRevenueShareAllocationRequest.h>
#include <aws/partnercentral-revenue-measurement/model/CreateMarketplaceRevenueShareAllocationResult.h>
#include <aws/partnercentral-revenue-measurement/model/CreateMarketplaceRevenueShareRequest.h>
#include <aws/partnercentral-revenue-measurement/model/CreateMarketplaceRevenueShareResult.h>
#include <aws/partnercentral-revenue-measurement/model/CreateRevenueAttributionRequest.h>
#include <aws/partnercentral-revenue-measurement/model/CreateRevenueAttributionResult.h>
#include <aws/partnercentral-revenue-measurement/model/EntityType.h>
#include <aws/partnercentral-revenue-measurement/model/FieldValidationCode.h>
#include <aws/partnercentral-revenue-measurement/model/GetMarketplaceRevenueShareAllocationRequest.h>
#include <aws/partnercentral-revenue-measurement/model/GetMarketplaceRevenueShareAllocationResult.h>
#include <aws/partnercentral-revenue-measurement/model/GetMarketplaceRevenueShareRequest.h>
#include <aws/partnercentral-revenue-measurement/model/GetMarketplaceRevenueShareResult.h>
#include <aws/partnercentral-revenue-measurement/model/GetRevenueAttributionAllocationRequest.h>
#include <aws/partnercentral-revenue-measurement/model/GetRevenueAttributionAllocationResult.h>
#include <aws/partnercentral-revenue-measurement/model/GetRevenueAttributionAllocationsTaskRequest.h>
#include <aws/partnercentral-revenue-measurement/model/GetRevenueAttributionAllocationsTaskResult.h>
#include <aws/partnercentral-revenue-measurement/model/GetRevenueAttributionRequest.h>
#include <aws/partnercentral-revenue-measurement/model/GetRevenueAttributionResult.h>
#include <aws/partnercentral-revenue-measurement/model/ListMarketplaceRevenueShareAllocationsRequest.h>
#include <aws/partnercentral-revenue-measurement/model/ListMarketplaceRevenueShareAllocationsResult.h>
#include <aws/partnercentral-revenue-measurement/model/ListMarketplaceRevenueSharesRequest.h>
#include <aws/partnercentral-revenue-measurement/model/ListMarketplaceRevenueSharesResult.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionAllocationsRequest.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionAllocationsResult.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionsRequest.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionsResult.h>
#include <aws/partnercentral-revenue-measurement/model/ListTagsForResourceRequest.h>
#include <aws/partnercentral-revenue-measurement/model/ListTagsForResourceResult.h>
#include <aws/partnercentral-revenue-measurement/model/MarketplaceProductSummary.h>
#include <aws/partnercentral-revenue-measurement/model/MarketplaceRevenueShareAllocationSortField.h>
#include <aws/partnercentral-revenue-measurement/model/MarketplaceRevenueShareAllocationSummary.h>
#include <aws/partnercentral-revenue-measurement/model/MarketplaceRevenueShareSortBy.h>
#include <aws/partnercentral-revenue-measurement/model/MarketplaceRevenueShareSummary.h>
#include <aws/partnercentral-revenue-measurement/model/ResourceNotFoundException.h>
#include <aws/partnercentral-revenue-measurement/model/ResourceNotFoundExceptionReason.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationAction.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationErrorCode.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationErrorDetail.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationSortField.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationSummary.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationTaskStatus.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueShareAllocation.h>
#include <aws/partnercentral-revenue-measurement/model/ServiceQuotaExceededException.h>
#include <aws/partnercentral-revenue-measurement/model/ServiceQuotaExceededExceptionReason.h>
#include <aws/partnercentral-revenue-measurement/model/SortOrder.h>
#include <aws/partnercentral-revenue-measurement/model/StartRevenueAttributionAllocationsTaskRequest.h>
#include <aws/partnercentral-revenue-measurement/model/StartRevenueAttributionAllocationsTaskResult.h>
#include <aws/partnercentral-revenue-measurement/model/Tag.h>
#include <aws/partnercentral-revenue-measurement/model/TagResourceRequest.h>
#include <aws/partnercentral-revenue-measurement/model/TenancyModel.h>
#include <aws/partnercentral-revenue-measurement/model/ThrottlingException.h>
#include <aws/partnercentral-revenue-measurement/model/UntagResourceRequest.h>
#include <aws/partnercentral-revenue-measurement/model/UpdateMarketplaceRevenueShareAllocationRequest.h>
#include <aws/partnercentral-revenue-measurement/model/UpdateMarketplaceRevenueShareAllocationResult.h>
#include <aws/partnercentral-revenue-measurement/model/UpdateRevenueAttributionRequest.h>
#include <aws/partnercentral-revenue-measurement/model/UpdateRevenueAttributionResult.h>
#include <aws/partnercentral-revenue-measurement/model/ValidationException.h>
#include <aws/partnercentral-revenue-measurement/model/ValidationExceptionField.h>
#include <aws/partnercentral-revenue-measurement/model/ValidationExceptionReason.h>

using PartnerCentralRevenueMeasurementIncludeTest = ::testing::Test;

TEST_F(PartnerCentralRevenueMeasurementIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PartnerCentralRevenueMeasurement::PartnerCentralRevenueMeasurementClient>("PartnerCentralRevenueMeasurementIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
