/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MedicalImaging pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/medical-imaging/MedicalImagingClientPagination.h>
#include <aws/medical-imaging/MedicalImagingPaginationBase.h>
#include <aws/medical-imaging/model/ListDatastoresPaginationTraits.h>
#include <aws/medical-imaging/model/ListImageSetVersionsPaginationTraits.h>
#include <aws/medical-imaging/model/SearchImageSetsPaginationTraits.h>
#include <aws/medical-imaging/model/ListDICOMImportJobsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MedicalImagingPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MedicalImagingPaginationCompilationTest, MedicalImagingPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
