/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
  class CreateWorkflowStepResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API CreateWorkflowStepResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API CreateWorkflowStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API CreateWorkflowStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the step.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the step.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the step.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the step.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the step.</p>
     */
    inline CreateWorkflowStepResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the step.</p>
     */
    inline CreateWorkflowStepResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the step.</p>
     */
    inline CreateWorkflowStepResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetStepGroupId() const{ return m_stepGroupId; }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetStepGroupId(const Aws::String& value) { m_stepGroupId = value; }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetStepGroupId(Aws::String&& value) { m_stepGroupId = std::move(value); }

    /**
     * <p>The ID of the step group.</p>
     */
    inline void SetStepGroupId(const char* value) { m_stepGroupId.assign(value); }

    /**
     * <p>The ID of the step group.</p>
     */
    inline CreateWorkflowStepResult& WithStepGroupId(const Aws::String& value) { SetStepGroupId(value); return *this;}

    /**
     * <p>The ID of the step group.</p>
     */
    inline CreateWorkflowStepResult& WithStepGroupId(Aws::String&& value) { SetStepGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the step group.</p>
     */
    inline CreateWorkflowStepResult& WithStepGroupId(const char* value) { SetStepGroupId(value); return *this;}


    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline CreateWorkflowStepResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline CreateWorkflowStepResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline CreateWorkflowStepResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline CreateWorkflowStepResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline CreateWorkflowStepResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline CreateWorkflowStepResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_stepGroupId;

    Aws::String m_workflowId;

    Aws::String m_name;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
