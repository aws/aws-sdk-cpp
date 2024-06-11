﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/VPCConnectionResourceStatus.h>
#include <aws/quicksight/model/VPCConnectionAvailabilityStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/NetworkInterface.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The summary metadata that describes a VPC connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VPCConnectionSummary">AWS
   * API Reference</a></p>
   */
  class VPCConnectionSummary
  {
  public:
    AWS_QUICKSIGHT_API VPCConnectionSummary();
    AWS_QUICKSIGHT_API VPCConnectionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VPCConnectionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetVPCConnectionId() const{ return m_vPCConnectionId; }
    inline bool VPCConnectionIdHasBeenSet() const { return m_vPCConnectionIdHasBeenSet; }
    inline void SetVPCConnectionId(const Aws::String& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = value; }
    inline void SetVPCConnectionId(Aws::String&& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = std::move(value); }
    inline void SetVPCConnectionId(const char* value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId.assign(value); }
    inline VPCConnectionSummary& WithVPCConnectionId(const Aws::String& value) { SetVPCConnectionId(value); return *this;}
    inline VPCConnectionSummary& WithVPCConnectionId(Aws::String&& value) { SetVPCConnectionId(std::move(value)); return *this;}
    inline VPCConnectionSummary& WithVPCConnectionId(const char* value) { SetVPCConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline VPCConnectionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline VPCConnectionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline VPCConnectionSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the VPC connection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline VPCConnectionSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline VPCConnectionSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline VPCConnectionSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 VPC ID associated with the VPC connection.</p>
     */
    inline const Aws::String& GetVPCId() const{ return m_vPCId; }
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }
    inline void SetVPCId(const Aws::String& value) { m_vPCIdHasBeenSet = true; m_vPCId = value; }
    inline void SetVPCId(Aws::String&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::move(value); }
    inline void SetVPCId(const char* value) { m_vPCIdHasBeenSet = true; m_vPCId.assign(value); }
    inline VPCConnectionSummary& WithVPCId(const Aws::String& value) { SetVPCId(value); return *this;}
    inline VPCConnectionSummary& WithVPCId(Aws::String&& value) { SetVPCId(std::move(value)); return *this;}
    inline VPCConnectionSummary& WithVPCId(const char* value) { SetVPCId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 security group IDs associated with the VPC connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline VPCConnectionSummary& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline VPCConnectionSummary& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline VPCConnectionSummary& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline VPCConnectionSummary& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline VPCConnectionSummary& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IP addresses of DNS resolver endpoints for the VPC connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsResolvers() const{ return m_dnsResolvers; }
    inline bool DnsResolversHasBeenSet() const { return m_dnsResolversHasBeenSet; }
    inline void SetDnsResolvers(const Aws::Vector<Aws::String>& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers = value; }
    inline void SetDnsResolvers(Aws::Vector<Aws::String>&& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers = std::move(value); }
    inline VPCConnectionSummary& WithDnsResolvers(const Aws::Vector<Aws::String>& value) { SetDnsResolvers(value); return *this;}
    inline VPCConnectionSummary& WithDnsResolvers(Aws::Vector<Aws::String>&& value) { SetDnsResolvers(std::move(value)); return *this;}
    inline VPCConnectionSummary& AddDnsResolvers(const Aws::String& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(value); return *this; }
    inline VPCConnectionSummary& AddDnsResolvers(Aws::String&& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(std::move(value)); return *this; }
    inline VPCConnectionSummary& AddDnsResolvers(const char* value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the VPC connection.</p>
     */
    inline const VPCConnectionResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const VPCConnectionResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(VPCConnectionResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline VPCConnectionSummary& WithStatus(const VPCConnectionResourceStatus& value) { SetStatus(value); return *this;}
    inline VPCConnectionSummary& WithStatus(VPCConnectionResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability status of the VPC connection.</p>
     */
    inline const VPCConnectionAvailabilityStatus& GetAvailabilityStatus() const{ return m_availabilityStatus; }
    inline bool AvailabilityStatusHasBeenSet() const { return m_availabilityStatusHasBeenSet; }
    inline void SetAvailabilityStatus(const VPCConnectionAvailabilityStatus& value) { m_availabilityStatusHasBeenSet = true; m_availabilityStatus = value; }
    inline void SetAvailabilityStatus(VPCConnectionAvailabilityStatus&& value) { m_availabilityStatusHasBeenSet = true; m_availabilityStatus = std::move(value); }
    inline VPCConnectionSummary& WithAvailabilityStatus(const VPCConnectionAvailabilityStatus& value) { SetAvailabilityStatus(value); return *this;}
    inline VPCConnectionSummary& WithAvailabilityStatus(VPCConnectionAvailabilityStatus&& value) { SetAvailabilityStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of network interfaces.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }
    inline VPCConnectionSummary& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}
    inline VPCConnectionSummary& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}
    inline VPCConnectionSummary& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }
    inline VPCConnectionSummary& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role associated with the VPC connection.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline VPCConnectionSummary& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline VPCConnectionSummary& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline VPCConnectionSummary& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the VPC connection was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline VPCConnectionSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline VPCConnectionSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the VPC connection was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline VPCConnectionSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline VPCConnectionSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_vPCConnectionId;
    bool m_vPCConnectionIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_vPCId;
    bool m_vPCIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsResolvers;
    bool m_dnsResolversHasBeenSet = false;

    VPCConnectionResourceStatus m_status;
    bool m_statusHasBeenSet = false;

    VPCConnectionAvailabilityStatus m_availabilityStatus;
    bool m_availabilityStatusHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
