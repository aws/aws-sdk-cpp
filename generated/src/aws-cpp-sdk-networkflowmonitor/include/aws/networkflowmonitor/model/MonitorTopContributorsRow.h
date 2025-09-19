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
    AWS_NETWORKFLOWMONITOR_API MonitorTopContributorsRow() = default;
    AWS_NETWORKFLOWMONITOR_API MonitorTopContributorsRow(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API MonitorTopContributorsRow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address of the local resource for a top contributor network flow.</p>
     */
    inline const Aws::String& GetLocalIp() const { return m_localIp; }
    inline bool LocalIpHasBeenSet() const { return m_localIpHasBeenSet; }
    template<typename LocalIpT = Aws::String>
    void SetLocalIp(LocalIpT&& value) { m_localIpHasBeenSet = true; m_localIp = std::forward<LocalIpT>(value); }
    template<typename LocalIpT = Aws::String>
    MonitorTopContributorsRow& WithLocalIp(LocalIpT&& value) { SetLocalIp(std::forward<LocalIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secure network address translation (SNAT) IP address for a top
     * contributor network flow.</p>
     */
    inline const Aws::String& GetSnatIp() const { return m_snatIp; }
    inline bool SnatIpHasBeenSet() const { return m_snatIpHasBeenSet; }
    template<typename SnatIpT = Aws::String>
    void SetSnatIp(SnatIpT&& value) { m_snatIpHasBeenSet = true; m_snatIp = std::forward<SnatIpT>(value); }
    template<typename SnatIpT = Aws::String>
    MonitorTopContributorsRow& WithSnatIp(SnatIpT&& value) { SetSnatIp(std::forward<SnatIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance identifier for the local resource for a top contributor network
     * flow.</p>
     */
    inline const Aws::String& GetLocalInstanceId() const { return m_localInstanceId; }
    inline bool LocalInstanceIdHasBeenSet() const { return m_localInstanceIdHasBeenSet; }
    template<typename LocalInstanceIdT = Aws::String>
    void SetLocalInstanceId(LocalInstanceIdT&& value) { m_localInstanceIdHasBeenSet = true; m_localInstanceId = std::forward<LocalInstanceIdT>(value); }
    template<typename LocalInstanceIdT = Aws::String>
    MonitorTopContributorsRow& WithLocalInstanceId(LocalInstanceIdT&& value) { SetLocalInstanceId(std::forward<LocalInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID for a top contributor network flow for the local resource.</p>
     */
    inline const Aws::String& GetLocalVpcId() const { return m_localVpcId; }
    inline bool LocalVpcIdHasBeenSet() const { return m_localVpcIdHasBeenSet; }
    template<typename LocalVpcIdT = Aws::String>
    void SetLocalVpcId(LocalVpcIdT&& value) { m_localVpcIdHasBeenSet = true; m_localVpcId = std::forward<LocalVpcIdT>(value); }
    template<typename LocalVpcIdT = Aws::String>
    MonitorTopContributorsRow& WithLocalVpcId(LocalVpcIdT&& value) { SetLocalVpcId(std::forward<LocalVpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for the local resource for a top contributor
     * network flow.</p>
     */
    inline const Aws::String& GetLocalRegion() const { return m_localRegion; }
    inline bool LocalRegionHasBeenSet() const { return m_localRegionHasBeenSet; }
    template<typename LocalRegionT = Aws::String>
    void SetLocalRegion(LocalRegionT&& value) { m_localRegionHasBeenSet = true; m_localRegion = std::forward<LocalRegionT>(value); }
    template<typename LocalRegionT = Aws::String>
    MonitorTopContributorsRow& WithLocalRegion(LocalRegionT&& value) { SetLocalRegion(std::forward<LocalRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone for the local resource for a top contributor network
     * flow.</p>
     */
    inline const Aws::String& GetLocalAz() const { return m_localAz; }
    inline bool LocalAzHasBeenSet() const { return m_localAzHasBeenSet; }
    template<typename LocalAzT = Aws::String>
    void SetLocalAz(LocalAzT&& value) { m_localAzHasBeenSet = true; m_localAz = std::forward<LocalAzT>(value); }
    template<typename LocalAzT = Aws::String>
    MonitorTopContributorsRow& WithLocalAz(LocalAzT&& value) { SetLocalAz(std::forward<LocalAzT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet ID for the local resource for a top contributor network flow.</p>
     */
    inline const Aws::String& GetLocalSubnetId() const { return m_localSubnetId; }
    inline bool LocalSubnetIdHasBeenSet() const { return m_localSubnetIdHasBeenSet; }
    template<typename LocalSubnetIdT = Aws::String>
    void SetLocalSubnetId(LocalSubnetIdT&& value) { m_localSubnetIdHasBeenSet = true; m_localSubnetId = std::forward<LocalSubnetIdT>(value); }
    template<typename LocalSubnetIdT = Aws::String>
    MonitorTopContributorsRow& WithLocalSubnetId(LocalSubnetIdT&& value) { SetLocalSubnetId(std::forward<LocalSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target port.</p>
     */
    inline int GetTargetPort() const { return m_targetPort; }
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
     * Zones</p> </li> <li> <p> <code>INTER_REGION</code>: Top contributor network
     * flows between Regions (to the edge of another Region)</p> </li> <li> <p>
     * <code>INTER_VPC</code>: Top contributor network flows between VPCs</p> </li>
     * <li> <p> <code>AWS_SERVICES</code>: Top contributor network flows to or from
     * Amazon Web Services services</p> </li> <li> <p> <code>UNCLASSIFIED</code>: Top
     * contributor network flows that do not have a bucket classification</p> </li>
     * </ul>
     */
    inline DestinationCategory GetDestinationCategory() const { return m_destinationCategory; }
    inline bool DestinationCategoryHasBeenSet() const { return m_destinationCategoryHasBeenSet; }
    inline void SetDestinationCategory(DestinationCategory value) { m_destinationCategoryHasBeenSet = true; m_destinationCategory = value; }
    inline MonitorTopContributorsRow& WithDestinationCategory(DestinationCategory value) { SetDestinationCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID for a top contributor network flow for the remote resource.</p>
     */
    inline const Aws::String& GetRemoteVpcId() const { return m_remoteVpcId; }
    inline bool RemoteVpcIdHasBeenSet() const { return m_remoteVpcIdHasBeenSet; }
    template<typename RemoteVpcIdT = Aws::String>
    void SetRemoteVpcId(RemoteVpcIdT&& value) { m_remoteVpcIdHasBeenSet = true; m_remoteVpcId = std::forward<RemoteVpcIdT>(value); }
    template<typename RemoteVpcIdT = Aws::String>
    MonitorTopContributorsRow& WithRemoteVpcId(RemoteVpcIdT&& value) { SetRemoteVpcId(std::forward<RemoteVpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region for the remote resource for a top contributor
     * network flow.</p>
     */
    inline const Aws::String& GetRemoteRegion() const { return m_remoteRegion; }
    inline bool RemoteRegionHasBeenSet() const { return m_remoteRegionHasBeenSet; }
    template<typename RemoteRegionT = Aws::String>
    void SetRemoteRegion(RemoteRegionT&& value) { m_remoteRegionHasBeenSet = true; m_remoteRegion = std::forward<RemoteRegionT>(value); }
    template<typename RemoteRegionT = Aws::String>
    MonitorTopContributorsRow& WithRemoteRegion(RemoteRegionT&& value) { SetRemoteRegion(std::forward<RemoteRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone for the remote resource for a top contributor network
     * flow.</p>
     */
    inline const Aws::String& GetRemoteAz() const { return m_remoteAz; }
    inline bool RemoteAzHasBeenSet() const { return m_remoteAzHasBeenSet; }
    template<typename RemoteAzT = Aws::String>
    void SetRemoteAz(RemoteAzT&& value) { m_remoteAzHasBeenSet = true; m_remoteAz = std::forward<RemoteAzT>(value); }
    template<typename RemoteAzT = Aws::String>
    MonitorTopContributorsRow& WithRemoteAz(RemoteAzT&& value) { SetRemoteAz(std::forward<RemoteAzT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet ID for the remote resource for a top contributor network flow.</p>
     */
    inline const Aws::String& GetRemoteSubnetId() const { return m_remoteSubnetId; }
    inline bool RemoteSubnetIdHasBeenSet() const { return m_remoteSubnetIdHasBeenSet; }
    template<typename RemoteSubnetIdT = Aws::String>
    void SetRemoteSubnetId(RemoteSubnetIdT&& value) { m_remoteSubnetIdHasBeenSet = true; m_remoteSubnetId = std::forward<RemoteSubnetIdT>(value); }
    template<typename RemoteSubnetIdT = Aws::String>
    MonitorTopContributorsRow& WithRemoteSubnetId(RemoteSubnetIdT&& value) { SetRemoteSubnetId(std::forward<RemoteSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance identifier for the remote resource for a top contributor network
     * flow.</p>
     */
    inline const Aws::String& GetRemoteInstanceId() const { return m_remoteInstanceId; }
    inline bool RemoteInstanceIdHasBeenSet() const { return m_remoteInstanceIdHasBeenSet; }
    template<typename RemoteInstanceIdT = Aws::String>
    void SetRemoteInstanceId(RemoteInstanceIdT&& value) { m_remoteInstanceIdHasBeenSet = true; m_remoteInstanceId = std::forward<RemoteInstanceIdT>(value); }
    template<typename RemoteInstanceIdT = Aws::String>
    MonitorTopContributorsRow& WithRemoteInstanceId(RemoteInstanceIdT&& value) { SetRemoteInstanceId(std::forward<RemoteInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the remote resource for a top contributor network flow.</p>
     */
    inline const Aws::String& GetRemoteIp() const { return m_remoteIp; }
    inline bool RemoteIpHasBeenSet() const { return m_remoteIpHasBeenSet; }
    template<typename RemoteIpT = Aws::String>
    void SetRemoteIp(RemoteIpT&& value) { m_remoteIpHasBeenSet = true; m_remoteIp = std::forward<RemoteIpT>(value); }
    template<typename RemoteIpT = Aws::String>
    MonitorTopContributorsRow& WithRemoteIp(RemoteIpT&& value) { SetRemoteIp(std::forward<RemoteIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination network address translation (DNAT) IP address for a top
     * contributor network flow.</p>
     */
    inline const Aws::String& GetDnatIp() const { return m_dnatIp; }
    inline bool DnatIpHasBeenSet() const { return m_dnatIpHasBeenSet; }
    template<typename DnatIpT = Aws::String>
    void SetDnatIp(DnatIpT&& value) { m_dnatIpHasBeenSet = true; m_dnatIp = std::forward<DnatIpT>(value); }
    template<typename DnatIpT = Aws::String>
    MonitorTopContributorsRow& WithDnatIp(DnatIpT&& value) { SetDnatIp(std::forward<DnatIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the metric for a top contributor network flow.</p>
     */
    inline long long GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline MonitorTopContributorsRow& WithValue(long long value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The constructs traversed by a network flow.</p>
     */
    inline const Aws::Vector<TraversedComponent>& GetTraversedConstructs() const { return m_traversedConstructs; }
    inline bool TraversedConstructsHasBeenSet() const { return m_traversedConstructsHasBeenSet; }
    template<typename TraversedConstructsT = Aws::Vector<TraversedComponent>>
    void SetTraversedConstructs(TraversedConstructsT&& value) { m_traversedConstructsHasBeenSet = true; m_traversedConstructs = std::forward<TraversedConstructsT>(value); }
    template<typename TraversedConstructsT = Aws::Vector<TraversedComponent>>
    MonitorTopContributorsRow& WithTraversedConstructs(TraversedConstructsT&& value) { SetTraversedConstructs(std::forward<TraversedConstructsT>(value)); return *this;}
    template<typename TraversedConstructsT = TraversedComponent>
    MonitorTopContributorsRow& AddTraversedConstructs(TraversedConstructsT&& value) { m_traversedConstructsHasBeenSet = true; m_traversedConstructs.emplace_back(std::forward<TraversedConstructsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Meta data about Kubernetes resources.</p>
     */
    inline const KubernetesMetadata& GetKubernetesMetadata() const { return m_kubernetesMetadata; }
    inline bool KubernetesMetadataHasBeenSet() const { return m_kubernetesMetadataHasBeenSet; }
    template<typename KubernetesMetadataT = KubernetesMetadata>
    void SetKubernetesMetadata(KubernetesMetadataT&& value) { m_kubernetesMetadataHasBeenSet = true; m_kubernetesMetadata = std::forward<KubernetesMetadataT>(value); }
    template<typename KubernetesMetadataT = KubernetesMetadata>
    MonitorTopContributorsRow& WithKubernetesMetadata(KubernetesMetadataT&& value) { SetKubernetesMetadata(std::forward<KubernetesMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a local resource.</p>
     */
    inline const Aws::String& GetLocalInstanceArn() const { return m_localInstanceArn; }
    inline bool LocalInstanceArnHasBeenSet() const { return m_localInstanceArnHasBeenSet; }
    template<typename LocalInstanceArnT = Aws::String>
    void SetLocalInstanceArn(LocalInstanceArnT&& value) { m_localInstanceArnHasBeenSet = true; m_localInstanceArn = std::forward<LocalInstanceArnT>(value); }
    template<typename LocalInstanceArnT = Aws::String>
    MonitorTopContributorsRow& WithLocalInstanceArn(LocalInstanceArnT&& value) { SetLocalInstanceArn(std::forward<LocalInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a local subnet.</p>
     */
    inline const Aws::String& GetLocalSubnetArn() const { return m_localSubnetArn; }
    inline bool LocalSubnetArnHasBeenSet() const { return m_localSubnetArnHasBeenSet; }
    template<typename LocalSubnetArnT = Aws::String>
    void SetLocalSubnetArn(LocalSubnetArnT&& value) { m_localSubnetArnHasBeenSet = true; m_localSubnetArn = std::forward<LocalSubnetArnT>(value); }
    template<typename LocalSubnetArnT = Aws::String>
    MonitorTopContributorsRow& WithLocalSubnetArn(LocalSubnetArnT&& value) { SetLocalSubnetArn(std::forward<LocalSubnetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a local VPC.</p>
     */
    inline const Aws::String& GetLocalVpcArn() const { return m_localVpcArn; }
    inline bool LocalVpcArnHasBeenSet() const { return m_localVpcArnHasBeenSet; }
    template<typename LocalVpcArnT = Aws::String>
    void SetLocalVpcArn(LocalVpcArnT&& value) { m_localVpcArnHasBeenSet = true; m_localVpcArn = std::forward<LocalVpcArnT>(value); }
    template<typename LocalVpcArnT = Aws::String>
    MonitorTopContributorsRow& WithLocalVpcArn(LocalVpcArnT&& value) { SetLocalVpcArn(std::forward<LocalVpcArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a remote resource.</p>
     */
    inline const Aws::String& GetRemoteInstanceArn() const { return m_remoteInstanceArn; }
    inline bool RemoteInstanceArnHasBeenSet() const { return m_remoteInstanceArnHasBeenSet; }
    template<typename RemoteInstanceArnT = Aws::String>
    void SetRemoteInstanceArn(RemoteInstanceArnT&& value) { m_remoteInstanceArnHasBeenSet = true; m_remoteInstanceArn = std::forward<RemoteInstanceArnT>(value); }
    template<typename RemoteInstanceArnT = Aws::String>
    MonitorTopContributorsRow& WithRemoteInstanceArn(RemoteInstanceArnT&& value) { SetRemoteInstanceArn(std::forward<RemoteInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a remote subnet.</p>
     */
    inline const Aws::String& GetRemoteSubnetArn() const { return m_remoteSubnetArn; }
    inline bool RemoteSubnetArnHasBeenSet() const { return m_remoteSubnetArnHasBeenSet; }
    template<typename RemoteSubnetArnT = Aws::String>
    void SetRemoteSubnetArn(RemoteSubnetArnT&& value) { m_remoteSubnetArnHasBeenSet = true; m_remoteSubnetArn = std::forward<RemoteSubnetArnT>(value); }
    template<typename RemoteSubnetArnT = Aws::String>
    MonitorTopContributorsRow& WithRemoteSubnetArn(RemoteSubnetArnT&& value) { SetRemoteSubnetArn(std::forward<RemoteSubnetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a remote VPC.</p>
     */
    inline const Aws::String& GetRemoteVpcArn() const { return m_remoteVpcArn; }
    inline bool RemoteVpcArnHasBeenSet() const { return m_remoteVpcArnHasBeenSet; }
    template<typename RemoteVpcArnT = Aws::String>
    void SetRemoteVpcArn(RemoteVpcArnT&& value) { m_remoteVpcArnHasBeenSet = true; m_remoteVpcArn = std::forward<RemoteVpcArnT>(value); }
    template<typename RemoteVpcArnT = Aws::String>
    MonitorTopContributorsRow& WithRemoteVpcArn(RemoteVpcArnT&& value) { SetRemoteVpcArn(std::forward<RemoteVpcArnT>(value)); return *this;}
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

    int m_targetPort{0};
    bool m_targetPortHasBeenSet = false;

    DestinationCategory m_destinationCategory{DestinationCategory::NOT_SET};
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

    long long m_value{0};
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
