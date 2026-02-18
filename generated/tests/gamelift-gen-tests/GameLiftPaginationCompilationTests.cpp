/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for GameLift pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/gamelift/GameLiftClientPagination.h>
#include <aws/gamelift/GameLiftPaginationBase.h>
#include <aws/gamelift/model/DescribeGameSessionDetailsPaginationTraits.h>
#include <aws/gamelift/model/DescribeGameSessionQueuesPaginationTraits.h>
#include <aws/gamelift/model/ListScriptsPaginationTraits.h>
#include <aws/gamelift/model/ListComputePaginationTraits.h>
#include <aws/gamelift/model/DescribeFleetCapacityPaginationTraits.h>
#include <aws/gamelift/model/SearchGameSessionsPaginationTraits.h>
#include <aws/gamelift/model/DescribeFleetUtilizationPaginationTraits.h>
#include <aws/gamelift/model/DescribePlayerSessionsPaginationTraits.h>
#include <aws/gamelift/model/ListFleetDeploymentsPaginationTraits.h>
#include <aws/gamelift/model/DescribeMatchmakingConfigurationsPaginationTraits.h>
#include <aws/gamelift/model/ListBuildsPaginationTraits.h>
#include <aws/gamelift/model/ListFleetsPaginationTraits.h>
#include <aws/gamelift/model/DescribeInstancesPaginationTraits.h>
#include <aws/gamelift/model/DescribeScalingPoliciesPaginationTraits.h>
#include <aws/gamelift/model/DescribeFleetAttributesPaginationTraits.h>
#include <aws/gamelift/model/DescribeMatchmakingRuleSetsPaginationTraits.h>
#include <aws/gamelift/model/DescribeFleetEventsPaginationTraits.h>
#include <aws/gamelift/model/DescribeGameSessionsPaginationTraits.h>
#include <aws/gamelift/model/ListContainerFleetsPaginationTraits.h>
#include <aws/gamelift/model/ListContainerGroupDefinitionsPaginationTraits.h>
#include <aws/gamelift/model/ListGameServerGroupsPaginationTraits.h>
#include <aws/gamelift/model/ListGameServersPaginationTraits.h>
#include <aws/gamelift/model/ListContainerGroupDefinitionVersionsPaginationTraits.h>
#include <aws/gamelift/model/DescribeFleetLocationAttributesPaginationTraits.h>
#include <aws/gamelift/model/ListAliasesPaginationTraits.h>
#include <aws/gamelift/model/DescribeGameServerInstancesPaginationTraits.h>
#include <aws/gamelift/model/ListLocationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class GameLiftPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(GameLiftPaginationCompilationTest, GameLiftPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
