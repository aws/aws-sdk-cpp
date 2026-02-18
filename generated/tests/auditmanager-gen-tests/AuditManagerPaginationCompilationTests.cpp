/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AuditManager pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/auditmanager/AuditManagerClientPagination.h>
#include <aws/auditmanager/AuditManagerPaginationBase.h>
#include <aws/auditmanager/model/GetDelegationsPaginationTraits.h>
#include <aws/auditmanager/model/ListControlDomainInsightsByAssessmentPaginationTraits.h>
#include <aws/auditmanager/model/ListControlInsightsByControlDomainPaginationTraits.h>
#include <aws/auditmanager/model/ListNotificationsPaginationTraits.h>
#include <aws/auditmanager/model/GetChangeLogsPaginationTraits.h>
#include <aws/auditmanager/model/ListAssessmentFrameworksPaginationTraits.h>
#include <aws/auditmanager/model/ListAssessmentControlInsightsByControlDomainPaginationTraits.h>
#include <aws/auditmanager/model/ListKeywordsForDataSourcePaginationTraits.h>
#include <aws/auditmanager/model/ListControlDomainInsightsPaginationTraits.h>
#include <aws/auditmanager/model/GetEvidenceByEvidenceFolderPaginationTraits.h>
#include <aws/auditmanager/model/ListControlsPaginationTraits.h>
#include <aws/auditmanager/model/ListAssessmentReportsPaginationTraits.h>
#include <aws/auditmanager/model/GetEvidenceFoldersByAssessmentPaginationTraits.h>
#include <aws/auditmanager/model/GetEvidenceFoldersByAssessmentControlPaginationTraits.h>
#include <aws/auditmanager/model/ListAssessmentsPaginationTraits.h>
#include <aws/auditmanager/model/ListAssessmentFrameworkShareRequestsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AuditManagerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AuditManagerPaginationCompilationTest, AuditManagerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
