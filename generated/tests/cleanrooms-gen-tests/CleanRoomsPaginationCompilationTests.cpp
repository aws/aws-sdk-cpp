/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CleanRooms pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/cleanrooms/CleanRoomsClientPagination.h>
#include <aws/cleanrooms/CleanRoomsPaginationBase.h>
#include <aws/cleanrooms/model/ListCollaborationAnalysisTemplatesPaginationTraits.h>
#include <aws/cleanrooms/model/ListCollaborationChangeRequestsPaginationTraits.h>
#include <aws/cleanrooms/model/ListConfiguredTableAssociationsPaginationTraits.h>
#include <aws/cleanrooms/model/ListCollaborationPrivacyBudgetsPaginationTraits.h>
#include <aws/cleanrooms/model/ListPrivacyBudgetsPaginationTraits.h>
#include <aws/cleanrooms/model/ListMembersPaginationTraits.h>
#include <aws/cleanrooms/model/ListConfiguredAudienceModelAssociationsPaginationTraits.h>
#include <aws/cleanrooms/model/ListCollaborationIdNamespaceAssociationsPaginationTraits.h>
#include <aws/cleanrooms/model/ListMembershipsPaginationTraits.h>
#include <aws/cleanrooms/model/ListConfiguredTablesPaginationTraits.h>
#include <aws/cleanrooms/model/ListIdMappingTablesPaginationTraits.h>
#include <aws/cleanrooms/model/ListCollaborationConfiguredAudienceModelAssociationsPaginationTraits.h>
#include <aws/cleanrooms/model/ListProtectedQueriesPaginationTraits.h>
#include <aws/cleanrooms/model/ListSchemasPaginationTraits.h>
#include <aws/cleanrooms/model/ListAnalysisTemplatesPaginationTraits.h>
#include <aws/cleanrooms/model/ListCollaborationPrivacyBudgetTemplatesPaginationTraits.h>
#include <aws/cleanrooms/model/ListIdNamespaceAssociationsPaginationTraits.h>
#include <aws/cleanrooms/model/ListCollaborationsPaginationTraits.h>
#include <aws/cleanrooms/model/ListPrivacyBudgetTemplatesPaginationTraits.h>
#include <aws/cleanrooms/model/ListProtectedJobsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CleanRoomsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CleanRoomsPaginationCompilationTest, CleanRoomsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
