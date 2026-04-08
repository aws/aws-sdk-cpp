/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/marketplace-discovery/MarketplaceDiscoveryClient.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryEndpointProvider.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryEndpointRules.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryErrorMarshaller.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryErrors.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryRequest.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryServiceClientModel.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/AmazonMachineImageFulfillmentOption.h>
#include <aws/marketplace-discovery/model/AmazonMachineImageOperatingSystem.h>
#include <aws/marketplace-discovery/model/AmazonMachineImageRecommendation.h>
#include <aws/marketplace-discovery/model/ApiFulfillmentOption.h>
#include <aws/marketplace-discovery/model/AwsSupportedService.h>
#include <aws/marketplace-discovery/model/BillingPeriodType.h>
#include <aws/marketplace-discovery/model/ByolPricingTerm.h>
#include <aws/marketplace-discovery/model/Category.h>
#include <aws/marketplace-discovery/model/CloudFormationFulfillmentOption.h>
#include <aws/marketplace-discovery/model/ConfigurableUpfrontPricingTerm.h>
#include <aws/marketplace-discovery/model/ConfigurableUpfrontRateCardItem.h>
#include <aws/marketplace-discovery/model/Constraints.h>
#include <aws/marketplace-discovery/model/ContainerFulfillmentOption.h>
#include <aws/marketplace-discovery/model/ContainerOperatingSystem.h>
#include <aws/marketplace-discovery/model/DataArtifact.h>
#include <aws/marketplace-discovery/model/DataExchangeFulfillmentOption.h>
#include <aws/marketplace-discovery/model/DeployedOnAwsStatus.h>
#include <aws/marketplace-discovery/model/DimensionLabel.h>
#include <aws/marketplace-discovery/model/DimensionLabelType.h>
#include <aws/marketplace-discovery/model/DocumentItem.h>
#include <aws/marketplace-discovery/model/Ec2ImageBuilderComponentFulfillmentOption.h>
#include <aws/marketplace-discovery/model/EksAddOnFulfillmentOption.h>
#include <aws/marketplace-discovery/model/EksAddOnOperatingSystem.h>
#include <aws/marketplace-discovery/model/FixedUpfrontPricingTerm.h>
#include <aws/marketplace-discovery/model/FreeTrialPricingTerm.h>
#include <aws/marketplace-discovery/model/FulfillmentOption.h>
#include <aws/marketplace-discovery/model/FulfillmentOptionSummary.h>
#include <aws/marketplace-discovery/model/FulfillmentOptionType.h>
#include <aws/marketplace-discovery/model/GetListingRequest.h>
#include <aws/marketplace-discovery/model/GetListingResult.h>
#include <aws/marketplace-discovery/model/GetOfferRequest.h>
#include <aws/marketplace-discovery/model/GetOfferResult.h>
#include <aws/marketplace-discovery/model/GetOfferSetRequest.h>
#include <aws/marketplace-discovery/model/GetOfferSetResult.h>
#include <aws/marketplace-discovery/model/GetOfferTermsRequest.h>
#include <aws/marketplace-discovery/model/GetOfferTermsResult.h>
#include <aws/marketplace-discovery/model/GetProductRequest.h>
#include <aws/marketplace-discovery/model/GetProductResult.h>
#include <aws/marketplace-discovery/model/GrantItem.h>
#include <aws/marketplace-discovery/model/HelmFulfillmentOption.h>
#include <aws/marketplace-discovery/model/HelmOperatingSystem.h>
#include <aws/marketplace-discovery/model/LegalDocumentType.h>
#include <aws/marketplace-discovery/model/LegalTerm.h>
#include <aws/marketplace-discovery/model/ListFulfillmentOptionsRequest.h>
#include <aws/marketplace-discovery/model/ListFulfillmentOptionsResult.h>
#include <aws/marketplace-discovery/model/ListPurchaseOptionsRequest.h>
#include <aws/marketplace-discovery/model/ListPurchaseOptionsResult.h>
#include <aws/marketplace-discovery/model/ListingAssociatedEntity.h>
#include <aws/marketplace-discovery/model/ListingBadge.h>
#include <aws/marketplace-discovery/model/ListingBadgeType.h>
#include <aws/marketplace-discovery/model/ListingFacet.h>
#include <aws/marketplace-discovery/model/ListingSummary.h>
#include <aws/marketplace-discovery/model/ListingSummaryAssociatedEntity.h>
#include <aws/marketplace-discovery/model/OfferAssociatedEntity.h>
#include <aws/marketplace-discovery/model/OfferInformation.h>
#include <aws/marketplace-discovery/model/OfferSetAssociatedEntity.h>
#include <aws/marketplace-discovery/model/OfferSetInformation.h>
#include <aws/marketplace-discovery/model/OfferTerm.h>
#include <aws/marketplace-discovery/model/PaymentScheduleTerm.h>
#include <aws/marketplace-discovery/model/PricingModel.h>
#include <aws/marketplace-discovery/model/PricingModelType.h>
#include <aws/marketplace-discovery/model/PricingUnit.h>
#include <aws/marketplace-discovery/model/PricingUnitType.h>
#include <aws/marketplace-discovery/model/ProductInformation.h>
#include <aws/marketplace-discovery/model/ProfessionalServicesFulfillmentOption.h>
#include <aws/marketplace-discovery/model/PromotionalEmbeddedImage.h>
#include <aws/marketplace-discovery/model/PromotionalEmbeddedVideo.h>
#include <aws/marketplace-discovery/model/PromotionalMedia.h>
#include <aws/marketplace-discovery/model/PurchaseOptionAssociatedEntity.h>
#include <aws/marketplace-discovery/model/PurchaseOptionBadge.h>
#include <aws/marketplace-discovery/model/PurchaseOptionBadgeType.h>
#include <aws/marketplace-discovery/model/PurchaseOptionFilter.h>
#include <aws/marketplace-discovery/model/PurchaseOptionFilterType.h>
#include <aws/marketplace-discovery/model/PurchaseOptionSummary.h>
#include <aws/marketplace-discovery/model/PurchaseOptionType.h>
#include <aws/marketplace-discovery/model/RateCardConstraintType.h>
#include <aws/marketplace-discovery/model/RateCardItem.h>
#include <aws/marketplace-discovery/model/RecurringPaymentTerm.h>
#include <aws/marketplace-discovery/model/RenewalTerm.h>
#include <aws/marketplace-discovery/model/Resource.h>
#include <aws/marketplace-discovery/model/ResourceContentType.h>
#include <aws/marketplace-discovery/model/ResourceType.h>
#include <aws/marketplace-discovery/model/ReviewSourceId.h>
#include <aws/marketplace-discovery/model/ReviewSourceSummary.h>
#include <aws/marketplace-discovery/model/ReviewSummary.h>
#include <aws/marketplace-discovery/model/SaasFulfillmentOption.h>
#include <aws/marketplace-discovery/model/SageMakerAlgorithmFulfillmentOption.h>
#include <aws/marketplace-discovery/model/SageMakerAlgorithmRecommendation.h>
#include <aws/marketplace-discovery/model/SageMakerModelFulfillmentOption.h>
#include <aws/marketplace-discovery/model/SageMakerModelRecommendation.h>
#include <aws/marketplace-discovery/model/ScheduleItem.h>
#include <aws/marketplace-discovery/model/SearchFacetType.h>
#include <aws/marketplace-discovery/model/SearchFacetsRequest.h>
#include <aws/marketplace-discovery/model/SearchFacetsResult.h>
#include <aws/marketplace-discovery/model/SearchFilter.h>
#include <aws/marketplace-discovery/model/SearchFilterType.h>
#include <aws/marketplace-discovery/model/SearchListingsRequest.h>
#include <aws/marketplace-discovery/model/SearchListingsResult.h>
#include <aws/marketplace-discovery/model/SearchListingsSortBy.h>
#include <aws/marketplace-discovery/model/SearchListingsSortOrder.h>
#include <aws/marketplace-discovery/model/Selector.h>
#include <aws/marketplace-discovery/model/SelectorType.h>
#include <aws/marketplace-discovery/model/SellerEngagement.h>
#include <aws/marketplace-discovery/model/SellerEngagementContentType.h>
#include <aws/marketplace-discovery/model/SellerEngagementType.h>
#include <aws/marketplace-discovery/model/SellerInformation.h>
#include <aws/marketplace-discovery/model/SupportTerm.h>
#include <aws/marketplace-discovery/model/TermType.h>
#include <aws/marketplace-discovery/model/UsageBasedPricingTerm.h>
#include <aws/marketplace-discovery/model/UsageBasedRateCardItem.h>
#include <aws/marketplace-discovery/model/UseCase.h>
#include <aws/marketplace-discovery/model/UseCaseEntry.h>
#include <aws/marketplace-discovery/model/ValidationException.h>
#include <aws/marketplace-discovery/model/ValidationExceptionReason.h>
#include <aws/marketplace-discovery/model/ValidityTerm.h>
#include <aws/marketplace-discovery/model/VariablePaymentTerm.h>

using MarketplaceDiscoveryIncludeTest = ::testing::Test;

TEST_F(MarketplaceDiscoveryIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MarketplaceDiscovery::MarketplaceDiscoveryClient>("MarketplaceDiscoveryIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
