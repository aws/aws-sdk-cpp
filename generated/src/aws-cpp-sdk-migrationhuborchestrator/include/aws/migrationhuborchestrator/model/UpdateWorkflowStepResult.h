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
  class UpdateWorkflowStepResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API UpdateWorkflowStepResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API UpdateWorkflowStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API UpdateWorkflowStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the step.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateWorkflowStepResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateWorkflowStepResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateWorkflowStepResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetStepGroupId() const{ return m_stepGroupId; }
    inline void SetStepGroupId(const Aws::String& value) { m_stepGroupId = value; }
    inline void SetStepGroupId(Aws::String&& value) { m_stepGroupId = std::move(value); }
    inline void SetStepGroupId(const char* value) { m_stepGroupId.assign(value); }
    inline UpdateWorkflowStepResult& WithStepGroupId(const Aws::String& value) { SetStepGroupId(value); return *this;}
    inline UpdateWorkflowStepResult& WithStepGroupId(Aws::String&& value) { SetStepGroupId(std::move(value)); return *this;}
    inline UpdateWorkflowStepResult& WithStepGroupId(const char* value) { SetStepGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }
    inline UpdateWorkflowStepResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline UpdateWorkflowStepResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline UpdateWorkflowStepResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateWorkflowStepResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateWorkflowStepResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateWorkflowStepResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateWorkflowStepResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateWorkflowStepResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateWorkflowStepResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_stepGroupId;

    Aws::String m_workflowId;

    Aws::String m_name;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
