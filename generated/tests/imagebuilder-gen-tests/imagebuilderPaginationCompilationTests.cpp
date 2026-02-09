/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for imagebuilder pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/imagebuilder/ImagebuilderClientPagination.h>
#include <aws/imagebuilder/ImagebuilderPaginationBase.h>
#include <aws/imagebuilder/model/ListLifecycleExecutionResourcesPaginationTraits.h>
#include <aws/imagebuilder/model/ListImageBuildVersionsPaginationTraits.h>
#include <aws/imagebuilder/model/ListImagePipelinesPaginationTraits.h>
#include <aws/imagebuilder/model/ListComponentsPaginationTraits.h>
#include <aws/imagebuilder/model/ListWaitingWorkflowStepsPaginationTraits.h>
#include <aws/imagebuilder/model/ListWorkflowsPaginationTraits.h>
#include <aws/imagebuilder/model/ListComponentBuildVersionsPaginationTraits.h>
#include <aws/imagebuilder/model/ListLifecyclePoliciesPaginationTraits.h>
#include <aws/imagebuilder/model/ListImagePackagesPaginationTraits.h>
#include <aws/imagebuilder/model/ListImagePipelineImagesPaginationTraits.h>
#include <aws/imagebuilder/model/ListImageScanFindingsPaginationTraits.h>
#include <aws/imagebuilder/model/ListImageRecipesPaginationTraits.h>
#include <aws/imagebuilder/model/ListWorkflowStepExecutionsPaginationTraits.h>
#include <aws/imagebuilder/model/ListInfrastructureConfigurationsPaginationTraits.h>
#include <aws/imagebuilder/model/ListLifecycleExecutionsPaginationTraits.h>
#include <aws/imagebuilder/model/ListWorkflowExecutionsPaginationTraits.h>
#include <aws/imagebuilder/model/ListImageScanFindingAggregationsPaginationTraits.h>
#include <aws/imagebuilder/model/ListDistributionConfigurationsPaginationTraits.h>
#include <aws/imagebuilder/model/ListContainerRecipesPaginationTraits.h>
#include <aws/imagebuilder/model/ListImagesPaginationTraits.h>
#include <aws/imagebuilder/model/ListWorkflowBuildVersionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class imagebuilderPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(imagebuilderPaginationCompilationTest, imagebuilderPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
