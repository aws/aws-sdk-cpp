/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class GetDeviceIdentifierRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API GetDeviceIdentifierRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeviceIdentifier"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device identifier.</p>
     */
    inline const Aws::String& GetDeviceIdentifierArn() const { return m_deviceIdentifierArn; }
    inline bool DeviceIdentifierArnHasBeenSet() const { return m_deviceIdentifierArnHasBeenSet; }
    template<typename DeviceIdentifierArnT = Aws::String>
    void SetDeviceIdentifierArn(DeviceIdentifierArnT&& value) { m_deviceIdentifierArnHasBeenSet = true; m_deviceIdentifierArn = std::forward<DeviceIdentifierArnT>(value); }
    template<typename DeviceIdentifierArnT = Aws::String>
    GetDeviceIdentifierRequest& WithDeviceIdentifierArn(DeviceIdentifierArnT&& value) { SetDeviceIdentifierArn(std::forward<DeviceIdentifierArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceIdentifierArn;
    bool m_deviceIdentifierArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
