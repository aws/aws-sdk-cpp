/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for EMR pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/elasticmapreduce/EMRClientPagination.h>
#include <aws/elasticmapreduce/EMRPaginationBase.h>
#include <aws/elasticmapreduce/model/ListInstanceGroupsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListSecurityConfigurationsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListStudiosPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListStepsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListInstancesPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListSupportedInstanceTypesPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListClustersPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListReleaseLabelsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListStudioSessionMappingsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListInstanceFleetsPaginationTraits.h>
#include <aws/elasticmapreduce/model/ListNotebookExecutionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class EMRPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(EMRPaginationCompilationTest, EMRPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
