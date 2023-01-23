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
  class DeregisterTaskFromMaintenanceWindowRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DeregisterTaskFromMaintenanceWindowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterTaskFromMaintenanceWindow"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the maintenance window the task should be removed from.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the maintenance window the task should be removed from.</p>
     */
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }

    /**
     * <p>The ID of the maintenance window the task should be removed from.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the maintenance window the task should be removed from.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The ID of the maintenance window the task should be removed from.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the maintenance window the task should be removed from.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the maintenance window the task should be removed from.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window the task should be removed from.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The ID of the task to remove from the maintenance window.</p>
     */
    inline const Aws::String& GetWindowTaskId() const{ return m_windowTaskId; }

    /**
     * <p>The ID of the task to remove from the maintenance window.</p>
     */
    inline bool WindowTaskIdHasBeenSet() const { return m_windowTaskIdHasBeenSet; }

    /**
     * <p>The ID of the task to remove from the maintenance window.</p>
     */
    inline void SetWindowTaskId(const Aws::String& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = value; }

    /**
     * <p>The ID of the task to remove from the maintenance window.</p>
     */
    inline void SetWindowTaskId(Aws::String&& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = std::move(value); }

    /**
     * <p>The ID of the task to remove from the maintenance window.</p>
     */
    inline void SetWindowTaskId(const char* value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId.assign(value); }

    /**
     * <p>The ID of the task to remove from the maintenance window.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowRequest& WithWindowTaskId(const Aws::String& value) { SetWindowTaskId(value); return *this;}

    /**
     * <p>The ID of the task to remove from the maintenance window.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowRequest& WithWindowTaskId(Aws::String&& value) { SetWindowTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the task to remove from the maintenance window.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowRequest& WithWindowTaskId(const char* value) { SetWindowTaskId(value); return *this;}

  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_windowTaskId;
    bool m_windowTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
