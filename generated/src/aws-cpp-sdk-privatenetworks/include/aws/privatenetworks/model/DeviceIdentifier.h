/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/DeviceIdentifierStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PrivateNetworks
{
namespace Model
{

  /**
   * <p>Information about a subscriber of a device that can use a
   * network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/DeviceIdentifier">AWS
   * API Reference</a></p>
   */
  class DeviceIdentifier
  {
  public:
    AWS_PRIVATENETWORKS_API DeviceIdentifier();
    AWS_PRIVATENETWORKS_API DeviceIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API DeviceIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The creation time of this device identifier.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The creation time of this device identifier.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The creation time of this device identifier.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The creation time of this device identifier.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The creation time of this device identifier.</p>
     */
    inline DeviceIdentifier& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The creation time of this device identifier.</p>
     */
    inline DeviceIdentifier& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


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
    inline DeviceIdentifier& WithDeviceIdentifierArn(const Aws::String& value) { SetDeviceIdentifierArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device identifier.</p>
     */
    inline DeviceIdentifier& WithDeviceIdentifierArn(Aws::String&& value) { SetDeviceIdentifierArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device identifier.</p>
     */
    inline DeviceIdentifier& WithDeviceIdentifierArn(const char* value) { SetDeviceIdentifierArn(value); return *this;}


    /**
     * <p>The Integrated Circuit Card Identifier of the device identifier.</p>
     */
    inline const Aws::String& GetIccid() const{ return m_iccid; }

    /**
     * <p>The Integrated Circuit Card Identifier of the device identifier.</p>
     */
    inline bool IccidHasBeenSet() const { return m_iccidHasBeenSet; }

    /**
     * <p>The Integrated Circuit Card Identifier of the device identifier.</p>
     */
    inline void SetIccid(const Aws::String& value) { m_iccidHasBeenSet = true; m_iccid = value; }

    /**
     * <p>The Integrated Circuit Card Identifier of the device identifier.</p>
     */
    inline void SetIccid(Aws::String&& value) { m_iccidHasBeenSet = true; m_iccid = std::move(value); }

    /**
     * <p>The Integrated Circuit Card Identifier of the device identifier.</p>
     */
    inline void SetIccid(const char* value) { m_iccidHasBeenSet = true; m_iccid.assign(value); }

    /**
     * <p>The Integrated Circuit Card Identifier of the device identifier.</p>
     */
    inline DeviceIdentifier& WithIccid(const Aws::String& value) { SetIccid(value); return *this;}

    /**
     * <p>The Integrated Circuit Card Identifier of the device identifier.</p>
     */
    inline DeviceIdentifier& WithIccid(Aws::String&& value) { SetIccid(std::move(value)); return *this;}

    /**
     * <p>The Integrated Circuit Card Identifier of the device identifier.</p>
     */
    inline DeviceIdentifier& WithIccid(const char* value) { SetIccid(value); return *this;}


    /**
     * <p>The International Mobile Subscriber Identity of the device identifier.</p>
     */
    inline const Aws::String& GetImsi() const{ return m_imsi; }

    /**
     * <p>The International Mobile Subscriber Identity of the device identifier.</p>
     */
    inline bool ImsiHasBeenSet() const { return m_imsiHasBeenSet; }

    /**
     * <p>The International Mobile Subscriber Identity of the device identifier.</p>
     */
    inline void SetImsi(const Aws::String& value) { m_imsiHasBeenSet = true; m_imsi = value; }

    /**
     * <p>The International Mobile Subscriber Identity of the device identifier.</p>
     */
    inline void SetImsi(Aws::String&& value) { m_imsiHasBeenSet = true; m_imsi = std::move(value); }

    /**
     * <p>The International Mobile Subscriber Identity of the device identifier.</p>
     */
    inline void SetImsi(const char* value) { m_imsiHasBeenSet = true; m_imsi.assign(value); }

    /**
     * <p>The International Mobile Subscriber Identity of the device identifier.</p>
     */
    inline DeviceIdentifier& WithImsi(const Aws::String& value) { SetImsi(value); return *this;}

    /**
     * <p>The International Mobile Subscriber Identity of the device identifier.</p>
     */
    inline DeviceIdentifier& WithImsi(Aws::String&& value) { SetImsi(std::move(value)); return *this;}

    /**
     * <p>The International Mobile Subscriber Identity of the device identifier.</p>
     */
    inline DeviceIdentifier& WithImsi(const char* value) { SetImsi(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the network on which the device identifier
     * appears.</p>
     */
    inline const Aws::String& GetNetworkArn() const{ return m_networkArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network on which the device identifier
     * appears.</p>
     */
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network on which the device identifier
     * appears.</p>
     */
    inline void SetNetworkArn(const Aws::String& value) { m_networkArnHasBeenSet = true; m_networkArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network on which the device identifier
     * appears.</p>
     */
    inline void SetNetworkArn(Aws::String&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network on which the device identifier
     * appears.</p>
     */
    inline void SetNetworkArn(const char* value) { m_networkArnHasBeenSet = true; m_networkArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network on which the device identifier
     * appears.</p>
     */
    inline DeviceIdentifier& WithNetworkArn(const Aws::String& value) { SetNetworkArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network on which the device identifier
     * appears.</p>
     */
    inline DeviceIdentifier& WithNetworkArn(Aws::String&& value) { SetNetworkArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network on which the device identifier
     * appears.</p>
     */
    inline DeviceIdentifier& WithNetworkArn(const char* value) { SetNetworkArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase the device
     * identifier.</p>
     */
    inline const Aws::String& GetOrderArn() const{ return m_orderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase the device
     * identifier.</p>
     */
    inline bool OrderArnHasBeenSet() const { return m_orderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase the device
     * identifier.</p>
     */
    inline void SetOrderArn(const Aws::String& value) { m_orderArnHasBeenSet = true; m_orderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase the device
     * identifier.</p>
     */
    inline void SetOrderArn(Aws::String&& value) { m_orderArnHasBeenSet = true; m_orderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase the device
     * identifier.</p>
     */
    inline void SetOrderArn(const char* value) { m_orderArnHasBeenSet = true; m_orderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase the device
     * identifier.</p>
     */
    inline DeviceIdentifier& WithOrderArn(const Aws::String& value) { SetOrderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase the device
     * identifier.</p>
     */
    inline DeviceIdentifier& WithOrderArn(Aws::String&& value) { SetOrderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase the device
     * identifier.</p>
     */
    inline DeviceIdentifier& WithOrderArn(const char* value) { SetOrderArn(value); return *this;}


    /**
     * <p>The status of the device identifier.</p>
     */
    inline const DeviceIdentifierStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the device identifier.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the device identifier.</p>
     */
    inline void SetStatus(const DeviceIdentifierStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the device identifier.</p>
     */
    inline void SetStatus(DeviceIdentifierStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the device identifier.</p>
     */
    inline DeviceIdentifier& WithStatus(const DeviceIdentifierStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the device identifier.</p>
     */
    inline DeviceIdentifier& WithStatus(DeviceIdentifierStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the traffic group to which the device
     * identifier belongs.</p>
     */
    inline const Aws::String& GetTrafficGroupArn() const{ return m_trafficGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic group to which the device
     * identifier belongs.</p>
     */
    inline bool TrafficGroupArnHasBeenSet() const { return m_trafficGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic group to which the device
     * identifier belongs.</p>
     */
    inline void SetTrafficGroupArn(const Aws::String& value) { m_trafficGroupArnHasBeenSet = true; m_trafficGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic group to which the device
     * identifier belongs.</p>
     */
    inline void SetTrafficGroupArn(Aws::String&& value) { m_trafficGroupArnHasBeenSet = true; m_trafficGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic group to which the device
     * identifier belongs.</p>
     */
    inline void SetTrafficGroupArn(const char* value) { m_trafficGroupArnHasBeenSet = true; m_trafficGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic group to which the device
     * identifier belongs.</p>
     */
    inline DeviceIdentifier& WithTrafficGroupArn(const Aws::String& value) { SetTrafficGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic group to which the device
     * identifier belongs.</p>
     */
    inline DeviceIdentifier& WithTrafficGroupArn(Aws::String&& value) { SetTrafficGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic group to which the device
     * identifier belongs.</p>
     */
    inline DeviceIdentifier& WithTrafficGroupArn(const char* value) { SetTrafficGroupArn(value); return *this;}


    /**
     * <p>The vendor of the device identifier.</p>
     */
    inline const Aws::String& GetVendor() const{ return m_vendor; }

    /**
     * <p>The vendor of the device identifier.</p>
     */
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }

    /**
     * <p>The vendor of the device identifier.</p>
     */
    inline void SetVendor(const Aws::String& value) { m_vendorHasBeenSet = true; m_vendor = value; }

    /**
     * <p>The vendor of the device identifier.</p>
     */
    inline void SetVendor(Aws::String&& value) { m_vendorHasBeenSet = true; m_vendor = std::move(value); }

    /**
     * <p>The vendor of the device identifier.</p>
     */
    inline void SetVendor(const char* value) { m_vendorHasBeenSet = true; m_vendor.assign(value); }

    /**
     * <p>The vendor of the device identifier.</p>
     */
    inline DeviceIdentifier& WithVendor(const Aws::String& value) { SetVendor(value); return *this;}

    /**
     * <p>The vendor of the device identifier.</p>
     */
    inline DeviceIdentifier& WithVendor(Aws::String&& value) { SetVendor(std::move(value)); return *this;}

    /**
     * <p>The vendor of the device identifier.</p>
     */
    inline DeviceIdentifier& WithVendor(const char* value) { SetVendor(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_deviceIdentifierArn;
    bool m_deviceIdentifierArnHasBeenSet = false;

    Aws::String m_iccid;
    bool m_iccidHasBeenSet = false;

    Aws::String m_imsi;
    bool m_imsiHasBeenSet = false;

    Aws::String m_networkArn;
    bool m_networkArnHasBeenSet = false;

    Aws::String m_orderArn;
    bool m_orderArnHasBeenSet = false;

    DeviceIdentifierStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_trafficGroupArn;
    bool m_trafficGroupArnHasBeenSet = false;

    Aws::String m_vendor;
    bool m_vendorHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
