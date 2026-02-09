/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for WorkDocs pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/workdocs/WorkDocsClientPagination.h>
#include <aws/workdocs/WorkDocsPaginationBase.h>
#include <aws/workdocs/model/DescribeNotificationSubscriptionsPaginationTraits.h>
#include <aws/workdocs/model/DescribeResourcePermissionsPaginationTraits.h>
#include <aws/workdocs/model/DescribeActivitiesPaginationTraits.h>
#include <aws/workdocs/model/DescribeGroupsPaginationTraits.h>
#include <aws/workdocs/model/DescribeUsersPaginationTraits.h>
#include <aws/workdocs/model/DescribeFolderContentsPaginationTraits.h>
#include <aws/workdocs/model/DescribeRootFoldersPaginationTraits.h>
#include <aws/workdocs/model/DescribeCommentsPaginationTraits.h>
#include <aws/workdocs/model/SearchResourcesPaginationTraits.h>
#include <aws/workdocs/model/DescribeDocumentVersionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class WorkDocsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(WorkDocsPaginationCompilationTest, WorkDocsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
