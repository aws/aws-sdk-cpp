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
    AWS_PRIVATENETWORKS_API GetDeviceIdentifierRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeviceIdentifier"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the device identifier.</p>
     */
    inline const Aws::String& GetDeviceIdentifierArn() const{ return m_deviceIdentifierArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device identifier.</p>
     */
    inline bool DeviceIdentifierArnHasBeenSet() const { return m_deviceIdentifierArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device identifier.</p>
     */
    inline void SetDeviceIdentifierArn(const Aws::String& value) { m_deviceIdentifierArnHasBeenSet = true; m_deviceIdentifierArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device identifier.</p>
     */
    inline void SetDeviceIdentifierArn(Aws::String&& value) { m_deviceIdentifierArnHasBeenSet = true; m_deviceIdentifierArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the device identifier.</p>
     */
    inline void SetDeviceIdentifierArn(const char* value) { m_deviceIdentifierArnHasBeenSet = true; m_deviceIdentifierArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the device identifier.</p>
     */
    inline GetDeviceIdentifierRequest& WithDeviceIdentifierArn(const Aws::String& value) { SetDeviceIdentifierArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device identifier.</p>
     */
    inline GetDeviceIdentifierRequest& WithDeviceIdentifierArn(Aws::String&& value) { SetDeviceIdentifierArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device identifier.</p>
     */
    inline GetDeviceIdentifierRequest& WithDeviceIdentifierArn(const char* value) { SetDeviceIdentifierArn(value); return *this;}

  private:

    Aws::String m_deviceIdentifierArn;
    bool m_deviceIdentifierArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
