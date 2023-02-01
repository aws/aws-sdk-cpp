/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MigrationHubOrchestrator
{
namespace Model
{
  class DeleteWorkflowStepGroupResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API DeleteWorkflowStepGroupResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API DeleteWorkflowStepGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API DeleteWorkflowStepGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
