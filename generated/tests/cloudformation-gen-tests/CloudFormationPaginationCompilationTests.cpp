/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CloudFormation pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/cloudformation/CloudFormationClientPagination.h>
#include <aws/cloudformation/CloudFormationPaginationBase.h>
#include <aws/cloudformation/model/ListStackSetOperationResultsPaginationTraits.h>
#include <aws/cloudformation/model/ListChangeSetsPaginationTraits.h>
#include <aws/cloudformation/model/ListStackSetOperationsPaginationTraits.h>
#include <aws/cloudformation/model/ListTypeVersionsPaginationTraits.h>
#include <aws/cloudformation/model/DescribeEventsPaginationTraits.h>
#include <aws/cloudformation/model/DescribeAccountLimitsPaginationTraits.h>
#include <aws/cloudformation/model/DescribeChangeSetPaginationTraits.h>
#include <aws/cloudformation/model/ListTypesPaginationTraits.h>
#include <aws/cloudformation/model/ListStacksPaginationTraits.h>
#include <aws/cloudformation/model/ListGeneratedTemplatesPaginationTraits.h>
#include <aws/cloudformation/model/ListStackSetsPaginationTraits.h>
#include <aws/cloudformation/model/DescribeStacksPaginationTraits.h>
#include <aws/cloudformation/model/ListResourceScanRelatedResourcesPaginationTraits.h>
#include <aws/cloudformation/model/ListTypeRegistrationsPaginationTraits.h>
#include <aws/cloudformation/model/DescribeStackEventsPaginationTraits.h>
#include <aws/cloudformation/model/ListStackResourcesPaginationTraits.h>
#include <aws/cloudformation/model/DescribeStackResourceDriftsPaginationTraits.h>
#include <aws/cloudformation/model/ListResourceScanResourcesPaginationTraits.h>
#include <aws/cloudformation/model/ListStackRefactorActionsPaginationTraits.h>
#include <aws/cloudformation/model/ListStackInstancesPaginationTraits.h>
#include <aws/cloudformation/model/ListStackRefactorsPaginationTraits.h>
#include <aws/cloudformation/model/ListExportsPaginationTraits.h>
#include <aws/cloudformation/model/ListImportsPaginationTraits.h>
#include <aws/cloudformation/model/ListResourceScansPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CloudFormationPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CloudFormationPaginationCompilationTest, CloudFormationPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
