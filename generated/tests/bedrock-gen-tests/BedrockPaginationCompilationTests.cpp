/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Bedrock pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/bedrock/BedrockClientPagination.h>
#include <aws/bedrock/BedrockPaginationBase.h>
#include <aws/bedrock/model/ListAutomatedReasoningPolicyTestResultsPaginationTraits.h>
#include <aws/bedrock/model/ListGuardrailsPaginationTraits.h>
#include <aws/bedrock/model/ListEnforcedGuardrailsConfigurationPaginationTraits.h>
#include <aws/bedrock/model/ListPromptRoutersPaginationTraits.h>
#include <aws/bedrock/model/ListImportedModelsPaginationTraits.h>
#include <aws/bedrock/model/ListAutomatedReasoningPolicyTestCasesPaginationTraits.h>
#include <aws/bedrock/model/ListModelCopyJobsPaginationTraits.h>
#include <aws/bedrock/model/ListModelImportJobsPaginationTraits.h>
#include <aws/bedrock/model/ListMarketplaceModelEndpointsPaginationTraits.h>
#include <aws/bedrock/model/ListProvisionedModelThroughputsPaginationTraits.h>
#include <aws/bedrock/model/ListCustomModelDeploymentsPaginationTraits.h>
#include <aws/bedrock/model/ListModelInvocationJobsPaginationTraits.h>
#include <aws/bedrock/model/ListCustomModelsPaginationTraits.h>
#include <aws/bedrock/model/ListAutomatedReasoningPoliciesPaginationTraits.h>
#include <aws/bedrock/model/ListAutomatedReasoningPolicyBuildWorkflowsPaginationTraits.h>
#include <aws/bedrock/model/ListEvaluationJobsPaginationTraits.h>
#include <aws/bedrock/model/ListModelCustomizationJobsPaginationTraits.h>
#include <aws/bedrock/model/ListInferenceProfilesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BedrockPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BedrockPaginationCompilationTest, BedrockPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
