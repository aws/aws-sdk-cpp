/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/model/DestinationCategory.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkflowmonitor/model/KubernetesMetadata.h>
#include <aws/networkflowmonitor/model/TraversedComponent.h>
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
namespace NetworkFlowMonitor
{
namespace Model
{

  /**
   * <p>A set of information for a top contributor network flow in a monitor. In a
   * monitor, Network Flow Monitor returns information about the network flows for
   * top contributors for each metric. Top contributors are network flows with the
   * top values for each metric type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/MonitorTopContributorsRow">AWS
   * API Reference</a></p>
   */
  class MonitorTopContributorsRow
  {
  public:
    AWS_NETWORKFLOWMONITOR_API MonitorTopContributorsRow();
    AWS_NETWORKFLOWMONITOR_API MonitorTopContributorsRow(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API MonitorTopContributorsRow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address of the local resource for a top contributor network flow.</p>
     */
    inline const Aws::String& GetLocalIp() const{ return m_localIp; }
    inline bool LocalIpHasBeenSet() const { return m_localIpHasBeenSet; }
    inline void SetLocalIp(const Aws::String& value) { m_localIpHasBeenSet = true; m_localIp = value; }
    inline void SetLocalIp(Aws::String&& value) { m_localIpHasBeenSet = true; m_localIp = std::move(value); }
    inline void SetLocalIp(const char* value) { m_localIpHasBeenSet = true; m_localIp.assign(value); }
    inline MonitorTopContributorsRow& WithLocalIp(const Aws::String& value) { SetLocalIp(value); return *this;}
    inline MonitorTopContributorsRow& WithLocalIp(Aws::String&& value) { SetLocalIp(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithLocalIp(const char* value) { SetLocalIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secure network address translation (SNAT) IP address for a top
     * contributor network flow.</p>
     */
    inline const Aws::String& GetSnatIp() const{ return m_snatIp; }
    inline bool SnatIpHasBeenSet() const { return m_snatIpHasBeenSet; }
    inline void SetSnatIp(const Aws::String& value) { m_snatIpHasBeenSet = true; m_snatIp = value; }
    inline void SetSnatIp(Aws::String&& value) { m_snatIpHasBeenSet = true; m_snatIp = std::move(value); }
    inline void SetSnatIp(const char* value) { m_snatIpHasBeenSet = true; m_snatIp.assign(value); }
    inline MonitorTopContributorsRow& WithSnatIp(const Aws::String& value) { SetSnatIp(value); return *this;}
    inline MonitorTopContributorsRow& WithSnatIp(Aws::String&& value) { SetSnatIp(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithSnatIp(const char* value) { SetSnatIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance identifier for the local resource for a top contributor network
     * flow.</p>
     */
    inline const Aws::String& GetLocalInstanceId() const{ return m_localInstanceId; }
    inline bool LocalInstanceIdHasBeenSet() const { return m_localInstanceIdHasBeenSet; }
    inline void SetLocalInstanceId(const Aws::String& value) { m_localInstanceIdHasBeenSet = true; m_localInstanceId = value; }
    inline void SetLocalInstanceId(Aws::String&& value) { m_localInstanceIdHasBeenSet = true; m_localInstanceId = std::move(value); }
    inline void SetLocalInstanceId(const char* value) { m_localInstanceIdHasBeenSet = true; m_localInstanceId.assign(value); }
    inline MonitorTopContributorsRow& WithLocalInstanceId(const Aws::String& value) { SetLocalInstanceId(value); return *this;}
    inline MonitorTopContributorsRow& WithLocalInstanceId(Aws::String&& value) { SetLocalInstanceId(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithLocalInstanceId(const char* value) { SetLocalInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID for a top contributor network flow for the local resource.</p>
     */
    inline const Aws::String& GetLocalVpcId() const{ return m_localVpcId; }
    inline bool LocalVpcIdHasBeenSet() const { return m_localVpcIdHasBeenSet; }
    inline void SetLocalVpcId(const Aws::String& value) { m_localVpcIdHasBeenSet = true; m_localVpcId = value; }
    inline void SetLocalVpcId(Aws::String&& value) { m_localVpcIdHasBeenSet = true; m_localVpcId = std::move(value); }
    inline void SetLocalVpcId(const char* value) { m_localVpcIdHasBeenSet = true; m_localVpcId.assign(value); }
    inline MonitorTopContributorsRow& WithLocalVpcId(const Aws::String& value) { SetLocalVpcId(value); return *this;}
    inline MonitorTopContributorsRow& WithLocalVpcId(Aws::String&& value) { SetLocalVpcId(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithLocalVpcId(const char* value) { SetLocalVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for the local resource for a top contributor
     * network flow.</p>
     */
    inline const Aws::String& GetLocalRegion() const{ return m_localRegion; }
    inline bool LocalRegionHasBeenSet() const { return m_localRegionHasBeenSet; }
    inline void SetLocalRegion(const Aws::String& value) { m_localRegionHasBeenSet = true; m_localRegion = value; }
    inline void SetLocalRegion(Aws::String&& value) { m_localRegionHasBeenSet = true; m_localRegion = std::move(value); }
    inline void SetLocalRegion(const char* value) { m_localRegionHasBeenSet = true; m_localRegion.assign(value); }
    inline MonitorTopContributorsRow& WithLocalRegion(const Aws::String& value) { SetLocalRegion(value); return *this;}
    inline MonitorTopContributorsRow& WithLocalRegion(Aws::String&& value) { SetLocalRegion(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithLocalRegion(const char* value) { SetLocalRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone for the local resource for a top contributor network
     * flow.</p>
     */
    inline const Aws::String& GetLocalAz() const{ return m_localAz; }
    inline bool LocalAzHasBeenSet() const { return m_localAzHasBeenSet; }
    inline void SetLocalAz(const Aws::String& value) { m_localAzHasBeenSet = true; m_localAz = value; }
    inline void SetLocalAz(Aws::String&& value) { m_localAzHasBeenSet = true; m_localAz = std::move(value); }
    inline void SetLocalAz(const char* value) { m_localAzHasBeenSet = true; m_localAz.assign(value); }
    inline MonitorTopContributorsRow& WithLocalAz(const Aws::String& value) { SetLocalAz(value); return *this;}
    inline MonitorTopContributorsRow& WithLocalAz(Aws::String&& value) { SetLocalAz(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithLocalAz(const char* value) { SetLocalAz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet ID for the local resource for a top contributor network flow.</p>
     */
    inline const Aws::String& GetLocalSubnetId() const{ return m_localSubnetId; }
    inline bool LocalSubnetIdHasBeenSet() const { return m_localSubnetIdHasBeenSet; }
    inline void SetLocalSubnetId(const Aws::String& value) { m_localSubnetIdHasBeenSet = true; m_localSubnetId = value; }
    inline void SetLocalSubnetId(Aws::String&& value) { m_localSubnetIdHasBeenSet = true; m_localSubnetId = std::move(value); }
    inline void SetLocalSubnetId(const char* value) { m_localSubnetIdHasBeenSet = true; m_localSubnetId.assign(value); }
    inline MonitorTopContributorsRow& WithLocalSubnetId(const Aws::String& value) { SetLocalSubnetId(value); return *this;}
    inline MonitorTopContributorsRow& WithLocalSubnetId(Aws::String&& value) { SetLocalSubnetId(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithLocalSubnetId(const char* value) { SetLocalSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target port.</p>
     */
    inline int GetTargetPort() const{ return m_targetPort; }
    inline bool TargetPortHasBeenSet() const { return m_targetPortHasBeenSet; }
    inline void SetTargetPort(int value) { m_targetPortHasBeenSet = true; m_targetPort = value; }
    inline MonitorTopContributorsRow& WithTargetPort(int value) { SetTargetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination category for a top contributors row. Destination categories
     * can be one of the following: </p> <ul> <li> <p> <code>INTRA_AZ</code>: Top
     * contributor network flows within a single Availability Zone</p> </li> <li> <p>
     * <code>INTER_AZ</code>: Top contributor network flows between Availability
     * Zones</p> </li> <li> <p> <code>INTER_VPC</code>: Top contributor network flows
     * between VPCs</p> </li> <li> <p> <code>AWS_SERVICES</code>: Top contributor
     * network flows to or from Amazon Web Services services</p> </li> <li> <p>
     * <code>UNCLASSIFIED</code>: Top contributor network flows that do not have a
     * bucket classification</p> </li> </ul>
     */
    inline const DestinationCategory& GetDestinationCategory() const{ return m_destinationCategory; }
    inline bool DestinationCategoryHasBeenSet() const { return m_destinationCategoryHasBeenSet; }
    inline void SetDestinationCategory(const DestinationCategory& value) { m_destinationCategoryHasBeenSet = true; m_destinationCategory = value; }
    inline void SetDestinationCategory(DestinationCategory&& value) { m_destinationCategoryHasBeenSet = true; m_destinationCategory = std::move(value); }
    inline MonitorTopContributorsRow& WithDestinationCategory(const DestinationCategory& value) { SetDestinationCategory(value); return *this;}
    inline MonitorTopContributorsRow& WithDestinationCategory(DestinationCategory&& value) { SetDestinationCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID for a top contributor network flow for the remote resource.</p>
     */
    inline const Aws::String& GetRemoteVpcId() const{ return m_remoteVpcId; }
    inline bool RemoteVpcIdHasBeenSet() const { return m_remoteVpcIdHasBeenSet; }
    inline void SetRemoteVpcId(const Aws::String& value) { m_remoteVpcIdHasBeenSet = true; m_remoteVpcId = value; }
    inline void SetRemoteVpcId(Aws::String&& value) { m_remoteVpcIdHasBeenSet = true; m_remoteVpcId = std::move(value); }
    inline void SetRemoteVpcId(const char* value) { m_remoteVpcIdHasBeenSet = true; m_remoteVpcId.assign(value); }
    inline MonitorTopContributorsRow& WithRemoteVpcId(const Aws::String& value) { SetRemoteVpcId(value); return *this;}
    inline MonitorTopContributorsRow& WithRemoteVpcId(Aws::String&& value) { SetRemoteVpcId(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithRemoteVpcId(const char* value) { SetRemoteVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for the remote resource for a top contributor
     * network flow.</p>
     */
    inline const Aws::String& GetRemoteRegion() const{ return m_remoteRegion; }
    inline bool RemoteRegionHasBeenSet() const { return m_remoteRegionHasBeenSet; }
    inline void SetRemoteRegion(const Aws::String& value) { m_remoteRegionHasBeenSet = true; m_remoteRegion = value; }
    inline void SetRemoteRegion(Aws::String&& value) { m_remoteRegionHasBeenSet = true; m_remoteRegion = std::move(value); }
    inline void SetRemoteRegion(const char* value) { m_remoteRegionHasBeenSet = true; m_remoteRegion.assign(value); }
    inline MonitorTopContributorsRow& WithRemoteRegion(const Aws::String& value) { SetRemoteRegion(value); return *this;}
    inline MonitorTopContributorsRow& WithRemoteRegion(Aws::String&& value) { SetRemoteRegion(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithRemoteRegion(const char* value) { SetRemoteRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone for the remote resource for a top contributor network
     * flow.</p>
     */
    inline const Aws::String& GetRemoteAz() const{ return m_remoteAz; }
    inline bool RemoteAzHasBeenSet() const { return m_remoteAzHasBeenSet; }
    inline void SetRemoteAz(const Aws::String& value) { m_remoteAzHasBeenSet = true; m_remoteAz = value; }
    inline void SetRemoteAz(Aws::String&& value) { m_remoteAzHasBeenSet = true; m_remoteAz = std::move(value); }
    inline void SetRemoteAz(const char* value) { m_remoteAzHasBeenSet = true; m_remoteAz.assign(value); }
    inline MonitorTopContributorsRow& WithRemoteAz(const Aws::String& value) { SetRemoteAz(value); return *this;}
    inline MonitorTopContributorsRow& WithRemoteAz(Aws::String&& value) { SetRemoteAz(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithRemoteAz(const char* value) { SetRemoteAz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet ID for the remote resource for a top contributor network flow.</p>
     */
    inline const Aws::String& GetRemoteSubnetId() const{ return m_remoteSubnetId; }
    inline bool RemoteSubnetIdHasBeenSet() const { return m_remoteSubnetIdHasBeenSet; }
    inline void SetRemoteSubnetId(const Aws::String& value) { m_remoteSubnetIdHasBeenSet = true; m_remoteSubnetId = value; }
    inline void SetRemoteSubnetId(Aws::String&& value) { m_remoteSubnetIdHasBeenSet = true; m_remoteSubnetId = std::move(value); }
    inline void SetRemoteSubnetId(const char* value) { m_remoteSubnetIdHasBeenSet = true; m_remoteSubnetId.assign(value); }
    inline MonitorTopContributorsRow& WithRemoteSubnetId(const Aws::String& value) { SetRemoteSubnetId(value); return *this;}
    inline MonitorTopContributorsRow& WithRemoteSubnetId(Aws::String&& value) { SetRemoteSubnetId(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithRemoteSubnetId(const char* value) { SetRemoteSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance identifier for the remote resource for a top contributor network
     * flow.</p>
     */
    inline const Aws::String& GetRemoteInstanceId() const{ return m_remoteInstanceId; }
    inline bool RemoteInstanceIdHasBeenSet() const { return m_remoteInstanceIdHasBeenSet; }
    inline void SetRemoteInstanceId(const Aws::String& value) { m_remoteInstanceIdHasBeenSet = true; m_remoteInstanceId = value; }
    inline void SetRemoteInstanceId(Aws::String&& value) { m_remoteInstanceIdHasBeenSet = true; m_remoteInstanceId = std::move(value); }
    inline void SetRemoteInstanceId(const char* value) { m_remoteInstanceIdHasBeenSet = true; m_remoteInstanceId.assign(value); }
    inline MonitorTopContributorsRow& WithRemoteInstanceId(const Aws::String& value) { SetRemoteInstanceId(value); return *this;}
    inline MonitorTopContributorsRow& WithRemoteInstanceId(Aws::String&& value) { SetRemoteInstanceId(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithRemoteInstanceId(const char* value) { SetRemoteInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the remote resource for a top contributor network flow.</p>
     */
    inline const Aws::String& GetRemoteIp() const{ return m_remoteIp; }
    inline bool RemoteIpHasBeenSet() const { return m_remoteIpHasBeenSet; }
    inline void SetRemoteIp(const Aws::String& value) { m_remoteIpHasBeenSet = true; m_remoteIp = value; }
    inline void SetRemoteIp(Aws::String&& value) { m_remoteIpHasBeenSet = true; m_remoteIp = std::move(value); }
    inline void SetRemoteIp(const char* value) { m_remoteIpHasBeenSet = true; m_remoteIp.assign(value); }
    inline MonitorTopContributorsRow& WithRemoteIp(const Aws::String& value) { SetRemoteIp(value); return *this;}
    inline MonitorTopContributorsRow& WithRemoteIp(Aws::String&& value) { SetRemoteIp(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithRemoteIp(const char* value) { SetRemoteIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination network address translation (DNAT) IP address for a top
     * contributor network flow.</p>
     */
    inline const Aws::String& GetDnatIp() const{ return m_dnatIp; }
    inline bool DnatIpHasBeenSet() const { return m_dnatIpHasBeenSet; }
    inline void SetDnatIp(const Aws::String& value) { m_dnatIpHasBeenSet = true; m_dnatIp = value; }
    inline void SetDnatIp(Aws::String&& value) { m_dnatIpHasBeenSet = true; m_dnatIp = std::move(value); }
    inline void SetDnatIp(const char* value) { m_dnatIpHasBeenSet = true; m_dnatIp.assign(value); }
    inline MonitorTopContributorsRow& WithDnatIp(const Aws::String& value) { SetDnatIp(value); return *this;}
    inline MonitorTopContributorsRow& WithDnatIp(Aws::String&& value) { SetDnatIp(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithDnatIp(const char* value) { SetDnatIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the metric for a top contributor network flow.</p>
     */
    inline long long GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline MonitorTopContributorsRow& WithValue(long long value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The constructs traversed by a network flow.</p>
     */
    inline const Aws::Vector<TraversedComponent>& GetTraversedConstructs() const{ return m_traversedConstructs; }
    inline bool TraversedConstructsHasBeenSet() const { return m_traversedConstructsHasBeenSet; }
    inline void SetTraversedConstructs(const Aws::Vector<TraversedComponent>& value) { m_traversedConstructsHasBeenSet = true; m_traversedConstructs = value; }
    inline void SetTraversedConstructs(Aws::Vector<TraversedComponent>&& value) { m_traversedConstructsHasBeenSet = true; m_traversedConstructs = std::move(value); }
    inline MonitorTopContributorsRow& WithTraversedConstructs(const Aws::Vector<TraversedComponent>& value) { SetTraversedConstructs(value); return *this;}
    inline MonitorTopContributorsRow& WithTraversedConstructs(Aws::Vector<TraversedComponent>&& value) { SetTraversedConstructs(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& AddTraversedConstructs(const TraversedComponent& value) { m_traversedConstructsHasBeenSet = true; m_traversedConstructs.push_back(value); return *this; }
    inline MonitorTopContributorsRow& AddTraversedConstructs(TraversedComponent&& value) { m_traversedConstructsHasBeenSet = true; m_traversedConstructs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Meta data about Kubernetes resources.</p>
     */
    inline const KubernetesMetadata& GetKubernetesMetadata() const{ return m_kubernetesMetadata; }
    inline bool KubernetesMetadataHasBeenSet() const { return m_kubernetesMetadataHasBeenSet; }
    inline void SetKubernetesMetadata(const KubernetesMetadata& value) { m_kubernetesMetadataHasBeenSet = true; m_kubernetesMetadata = value; }
    inline void SetKubernetesMetadata(KubernetesMetadata&& value) { m_kubernetesMetadataHasBeenSet = true; m_kubernetesMetadata = std::move(value); }
    inline MonitorTopContributorsRow& WithKubernetesMetadata(const KubernetesMetadata& value) { SetKubernetesMetadata(value); return *this;}
    inline MonitorTopContributorsRow& WithKubernetesMetadata(KubernetesMetadata&& value) { SetKubernetesMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a local resource.</p>
     */
    inline const Aws::String& GetLocalInstanceArn() const{ return m_localInstanceArn; }
    inline bool LocalInstanceArnHasBeenSet() const { return m_localInstanceArnHasBeenSet; }
    inline void SetLocalInstanceArn(const Aws::String& value) { m_localInstanceArnHasBeenSet = true; m_localInstanceArn = value; }
    inline void SetLocalInstanceArn(Aws::String&& value) { m_localInstanceArnHasBeenSet = true; m_localInstanceArn = std::move(value); }
    inline void SetLocalInstanceArn(const char* value) { m_localInstanceArnHasBeenSet = true; m_localInstanceArn.assign(value); }
    inline MonitorTopContributorsRow& WithLocalInstanceArn(const Aws::String& value) { SetLocalInstanceArn(value); return *this;}
    inline MonitorTopContributorsRow& WithLocalInstanceArn(Aws::String&& value) { SetLocalInstanceArn(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithLocalInstanceArn(const char* value) { SetLocalInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a local subnet.</p>
     */
    inline const Aws::String& GetLocalSubnetArn() const{ return m_localSubnetArn; }
    inline bool LocalSubnetArnHasBeenSet() const { return m_localSubnetArnHasBeenSet; }
    inline void SetLocalSubnetArn(const Aws::String& value) { m_localSubnetArnHasBeenSet = true; m_localSubnetArn = value; }
    inline void SetLocalSubnetArn(Aws::String&& value) { m_localSubnetArnHasBeenSet = true; m_localSubnetArn = std::move(value); }
    inline void SetLocalSubnetArn(const char* value) { m_localSubnetArnHasBeenSet = true; m_localSubnetArn.assign(value); }
    inline MonitorTopContributorsRow& WithLocalSubnetArn(const Aws::String& value) { SetLocalSubnetArn(value); return *this;}
    inline MonitorTopContributorsRow& WithLocalSubnetArn(Aws::String&& value) { SetLocalSubnetArn(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithLocalSubnetArn(const char* value) { SetLocalSubnetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a local VPC.</p>
     */
    inline const Aws::String& GetLocalVpcArn() const{ return m_localVpcArn; }
    inline bool LocalVpcArnHasBeenSet() const { return m_localVpcArnHasBeenSet; }
    inline void SetLocalVpcArn(const Aws::String& value) { m_localVpcArnHasBeenSet = true; m_localVpcArn = value; }
    inline void SetLocalVpcArn(Aws::String&& value) { m_localVpcArnHasBeenSet = true; m_localVpcArn = std::move(value); }
    inline void SetLocalVpcArn(const char* value) { m_localVpcArnHasBeenSet = true; m_localVpcArn.assign(value); }
    inline MonitorTopContributorsRow& WithLocalVpcArn(const Aws::String& value) { SetLocalVpcArn(value); return *this;}
    inline MonitorTopContributorsRow& WithLocalVpcArn(Aws::String&& value) { SetLocalVpcArn(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithLocalVpcArn(const char* value) { SetLocalVpcArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a remote resource.</p>
     */
    inline const Aws::String& GetRemoteInstanceArn() const{ return m_remoteInstanceArn; }
    inline bool RemoteInstanceArnHasBeenSet() const { return m_remoteInstanceArnHasBeenSet; }
    inline void SetRemoteInstanceArn(const Aws::String& value) { m_remoteInstanceArnHasBeenSet = true; m_remoteInstanceArn = value; }
    inline void SetRemoteInstanceArn(Aws::String&& value) { m_remoteInstanceArnHasBeenSet = true; m_remoteInstanceArn = std::move(value); }
    inline void SetRemoteInstanceArn(const char* value) { m_remoteInstanceArnHasBeenSet = true; m_remoteInstanceArn.assign(value); }
    inline MonitorTopContributorsRow& WithRemoteInstanceArn(const Aws::String& value) { SetRemoteInstanceArn(value); return *this;}
    inline MonitorTopContributorsRow& WithRemoteInstanceArn(Aws::String&& value) { SetRemoteInstanceArn(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithRemoteInstanceArn(const char* value) { SetRemoteInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a remote subnet.</p>
     */
    inline const Aws::String& GetRemoteSubnetArn() const{ return m_remoteSubnetArn; }
    inline bool RemoteSubnetArnHasBeenSet() const { return m_remoteSubnetArnHasBeenSet; }
    inline void SetRemoteSubnetArn(const Aws::String& value) { m_remoteSubnetArnHasBeenSet = true; m_remoteSubnetArn = value; }
    inline void SetRemoteSubnetArn(Aws::String&& value) { m_remoteSubnetArnHasBeenSet = true; m_remoteSubnetArn = std::move(value); }
    inline void SetRemoteSubnetArn(const char* value) { m_remoteSubnetArnHasBeenSet = true; m_remoteSubnetArn.assign(value); }
    inline MonitorTopContributorsRow& WithRemoteSubnetArn(const Aws::String& value) { SetRemoteSubnetArn(value); return *this;}
    inline MonitorTopContributorsRow& WithRemoteSubnetArn(Aws::String&& value) { SetRemoteSubnetArn(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithRemoteSubnetArn(const char* value) { SetRemoteSubnetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a remote VPC.</p>
     */
    inline const Aws::String& GetRemoteVpcArn() const{ return m_remoteVpcArn; }
    inline bool RemoteVpcArnHasBeenSet() const { return m_remoteVpcArnHasBeenSet; }
    inline void SetRemoteVpcArn(const Aws::String& value) { m_remoteVpcArnHasBeenSet = true; m_remoteVpcArn = value; }
    inline void SetRemoteVpcArn(Aws::String&& value) { m_remoteVpcArnHasBeenSet = true; m_remoteVpcArn = std::move(value); }
    inline void SetRemoteVpcArn(const char* value) { m_remoteVpcArnHasBeenSet = true; m_remoteVpcArn.assign(value); }
    inline MonitorTopContributorsRow& WithRemoteVpcArn(const Aws::String& value) { SetRemoteVpcArn(value); return *this;}
    inline MonitorTopContributorsRow& WithRemoteVpcArn(Aws::String&& value) { SetRemoteVpcArn(std::move(value)); return *this;}
    inline MonitorTopContributorsRow& WithRemoteVpcArn(const char* value) { SetRemoteVpcArn(value); return *this;}
    ///@}
  private:

    Aws::String m_localIp;
    bool m_localIpHasBeenSet = false;

    Aws::String m_snatIp;
    bool m_snatIpHasBeenSet = false;

    Aws::String m_localInstanceId;
    bool m_localInstanceIdHasBeenSet = false;

    Aws::String m_localVpcId;
    bool m_localVpcIdHasBeenSet = false;

    Aws::String m_localRegion;
    bool m_localRegionHasBeenSet = false;

    Aws::String m_localAz;
    bool m_localAzHasBeenSet = false;

    Aws::String m_localSubnetId;
    bool m_localSubnetIdHasBeenSet = false;

    int m_targetPort;
    bool m_targetPortHasBeenSet = false;

    DestinationCategory m_destinationCategory;
    bool m_destinationCategoryHasBeenSet = false;

    Aws::String m_remoteVpcId;
    bool m_remoteVpcIdHasBeenSet = false;

    Aws::String m_remoteRegion;
    bool m_remoteRegionHasBeenSet = false;

    Aws::String m_remoteAz;
    bool m_remoteAzHasBeenSet = false;

    Aws::String m_remoteSubnetId;
    bool m_remoteSubnetIdHasBeenSet = false;

    Aws::String m_remoteInstanceId;
    bool m_remoteInstanceIdHasBeenSet = false;

    Aws::String m_remoteIp;
    bool m_remoteIpHasBeenSet = false;

    Aws::String m_dnatIp;
    bool m_dnatIpHasBeenSet = false;

    long long m_value;
    bool m_valueHasBeenSet = false;

    Aws::Vector<TraversedComponent> m_traversedConstructs;
    bool m_traversedConstructsHasBeenSet = false;

    KubernetesMetadata m_kubernetesMetadata;
    bool m_kubernetesMetadataHasBeenSet = false;

    Aws::String m_localInstanceArn;
    bool m_localInstanceArnHasBeenSet = false;

    Aws::String m_localSubnetArn;
    bool m_localSubnetArnHasBeenSet = false;

    Aws::String m_localVpcArn;
    bool m_localVpcArnHasBeenSet = false;

    Aws::String m_remoteInstanceArn;
    bool m_remoteInstanceArnHasBeenSet = false;

    Aws::String m_remoteSubnetArn;
    bool m_remoteSubnetArnHasBeenSet = false;

    Aws::String m_remoteVpcArn;
    bool m_remoteVpcArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
