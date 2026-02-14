/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for EMRContainers pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/emr-containers/EMRContainersClientPagination.h>
#include <aws/emr-containers/EMRContainersPaginationBase.h>
#include <aws/emr-containers/model/ListSecurityConfigurationsPaginationTraits.h>
#include <aws/emr-containers/model/ListJobRunsPaginationTraits.h>
#include <aws/emr-containers/model/ListJobTemplatesPaginationTraits.h>
#include <aws/emr-containers/model/ListVirtualClustersPaginationTraits.h>
#include <aws/emr-containers/model/ListManagedEndpointsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class EMRContainersPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(EMRContainersPaginationCompilationTest, EMRContainersPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
