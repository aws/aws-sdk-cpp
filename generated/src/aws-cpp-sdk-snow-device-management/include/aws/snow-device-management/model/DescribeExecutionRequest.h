/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/snow-device-management/SnowDeviceManagementRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   */
  class DescribeExecutionRequest : public SnowDeviceManagementRequest
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API DescribeExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExecution"; }

    AWS_SNOWDEVICEMANAGEMENT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the managed device.</p>
     */
    inline const Aws::String& GetManagedDeviceId() const{ return m_managedDeviceId; }

    /**
     * <p>The ID of the managed device.</p>
     */
    inline bool ManagedDeviceIdHasBeenSet() const { return m_managedDeviceIdHasBeenSet; }

    /**
     * <p>The ID of the managed device.</p>
     */
    inline void SetManagedDeviceId(const Aws::String& value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId = value; }

    /**
     * <p>The ID of the managed device.</p>
     */
    inline void SetManagedDeviceId(Aws::String&& value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId = std::move(value); }

    /**
     * <p>The ID of the managed device.</p>
     */
    inline void SetManagedDeviceId(const char* value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId.assign(value); }

    /**
     * <p>The ID of the managed device.</p>
     */
    inline DescribeExecutionRequest& WithManagedDeviceId(const Aws::String& value) { SetManagedDeviceId(value); return *this;}

    /**
     * <p>The ID of the managed device.</p>
     */
    inline DescribeExecutionRequest& WithManagedDeviceId(Aws::String&& value) { SetManagedDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the managed device.</p>
     */
    inline DescribeExecutionRequest& WithManagedDeviceId(const char* value) { SetManagedDeviceId(value); return *this;}


    /**
     * <p>The ID of the task that the action is describing.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The ID of the task that the action is describing.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The ID of the task that the action is describing.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The ID of the task that the action is describing.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The ID of the task that the action is describing.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The ID of the task that the action is describing.</p>
     */
    inline DescribeExecutionRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of the task that the action is describing.</p>
     */
    inline DescribeExecutionRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the task that the action is describing.</p>
     */
    inline DescribeExecutionRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    Aws::String m_managedDeviceId;
    bool m_managedDeviceIdHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
