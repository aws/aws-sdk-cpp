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
  class DeleteMaintenanceWindowRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DeleteMaintenanceWindowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMaintenanceWindow"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the maintenance window to delete.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the maintenance window to delete.</p>
     */
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }

    /**
     * <p>The ID of the maintenance window to delete.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the maintenance window to delete.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The ID of the maintenance window to delete.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the maintenance window to delete.</p>
     */
    inline DeleteMaintenanceWindowRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the maintenance window to delete.</p>
     */
    inline DeleteMaintenanceWindowRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window to delete.</p>
     */
    inline DeleteMaintenanceWindowRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}

  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
