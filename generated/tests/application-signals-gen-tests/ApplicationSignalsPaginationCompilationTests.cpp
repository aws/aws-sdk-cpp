/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ApplicationSignals pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/application-signals/ApplicationSignalsClientPagination.h>
#include <aws/application-signals/ApplicationSignalsPaginationBase.h>
#include <aws/application-signals/model/ListServiceOperationsPaginationTraits.h>
#include <aws/application-signals/model/ListServiceLevelObjectivesPaginationTraits.h>
#include <aws/application-signals/model/ListServiceDependenciesPaginationTraits.h>
#include <aws/application-signals/model/ListEntityEventsPaginationTraits.h>
#include <aws/application-signals/model/ListServiceLevelObjectiveExclusionWindowsPaginationTraits.h>
#include <aws/application-signals/model/ListServicesPaginationTraits.h>
#include <aws/application-signals/model/ListServiceStatesPaginationTraits.h>
#include <aws/application-signals/model/ListServiceDependentsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ApplicationSignalsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ApplicationSignalsPaginationCompilationTest, ApplicationSignalsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
