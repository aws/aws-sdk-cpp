/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SWF pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/swf/SWFClientPagination.h>
#include <aws/swf/SWFPaginationBase.h>
#include <aws/swf/model/GetWorkflowExecutionHistoryPaginationTraits.h>
#include <aws/swf/model/ListDomainsPaginationTraits.h>
#include <aws/swf/model/PollForDecisionTaskPaginationTraits.h>
#include <aws/swf/model/ListActivityTypesPaginationTraits.h>
#include <aws/swf/model/ListClosedWorkflowExecutionsPaginationTraits.h>
#include <aws/swf/model/ListOpenWorkflowExecutionsPaginationTraits.h>
#include <aws/swf/model/ListWorkflowTypesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SWFPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SWFPaginationCompilationTest, SWFPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
