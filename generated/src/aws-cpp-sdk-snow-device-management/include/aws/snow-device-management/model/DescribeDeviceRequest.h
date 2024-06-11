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
  class DescribeDeviceRequest : public SnowDeviceManagementRequest
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API DescribeDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDevice"; }

    AWS_SNOWDEVICEMANAGEMENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the device that you are checking the information of.</p>
     */
    inline const Aws::String& GetManagedDeviceId() const{ return m_managedDeviceId; }
    inline bool ManagedDeviceIdHasBeenSet() const { return m_managedDeviceIdHasBeenSet; }
    inline void SetManagedDeviceId(const Aws::String& value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId = value; }
    inline void SetManagedDeviceId(Aws::String&& value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId = std::move(value); }
    inline void SetManagedDeviceId(const char* value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId.assign(value); }
    inline DescribeDeviceRequest& WithManagedDeviceId(const Aws::String& value) { SetManagedDeviceId(value); return *this;}
    inline DescribeDeviceRequest& WithManagedDeviceId(Aws::String&& value) { SetManagedDeviceId(std::move(value)); return *this;}
    inline DescribeDeviceRequest& WithManagedDeviceId(const char* value) { SetManagedDeviceId(value); return *this;}
    ///@}
  private:

    Aws::String m_managedDeviceId;
    bool m_managedDeviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
