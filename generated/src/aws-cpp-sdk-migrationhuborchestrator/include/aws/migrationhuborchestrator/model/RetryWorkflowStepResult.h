﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/StepStatus.h>
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
  class RetryWorkflowStepResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API RetryWorkflowStepResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API RetryWorkflowStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API RetryWorkflowStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the step group.</p>
     */
    inline const Aws::String& GetStepGroupId() const{ return m_stepGroupId; }
    inline void SetStepGroupId(const Aws::String& value) { m_stepGroupId = value; }
    inline void SetStepGroupId(Aws::String&& value) { m_stepGroupId = std::move(value); }
    inline void SetStepGroupId(const char* value) { m_stepGroupId.assign(value); }
    inline RetryWorkflowStepResult& WithStepGroupId(const Aws::String& value) { SetStepGroupId(value); return *this;}
    inline RetryWorkflowStepResult& WithStepGroupId(Aws::String&& value) { SetStepGroupId(std::move(value)); return *this;}
    inline RetryWorkflowStepResult& WithStepGroupId(const char* value) { SetStepGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the migration workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }
    inline RetryWorkflowStepResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline RetryWorkflowStepResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline RetryWorkflowStepResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the step.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline RetryWorkflowStepResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RetryWorkflowStepResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RetryWorkflowStepResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the step.</p>
     */
    inline const StepStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const StepStatus& value) { m_status = value; }
    inline void SetStatus(StepStatus&& value) { m_status = std::move(value); }
    inline RetryWorkflowStepResult& WithStatus(const StepStatus& value) { SetStatus(value); return *this;}
    inline RetryWorkflowStepResult& WithStatus(StepStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RetryWorkflowStepResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RetryWorkflowStepResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RetryWorkflowStepResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_stepGroupId;

    Aws::String m_workflowId;

    Aws::String m_id;

    StepStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
