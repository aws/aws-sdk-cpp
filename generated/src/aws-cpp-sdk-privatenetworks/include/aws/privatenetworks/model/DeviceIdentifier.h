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
    AWS_PRIVATENETWORKS_API DeviceIdentifier() = default;
    AWS_PRIVATENETWORKS_API DeviceIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API DeviceIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The creation time of this device identifier.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DeviceIdentifier& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device identifier.</p>
     */
    inline const Aws::String& GetDeviceIdentifierArn() const { return m_deviceIdentifierArn; }
    inline bool DeviceIdentifierArnHasBeenSet() const { return m_deviceIdentifierArnHasBeenSet; }
    template<typename DeviceIdentifierArnT = Aws::String>
    void SetDeviceIdentifierArn(DeviceIdentifierArnT&& value) { m_deviceIdentifierArnHasBeenSet = true; m_deviceIdentifierArn = std::forward<DeviceIdentifierArnT>(value); }
    template<typename DeviceIdentifierArnT = Aws::String>
    DeviceIdentifier& WithDeviceIdentifierArn(DeviceIdentifierArnT&& value) { SetDeviceIdentifierArn(std::forward<DeviceIdentifierArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Integrated Circuit Card Identifier of the device identifier.</p>
     */
    inline const Aws::String& GetIccid() const { return m_iccid; }
    inline bool IccidHasBeenSet() const { return m_iccidHasBeenSet; }
    template<typename IccidT = Aws::String>
    void SetIccid(IccidT&& value) { m_iccidHasBeenSet = true; m_iccid = std::forward<IccidT>(value); }
    template<typename IccidT = Aws::String>
    DeviceIdentifier& WithIccid(IccidT&& value) { SetIccid(std::forward<IccidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The International Mobile Subscriber Identity of the device identifier.</p>
     */
    inline const Aws::String& GetImsi() const { return m_imsi; }
    inline bool ImsiHasBeenSet() const { return m_imsiHasBeenSet; }
    template<typename ImsiT = Aws::String>
    void SetImsi(ImsiT&& value) { m_imsiHasBeenSet = true; m_imsi = std::forward<ImsiT>(value); }
    template<typename ImsiT = Aws::String>
    DeviceIdentifier& WithImsi(ImsiT&& value) { SetImsi(std::forward<ImsiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network on which the device identifier
     * appears.</p>
     */
    inline const Aws::String& GetNetworkArn() const { return m_networkArn; }
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }
    template<typename NetworkArnT = Aws::String>
    void SetNetworkArn(NetworkArnT&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::forward<NetworkArnT>(value); }
    template<typename NetworkArnT = Aws::String>
    DeviceIdentifier& WithNetworkArn(NetworkArnT&& value) { SetNetworkArn(std::forward<NetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase the device
     * identifier.</p>
     */
    inline const Aws::String& GetOrderArn() const { return m_orderArn; }
    inline bool OrderArnHasBeenSet() const { return m_orderArnHasBeenSet; }
    template<typename OrderArnT = Aws::String>
    void SetOrderArn(OrderArnT&& value) { m_orderArnHasBeenSet = true; m_orderArn = std::forward<OrderArnT>(value); }
    template<typename OrderArnT = Aws::String>
    DeviceIdentifier& WithOrderArn(OrderArnT&& value) { SetOrderArn(std::forward<OrderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the device identifier.</p>
     */
    inline DeviceIdentifierStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DeviceIdentifierStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeviceIdentifier& WithStatus(DeviceIdentifierStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the traffic group to which the device
     * identifier belongs.</p>
     */
    inline const Aws::String& GetTrafficGroupArn() const { return m_trafficGroupArn; }
    inline bool TrafficGroupArnHasBeenSet() const { return m_trafficGroupArnHasBeenSet; }
    template<typename TrafficGroupArnT = Aws::String>
    void SetTrafficGroupArn(TrafficGroupArnT&& value) { m_trafficGroupArnHasBeenSet = true; m_trafficGroupArn = std::forward<TrafficGroupArnT>(value); }
    template<typename TrafficGroupArnT = Aws::String>
    DeviceIdentifier& WithTrafficGroupArn(TrafficGroupArnT&& value) { SetTrafficGroupArn(std::forward<TrafficGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vendor of the device identifier.</p>
     */
    inline const Aws::String& GetVendor() const { return m_vendor; }
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }
    template<typename VendorT = Aws::String>
    void SetVendor(VendorT&& value) { m_vendorHasBeenSet = true; m_vendor = std::forward<VendorT>(value); }
    template<typename VendorT = Aws::String>
    DeviceIdentifier& WithVendor(VendorT&& value) { SetVendor(std::forward<VendorT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
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

    DeviceIdentifierStatus m_status{DeviceIdentifierStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_trafficGroupArn;
    bool m_trafficGroupArnHasBeenSet = false;

    Aws::String m_vendor;
    bool m_vendorHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
