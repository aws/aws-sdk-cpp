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
    AWS_SSM_API DeregisterTargetFromMaintenanceWindowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterTargetFromMaintenanceWindow"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the maintenance window the target should be removed from.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the maintenance window the target should be removed from.</p>
     */
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }

    /**
     * <p>The ID of the maintenance window the target should be removed from.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the maintenance window the target should be removed from.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The ID of the maintenance window the target should be removed from.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the maintenance window the target should be removed from.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the maintenance window the target should be removed from.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window the target should be removed from.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline const Aws::String& GetWindowTargetId() const{ return m_windowTargetId; }

    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline bool WindowTargetIdHasBeenSet() const { return m_windowTargetIdHasBeenSet; }

    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline void SetWindowTargetId(const Aws::String& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = value; }

    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline void SetWindowTargetId(Aws::String&& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = std::move(value); }

    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline void SetWindowTargetId(const char* value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId.assign(value); }

    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowRequest& WithWindowTargetId(const Aws::String& value) { SetWindowTargetId(value); return *this;}

    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowRequest& WithWindowTargetId(Aws::String&& value) { SetWindowTargetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target definition to remove.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowRequest& WithWindowTargetId(const char* value) { SetWindowTargetId(value); return *this;}


    /**
     * <p>The system checks if the target is being referenced by a task. If the target
     * is being referenced, the system returns an error and doesn't deregister the
     * target from the maintenance window.</p>
     */
    inline bool GetSafe() const{ return m_safe; }

    /**
     * <p>The system checks if the target is being referenced by a task. If the target
     * is being referenced, the system returns an error and doesn't deregister the
     * target from the maintenance window.</p>
     */
    inline bool SafeHasBeenSet() const { return m_safeHasBeenSet; }

    /**
     * <p>The system checks if the target is being referenced by a task. If the target
     * is being referenced, the system returns an error and doesn't deregister the
     * target from the maintenance window.</p>
     */
    inline void SetSafe(bool value) { m_safeHasBeenSet = true; m_safe = value; }

    /**
     * <p>The system checks if the target is being referenced by a task. If the target
     * is being referenced, the system returns an error and doesn't deregister the
     * target from the maintenance window.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowRequest& WithSafe(bool value) { SetSafe(value); return *this;}

  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_windowTargetId;
    bool m_windowTargetIdHasBeenSet = false;

    bool m_safe;
    bool m_safeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
