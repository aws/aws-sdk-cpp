/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ConnectorStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/VmManagerType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sms/model/ConnectorCapability.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Represents a connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/Connector">AWS API
   * Reference</a></p>
   */
  class Connector
  {
  public:
    AWS_SMS_API Connector() = default;
    AWS_SMS_API Connector(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Connector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the connector.</p>
     */
    inline const Aws::String& GetConnectorId() const { return m_connectorId; }
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
    template<typename ConnectorIdT = Aws::String>
    void SetConnectorId(ConnectorIdT&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::forward<ConnectorIdT>(value); }
    template<typename ConnectorIdT = Aws::String>
    Connector& WithConnectorId(ConnectorIdT&& value) { SetConnectorId(std::forward<ConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector version.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    Connector& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the connector.</p>
     */
    inline ConnectorStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ConnectorStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Connector& WithStatus(ConnectorStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities of the connector.</p>
     */
    inline const Aws::Vector<ConnectorCapability>& GetCapabilityList() const { return m_capabilityList; }
    inline bool CapabilityListHasBeenSet() const { return m_capabilityListHasBeenSet; }
    template<typename CapabilityListT = Aws::Vector<ConnectorCapability>>
    void SetCapabilityList(CapabilityListT&& value) { m_capabilityListHasBeenSet = true; m_capabilityList = std::forward<CapabilityListT>(value); }
    template<typename CapabilityListT = Aws::Vector<ConnectorCapability>>
    Connector& WithCapabilityList(CapabilityListT&& value) { SetCapabilityList(std::forward<CapabilityListT>(value)); return *this;}
    inline Connector& AddCapabilityList(ConnectorCapability value) { m_capabilityListHasBeenSet = true; m_capabilityList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the VM manager.</p>
     */
    inline const Aws::String& GetVmManagerName() const { return m_vmManagerName; }
    inline bool VmManagerNameHasBeenSet() const { return m_vmManagerNameHasBeenSet; }
    template<typename VmManagerNameT = Aws::String>
    void SetVmManagerName(VmManagerNameT&& value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName = std::forward<VmManagerNameT>(value); }
    template<typename VmManagerNameT = Aws::String>
    Connector& WithVmManagerName(VmManagerNameT&& value) { SetVmManagerName(std::forward<VmManagerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VM management product.</p>
     */
    inline VmManagerType GetVmManagerType() const { return m_vmManagerType; }
    inline bool VmManagerTypeHasBeenSet() const { return m_vmManagerTypeHasBeenSet; }
    inline void SetVmManagerType(VmManagerType value) { m_vmManagerTypeHasBeenSet = true; m_vmManagerType = value; }
    inline Connector& WithVmManagerType(VmManagerType value) { SetVmManagerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VM manager.</p>
     */
    inline const Aws::String& GetVmManagerId() const { return m_vmManagerId; }
    inline bool VmManagerIdHasBeenSet() const { return m_vmManagerIdHasBeenSet; }
    template<typename VmManagerIdT = Aws::String>
    void SetVmManagerId(VmManagerIdT&& value) { m_vmManagerIdHasBeenSet = true; m_vmManagerId = std::forward<VmManagerIdT>(value); }
    template<typename VmManagerIdT = Aws::String>
    Connector& WithVmManagerId(VmManagerIdT&& value) { SetVmManagerId(std::forward<VmManagerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the connector.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    Connector& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC address of the connector.</p>
     */
    inline const Aws::String& GetMacAddress() const { return m_macAddress; }
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }
    template<typename MacAddressT = Aws::String>
    void SetMacAddress(MacAddressT&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::forward<MacAddressT>(value); }
    template<typename MacAddressT = Aws::String>
    Connector& WithMacAddress(MacAddressT&& value) { SetMacAddress(std::forward<MacAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the connector was associated.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociatedOn() const { return m_associatedOn; }
    inline bool AssociatedOnHasBeenSet() const { return m_associatedOnHasBeenSet; }
    template<typename AssociatedOnT = Aws::Utils::DateTime>
    void SetAssociatedOn(AssociatedOnT&& value) { m_associatedOnHasBeenSet = true; m_associatedOn = std::forward<AssociatedOnT>(value); }
    template<typename AssociatedOnT = Aws::Utils::DateTime>
    Connector& WithAssociatedOn(AssociatedOnT&& value) { SetAssociatedOn(std::forward<AssociatedOnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    ConnectorStatus m_status{ConnectorStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<ConnectorCapability> m_capabilityList;
    bool m_capabilityListHasBeenSet = false;

    Aws::String m_vmManagerName;
    bool m_vmManagerNameHasBeenSet = false;

    VmManagerType m_vmManagerType{VmManagerType::NOT_SET};
    bool m_vmManagerTypeHasBeenSet = false;

    Aws::String m_vmManagerId;
    bool m_vmManagerIdHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    Aws::Utils::DateTime m_associatedOn{};
    bool m_associatedOnHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
