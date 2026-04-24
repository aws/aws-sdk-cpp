/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CloudDirectory pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/clouddirectory/CloudDirectoryClientPagination.h>
#include <aws/clouddirectory/CloudDirectoryPaginationBase.h>
#include <aws/clouddirectory/model/ListObjectParentPathsPaginationTraits.h>
#include <aws/clouddirectory/model/ListPublishedSchemaArnsPaginationTraits.h>
#include <aws/clouddirectory/model/ListDirectoriesPaginationTraits.h>
#include <aws/clouddirectory/model/ListDevelopmentSchemaArnsPaginationTraits.h>
#include <aws/clouddirectory/model/ListObjectAttributesPaginationTraits.h>
#include <aws/clouddirectory/model/ListObjectPoliciesPaginationTraits.h>
#include <aws/clouddirectory/model/ListObjectParentsPaginationTraits.h>
#include <aws/clouddirectory/model/ListAttachedIndicesPaginationTraits.h>
#include <aws/clouddirectory/model/ListFacetNamesPaginationTraits.h>
#include <aws/clouddirectory/model/ListTypedLinkFacetNamesPaginationTraits.h>
#include <aws/clouddirectory/model/ListPolicyAttachmentsPaginationTraits.h>
#include <aws/clouddirectory/model/LookupPolicyPaginationTraits.h>
#include <aws/clouddirectory/model/ListFacetAttributesPaginationTraits.h>
#include <aws/clouddirectory/model/ListManagedSchemaArnsPaginationTraits.h>
#include <aws/clouddirectory/model/ListTagsForResourcePaginationTraits.h>
#include <aws/clouddirectory/model/ListTypedLinkFacetAttributesPaginationTraits.h>
#include <aws/clouddirectory/model/ListAppliedSchemaArnsPaginationTraits.h>
#include <aws/clouddirectory/model/ListIndexPaginationTraits.h>
#include <aws/clouddirectory/model/ListObjectChildrenPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CloudDirectoryPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CloudDirectoryPaginationCompilationTest, CloudDirectoryPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
