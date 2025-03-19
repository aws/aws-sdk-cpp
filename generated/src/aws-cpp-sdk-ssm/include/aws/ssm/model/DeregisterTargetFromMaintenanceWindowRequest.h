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
  class DeregisterTargetFromMaintenanceWindowRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DeregisterTargetFromMaintenanceWindowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterTargetFromMaintenanceWindow"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the maintenance window the target should be removed from.</p>
     */
    inline const Aws::String& GetWindowId() const { return m_windowId; }
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }
    template<typename WindowIdT = Aws::String>
    void SetWindowId(WindowIdT&& value) { m_windowIdHasBeenSet = true; m_windowId = std::forward<WindowIdT>(value); }
    template<typename WindowIdT = Aws::String>
    DeregisterTargetFromMaintenanceWindowRequest& WithWindowId(WindowIdT&& value) { SetWindowId(std::forward<WindowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline const Aws::String& GetWindowTargetId() const { return m_windowTargetId; }
    inline bool WindowTargetIdHasBeenSet() const { return m_windowTargetIdHasBeenSet; }
    template<typename WindowTargetIdT = Aws::String>
    void SetWindowTargetId(WindowTargetIdT&& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = std::forward<WindowTargetIdT>(value); }
    template<typename WindowTargetIdT = Aws::String>
    DeregisterTargetFromMaintenanceWindowRequest& WithWindowTargetId(WindowTargetIdT&& value) { SetWindowTargetId(std::forward<WindowTargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system checks if the target is being referenced by a task. If the target
     * is being referenced, the system returns an error and doesn't deregister the
     * target from the maintenance window.</p>
     */
    inline bool GetSafe() const { return m_safe; }
    inline bool SafeHasBeenSet() const { return m_safeHasBeenSet; }
    inline void SetSafe(bool value) { m_safeHasBeenSet = true; m_safe = value; }
    inline DeregisterTargetFromMaintenanceWindowRequest& WithSafe(bool value) { SetSafe(value); return *this;}
    ///@}
  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_windowTargetId;
    bool m_windowTargetIdHasBeenSet = false;

    bool m_safe{false};
    bool m_safeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
