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
  class GetMaintenanceWindowTaskRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetMaintenanceWindowTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMaintenanceWindowTask"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The maintenance window ID that includes the task to retrieve.</p>
     */
    inline const Aws::String& GetWindowId() const { return m_windowId; }
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }
    template<typename WindowIdT = Aws::String>
    void SetWindowId(WindowIdT&& value) { m_windowIdHasBeenSet = true; m_windowId = std::forward<WindowIdT>(value); }
    template<typename WindowIdT = Aws::String>
    GetMaintenanceWindowTaskRequest& WithWindowId(WindowIdT&& value) { SetWindowId(std::forward<WindowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintenance window task ID to retrieve.</p>
     */
    inline const Aws::String& GetWindowTaskId() const { return m_windowTaskId; }
    inline bool WindowTaskIdHasBeenSet() const { return m_windowTaskIdHasBeenSet; }
    template<typename WindowTaskIdT = Aws::String>
    void SetWindowTaskId(WindowTaskIdT&& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = std::forward<WindowTaskIdT>(value); }
    template<typename WindowTaskIdT = Aws::String>
    GetMaintenanceWindowTaskRequest& WithWindowTaskId(WindowTaskIdT&& value) { SetWindowTaskId(std::forward<WindowTaskIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_windowTaskId;
    bool m_windowTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
