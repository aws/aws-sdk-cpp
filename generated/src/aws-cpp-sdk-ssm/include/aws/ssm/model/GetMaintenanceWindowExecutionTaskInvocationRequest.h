/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetMaintenanceWindowExecutionTaskInvocationRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetMaintenanceWindowExecutionTaskInvocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMaintenanceWindowExecutionTaskInvocation"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the maintenance window execution for which the task is a part.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const{ return m_windowExecutionId; }
    inline bool WindowExecutionIdHasBeenSet() const { return m_windowExecutionIdHasBeenSet; }
    inline void SetWindowExecutionId(const Aws::String& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = value; }
    inline void SetWindowExecutionId(Aws::String&& value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId = std::move(value); }
    inline void SetWindowExecutionId(const char* value) { m_windowExecutionIdHasBeenSet = true; m_windowExecutionId.assign(value); }
    inline GetMaintenanceWindowExecutionTaskInvocationRequest& WithWindowExecutionId(const Aws::String& value) { SetWindowExecutionId(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskInvocationRequest& WithWindowExecutionId(Aws::String&& value) { SetWindowExecutionId(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionTaskInvocationRequest& WithWindowExecutionId(const char* value) { SetWindowExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the specific task in the maintenance window task that should be
     * retrieved. </p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline GetMaintenanceWindowExecutionTaskInvocationRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskInvocationRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionTaskInvocationRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation ID to retrieve.</p>
     */
    inline const Aws::String& GetInvocationId() const{ return m_invocationId; }
    inline bool InvocationIdHasBeenSet() const { return m_invocationIdHasBeenSet; }
    inline void SetInvocationId(const Aws::String& value) { m_invocationIdHasBeenSet = true; m_invocationId = value; }
    inline void SetInvocationId(Aws::String&& value) { m_invocationIdHasBeenSet = true; m_invocationId = std::move(value); }
    inline void SetInvocationId(const char* value) { m_invocationIdHasBeenSet = true; m_invocationId.assign(value); }
    inline GetMaintenanceWindowExecutionTaskInvocationRequest& WithInvocationId(const Aws::String& value) { SetInvocationId(value); return *this;}
    inline GetMaintenanceWindowExecutionTaskInvocationRequest& WithInvocationId(Aws::String&& value) { SetInvocationId(std::move(value)); return *this;}
    inline GetMaintenanceWindowExecutionTaskInvocationRequest& WithInvocationId(const char* value) { SetInvocationId(value); return *this;}
    ///@}
  private:

    Aws::String m_windowExecutionId;
    bool m_windowExecutionIdHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_invocationId;
    bool m_invocationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
