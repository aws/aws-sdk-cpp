/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SSMContacts pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ssm-contacts/SSMContactsClientPagination.h>
#include <aws/ssm-contacts/SSMContactsPaginationBase.h>
#include <aws/ssm-contacts/model/ListContactChannelsPaginationTraits.h>
#include <aws/ssm-contacts/model/ListContactsPaginationTraits.h>
#include <aws/ssm-contacts/model/ListPreviewRotationShiftsPaginationTraits.h>
#include <aws/ssm-contacts/model/ListPagesByEngagementPaginationTraits.h>
#include <aws/ssm-contacts/model/ListRotationShiftsPaginationTraits.h>
#include <aws/ssm-contacts/model/ListPagesByContactPaginationTraits.h>
#include <aws/ssm-contacts/model/ListRotationOverridesPaginationTraits.h>
#include <aws/ssm-contacts/model/ListEngagementsPaginationTraits.h>
#include <aws/ssm-contacts/model/ListPageResolutionsPaginationTraits.h>
#include <aws/ssm-contacts/model/ListRotationsPaginationTraits.h>
#include <aws/ssm-contacts/model/ListPageReceiptsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SSMContactsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SSMContactsPaginationCompilationTest, SSMContactsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
