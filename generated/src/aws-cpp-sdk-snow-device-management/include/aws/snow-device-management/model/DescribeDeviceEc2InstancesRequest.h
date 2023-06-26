/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/snow-device-management/SnowDeviceManagementRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeDeviceEc2InstancesRequest : public SnowDeviceManagementRequest
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API DescribeDeviceEc2InstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDeviceEc2Instances"; }

    AWS_SNOWDEVICEMANAGEMENT_API Aws::String SerializePayload() const override;


    /**
     * <p>A list of instance IDs associated with the managed device.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>A list of instance IDs associated with the managed device.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>A list of instance IDs associated with the managed device.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>A list of instance IDs associated with the managed device.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>A list of instance IDs associated with the managed device.</p>
     */
    inline DescribeDeviceEc2InstancesRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>A list of instance IDs associated with the managed device.</p>
     */
    inline DescribeDeviceEc2InstancesRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>A list of instance IDs associated with the managed device.</p>
     */
    inline DescribeDeviceEc2InstancesRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>A list of instance IDs associated with the managed device.</p>
     */
    inline DescribeDeviceEc2InstancesRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of instance IDs associated with the managed device.</p>
     */
    inline DescribeDeviceEc2InstancesRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }


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
    inline DescribeDeviceEc2InstancesRequest& WithManagedDeviceId(const Aws::String& value) { SetManagedDeviceId(value); return *this;}

    /**
     * <p>The ID of the managed device.</p>
     */
    inline DescribeDeviceEc2InstancesRequest& WithManagedDeviceId(Aws::String&& value) { SetManagedDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the managed device.</p>
     */
    inline DescribeDeviceEc2InstancesRequest& WithManagedDeviceId(const char* value) { SetManagedDeviceId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    Aws::String m_managedDeviceId;
    bool m_managedDeviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
