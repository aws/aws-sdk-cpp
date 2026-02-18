/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Omics pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/omics/OmicsClientPagination.h>
#include <aws/omics/OmicsPaginationBase.h>
#include <aws/omics/model/ListAnnotationImportJobsPaginationTraits.h>
#include <aws/omics/model/ListReferenceStoresPaginationTraits.h>
#include <aws/omics/model/ListSharesPaginationTraits.h>
#include <aws/omics/model/ListReadSetImportJobsPaginationTraits.h>
#include <aws/omics/model/ListMultipartReadSetUploadsPaginationTraits.h>
#include <aws/omics/model/ListReadSetUploadPartsPaginationTraits.h>
#include <aws/omics/model/ListVariantImportJobsPaginationTraits.h>
#include <aws/omics/model/ListWorkflowVersionsPaginationTraits.h>
#include <aws/omics/model/ListRunGroupsPaginationTraits.h>
#include <aws/omics/model/ListSequenceStoresPaginationTraits.h>
#include <aws/omics/model/ListWorkflowsPaginationTraits.h>
#include <aws/omics/model/ListReadSetExportJobsPaginationTraits.h>
#include <aws/omics/model/ListReferencesPaginationTraits.h>
#include <aws/omics/model/ListAnnotationStoresPaginationTraits.h>
#include <aws/omics/model/ListRunsPaginationTraits.h>
#include <aws/omics/model/ListRunTasksPaginationTraits.h>
#include <aws/omics/model/ListAnnotationStoreVersionsPaginationTraits.h>
#include <aws/omics/model/ListVariantStoresPaginationTraits.h>
#include <aws/omics/model/ListReadSetsPaginationTraits.h>
#include <aws/omics/model/ListReferenceImportJobsPaginationTraits.h>
#include <aws/omics/model/ListReadSetActivationJobsPaginationTraits.h>
#include <aws/omics/model/ListRunCachesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class OmicsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(OmicsPaginationCompilationTest, OmicsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
