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
    AWS_SMS_API Connector();
    AWS_SMS_API Connector(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Connector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the connector.</p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
    inline void SetConnectorId(const Aws::String& value) { m_connectorIdHasBeenSet = true; m_connectorId = value; }
    inline void SetConnectorId(Aws::String&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::move(value); }
    inline void SetConnectorId(const char* value) { m_connectorIdHasBeenSet = true; m_connectorId.assign(value); }
    inline Connector& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}
    inline Connector& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}
    inline Connector& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline Connector& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline Connector& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline Connector& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the connector.</p>
     */
    inline const ConnectorStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ConnectorStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ConnectorStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Connector& WithStatus(const ConnectorStatus& value) { SetStatus(value); return *this;}
    inline Connector& WithStatus(ConnectorStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities of the connector.</p>
     */
    inline const Aws::Vector<ConnectorCapability>& GetCapabilityList() const{ return m_capabilityList; }
    inline bool CapabilityListHasBeenSet() const { return m_capabilityListHasBeenSet; }
    inline void SetCapabilityList(const Aws::Vector<ConnectorCapability>& value) { m_capabilityListHasBeenSet = true; m_capabilityList = value; }
    inline void SetCapabilityList(Aws::Vector<ConnectorCapability>&& value) { m_capabilityListHasBeenSet = true; m_capabilityList = std::move(value); }
    inline Connector& WithCapabilityList(const Aws::Vector<ConnectorCapability>& value) { SetCapabilityList(value); return *this;}
    inline Connector& WithCapabilityList(Aws::Vector<ConnectorCapability>&& value) { SetCapabilityList(std::move(value)); return *this;}
    inline Connector& AddCapabilityList(const ConnectorCapability& value) { m_capabilityListHasBeenSet = true; m_capabilityList.push_back(value); return *this; }
    inline Connector& AddCapabilityList(ConnectorCapability&& value) { m_capabilityListHasBeenSet = true; m_capabilityList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the VM manager.</p>
     */
    inline const Aws::String& GetVmManagerName() const{ return m_vmManagerName; }
    inline bool VmManagerNameHasBeenSet() const { return m_vmManagerNameHasBeenSet; }
    inline void SetVmManagerName(const Aws::String& value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName = value; }
    inline void SetVmManagerName(Aws::String&& value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName = std::move(value); }
    inline void SetVmManagerName(const char* value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName.assign(value); }
    inline Connector& WithVmManagerName(const Aws::String& value) { SetVmManagerName(value); return *this;}
    inline Connector& WithVmManagerName(Aws::String&& value) { SetVmManagerName(std::move(value)); return *this;}
    inline Connector& WithVmManagerName(const char* value) { SetVmManagerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VM management product.</p>
     */
    inline const VmManagerType& GetVmManagerType() const{ return m_vmManagerType; }
    inline bool VmManagerTypeHasBeenSet() const { return m_vmManagerTypeHasBeenSet; }
    inline void SetVmManagerType(const VmManagerType& value) { m_vmManagerTypeHasBeenSet = true; m_vmManagerType = value; }
    inline void SetVmManagerType(VmManagerType&& value) { m_vmManagerTypeHasBeenSet = true; m_vmManagerType = std::move(value); }
    inline Connector& WithVmManagerType(const VmManagerType& value) { SetVmManagerType(value); return *this;}
    inline Connector& WithVmManagerType(VmManagerType&& value) { SetVmManagerType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VM manager.</p>
     */
    inline const Aws::String& GetVmManagerId() const{ return m_vmManagerId; }
    inline bool VmManagerIdHasBeenSet() const { return m_vmManagerIdHasBeenSet; }
    inline void SetVmManagerId(const Aws::String& value) { m_vmManagerIdHasBeenSet = true; m_vmManagerId = value; }
    inline void SetVmManagerId(Aws::String&& value) { m_vmManagerIdHasBeenSet = true; m_vmManagerId = std::move(value); }
    inline void SetVmManagerId(const char* value) { m_vmManagerIdHasBeenSet = true; m_vmManagerId.assign(value); }
    inline Connector& WithVmManagerId(const Aws::String& value) { SetVmManagerId(value); return *this;}
    inline Connector& WithVmManagerId(Aws::String&& value) { SetVmManagerId(std::move(value)); return *this;}
    inline Connector& WithVmManagerId(const char* value) { SetVmManagerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the connector.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline Connector& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline Connector& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline Connector& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC address of the connector.</p>
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::move(value); }
    inline void SetMacAddress(const char* value) { m_macAddressHasBeenSet = true; m_macAddress.assign(value); }
    inline Connector& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}
    inline Connector& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}
    inline Connector& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the connector was associated.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociatedOn() const{ return m_associatedOn; }
    inline bool AssociatedOnHasBeenSet() const { return m_associatedOnHasBeenSet; }
    inline void SetAssociatedOn(const Aws::Utils::DateTime& value) { m_associatedOnHasBeenSet = true; m_associatedOn = value; }
    inline void SetAssociatedOn(Aws::Utils::DateTime&& value) { m_associatedOnHasBeenSet = true; m_associatedOn = std::move(value); }
    inline Connector& WithAssociatedOn(const Aws::Utils::DateTime& value) { SetAssociatedOn(value); return *this;}
    inline Connector& WithAssociatedOn(Aws::Utils::DateTime&& value) { SetAssociatedOn(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    ConnectorStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<ConnectorCapability> m_capabilityList;
    bool m_capabilityListHasBeenSet = false;

    Aws::String m_vmManagerName;
    bool m_vmManagerNameHasBeenSet = false;

    VmManagerType m_vmManagerType;
    bool m_vmManagerTypeHasBeenSet = false;

    Aws::String m_vmManagerId;
    bool m_vmManagerIdHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    Aws::Utils::DateTime m_associatedOn;
    bool m_associatedOnHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
