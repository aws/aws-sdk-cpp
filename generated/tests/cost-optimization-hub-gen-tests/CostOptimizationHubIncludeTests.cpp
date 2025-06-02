/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/cost-optimization-hub/CostOptimizationHubClient.h>
#include <aws/cost-optimization-hub/CostOptimizationHubEndpointProvider.h>
#include <aws/cost-optimization-hub/CostOptimizationHubEndpointRules.h>
#include <aws/cost-optimization-hub/CostOptimizationHubErrorMarshaller.h>
#include <aws/cost-optimization-hub/CostOptimizationHubErrors.h>
#include <aws/cost-optimization-hub/CostOptimizationHubRequest.h>
#include <aws/cost-optimization-hub/CostOptimizationHubServiceClientModel.h>
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/AccountEnrollmentStatus.h>
#include <aws/cost-optimization-hub/model/ActionType.h>
#include <aws/cost-optimization-hub/model/AllocationStrategy.h>
#include <aws/cost-optimization-hub/model/AuroraDbClusterStorage.h>
#include <aws/cost-optimization-hub/model/AuroraDbClusterStorageConfiguration.h>
#include <aws/cost-optimization-hub/model/BlockStoragePerformanceConfiguration.h>
#include <aws/cost-optimization-hub/model/ComputeConfiguration.h>
#include <aws/cost-optimization-hub/model/ComputeSavingsPlans.h>
#include <aws/cost-optimization-hub/model/ComputeSavingsPlansConfiguration.h>
#include <aws/cost-optimization-hub/model/DbInstanceConfiguration.h>
#include <aws/cost-optimization-hub/model/DynamoDbReservedCapacity.h>
#include <aws/cost-optimization-hub/model/DynamoDbReservedCapacityConfiguration.h>
#include <aws/cost-optimization-hub/model/EbsVolume.h>
#include <aws/cost-optimization-hub/model/EbsVolumeConfiguration.h>
#include <aws/cost-optimization-hub/model/Ec2AutoScalingGroup.h>
#include <aws/cost-optimization-hub/model/Ec2AutoScalingGroupConfiguration.h>
#include <aws/cost-optimization-hub/model/Ec2AutoScalingGroupType.h>
#include <aws/cost-optimization-hub/model/Ec2Instance.h>
#include <aws/cost-optimization-hub/model/Ec2InstanceConfiguration.h>
#include <aws/cost-optimization-hub/model/Ec2InstanceSavingsPlans.h>
#include <aws/cost-optimization-hub/model/Ec2InstanceSavingsPlansConfiguration.h>
#include <aws/cost-optimization-hub/model/Ec2ReservedInstances.h>
#include <aws/cost-optimization-hub/model/Ec2ReservedInstancesConfiguration.h>
#include <aws/cost-optimization-hub/model/EcsService.h>
#include <aws/cost-optimization-hub/model/EcsServiceConfiguration.h>
#include <aws/cost-optimization-hub/model/ElastiCacheReservedInstances.h>
#include <aws/cost-optimization-hub/model/ElastiCacheReservedInstancesConfiguration.h>
#include <aws/cost-optimization-hub/model/EnrollmentStatus.h>
#include <aws/cost-optimization-hub/model/EstimatedDiscounts.h>
#include <aws/cost-optimization-hub/model/Filter.h>
#include <aws/cost-optimization-hub/model/GetPreferencesRequest.h>
#include <aws/cost-optimization-hub/model/GetPreferencesResult.h>
#include <aws/cost-optimization-hub/model/GetRecommendationRequest.h>
#include <aws/cost-optimization-hub/model/GetRecommendationResult.h>
#include <aws/cost-optimization-hub/model/ImplementationEffort.h>
#include <aws/cost-optimization-hub/model/InstanceConfiguration.h>
#include <aws/cost-optimization-hub/model/LambdaFunction.h>
#include <aws/cost-optimization-hub/model/LambdaFunctionConfiguration.h>
#include <aws/cost-optimization-hub/model/ListEnrollmentStatusesRequest.h>
#include <aws/cost-optimization-hub/model/ListEnrollmentStatusesResult.h>
#include <aws/cost-optimization-hub/model/ListRecommendationSummariesRequest.h>
#include <aws/cost-optimization-hub/model/ListRecommendationSummariesResult.h>
#include <aws/cost-optimization-hub/model/ListRecommendationsRequest.h>
#include <aws/cost-optimization-hub/model/ListRecommendationsResult.h>
#include <aws/cost-optimization-hub/model/MemberAccountDiscountVisibility.h>
#include <aws/cost-optimization-hub/model/MemoryDbReservedInstances.h>
#include <aws/cost-optimization-hub/model/MemoryDbReservedInstancesConfiguration.h>
#include <aws/cost-optimization-hub/model/MixedInstanceConfiguration.h>
#include <aws/cost-optimization-hub/model/OpenSearchReservedInstances.h>
#include <aws/cost-optimization-hub/model/OpenSearchReservedInstancesConfiguration.h>
#include <aws/cost-optimization-hub/model/Order.h>
#include <aws/cost-optimization-hub/model/OrderBy.h>
#include <aws/cost-optimization-hub/model/PaymentOption.h>
#include <aws/cost-optimization-hub/model/PreferredCommitment.h>
#include <aws/cost-optimization-hub/model/RdsDbInstance.h>
#include <aws/cost-optimization-hub/model/RdsDbInstanceConfiguration.h>
#include <aws/cost-optimization-hub/model/RdsDbInstanceStorage.h>
#include <aws/cost-optimization-hub/model/RdsDbInstanceStorageConfiguration.h>
#include <aws/cost-optimization-hub/model/RdsReservedInstances.h>
#include <aws/cost-optimization-hub/model/RdsReservedInstancesConfiguration.h>
#include <aws/cost-optimization-hub/model/Recommendation.h>
#include <aws/cost-optimization-hub/model/RecommendationSummary.h>
#include <aws/cost-optimization-hub/model/RedshiftReservedInstances.h>
#include <aws/cost-optimization-hub/model/RedshiftReservedInstancesConfiguration.h>
#include <aws/cost-optimization-hub/model/ReservedInstancesCostCalculation.h>
#include <aws/cost-optimization-hub/model/ReservedInstancesPricing.h>
#include <aws/cost-optimization-hub/model/ResourceCostCalculation.h>
#include <aws/cost-optimization-hub/model/ResourceDetails.h>
#include <aws/cost-optimization-hub/model/ResourceNotFoundException.h>
#include <aws/cost-optimization-hub/model/ResourcePricing.h>
#include <aws/cost-optimization-hub/model/ResourceType.h>
#include <aws/cost-optimization-hub/model/SageMakerSavingsPlans.h>
#include <aws/cost-optimization-hub/model/SageMakerSavingsPlansConfiguration.h>
#include <aws/cost-optimization-hub/model/SavingsEstimationMode.h>
#include <aws/cost-optimization-hub/model/SavingsPlansCostCalculation.h>
#include <aws/cost-optimization-hub/model/SavingsPlansPricing.h>
#include <aws/cost-optimization-hub/model/Source.h>
#include <aws/cost-optimization-hub/model/StorageConfiguration.h>
#include <aws/cost-optimization-hub/model/SummaryMetrics.h>
#include <aws/cost-optimization-hub/model/SummaryMetricsResult.h>
#include <aws/cost-optimization-hub/model/Tag.h>
#include <aws/cost-optimization-hub/model/Term.h>
#include <aws/cost-optimization-hub/model/UpdateEnrollmentStatusRequest.h>
#include <aws/cost-optimization-hub/model/UpdateEnrollmentStatusResult.h>
#include <aws/cost-optimization-hub/model/UpdatePreferencesRequest.h>
#include <aws/cost-optimization-hub/model/UpdatePreferencesResult.h>
#include <aws/cost-optimization-hub/model/Usage.h>
#include <aws/cost-optimization-hub/model/ValidationException.h>
#include <aws/cost-optimization-hub/model/ValidationExceptionDetail.h>
#include <aws/cost-optimization-hub/model/ValidationExceptionReason.h>

using CostOptimizationHubIncludeTest = ::testing::Test;

TEST_F(CostOptimizationHubIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CostOptimizationHub::CostOptimizationHubClient>("CostOptimizationHubIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
