/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Scheduler pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/scheduler/SchedulerClientPagination.h>
#include <aws/scheduler/SchedulerPaginationBase.h>
#include <aws/scheduler/model/ListScheduleGroupsPaginationTraits.h>
#include <aws/scheduler/model/ListSchedulesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SchedulerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SchedulerPaginationCompilationTest, SchedulerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
