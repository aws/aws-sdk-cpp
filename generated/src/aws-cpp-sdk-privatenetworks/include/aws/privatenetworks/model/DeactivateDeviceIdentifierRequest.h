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
  class DeactivateDeviceIdentifierRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API DeactivateDeviceIdentifierRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeactivateDeviceIdentifier"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline DeactivateDeviceIdentifierRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline DeactivateDeviceIdentifierRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline DeactivateDeviceIdentifierRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device identifier.</p>
     */
    inline const Aws::String& GetDeviceIdentifierArn() const{ return m_deviceIdentifierArn; }
    inline bool DeviceIdentifierArnHasBeenSet() const { return m_deviceIdentifierArnHasBeenSet; }
    inline void SetDeviceIdentifierArn(const Aws::String& value) { m_deviceIdentifierArnHasBeenSet = true; m_deviceIdentifierArn = value; }
    inline void SetDeviceIdentifierArn(Aws::String&& value) { m_deviceIdentifierArnHasBeenSet = true; m_deviceIdentifierArn = std::move(value); }
    inline void SetDeviceIdentifierArn(const char* value) { m_deviceIdentifierArnHasBeenSet = true; m_deviceIdentifierArn.assign(value); }
    inline DeactivateDeviceIdentifierRequest& WithDeviceIdentifierArn(const Aws::String& value) { SetDeviceIdentifierArn(value); return *this;}
    inline DeactivateDeviceIdentifierRequest& WithDeviceIdentifierArn(Aws::String&& value) { SetDeviceIdentifierArn(std::move(value)); return *this;}
    inline DeactivateDeviceIdentifierRequest& WithDeviceIdentifierArn(const char* value) { SetDeviceIdentifierArn(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_deviceIdentifierArn;
    bool m_deviceIdentifierArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
