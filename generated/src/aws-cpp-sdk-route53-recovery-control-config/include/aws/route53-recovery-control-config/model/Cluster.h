/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-control-config/model/Status.h>
#include <aws/route53-recovery-control-config/model/NetworkType.h>
#include <aws/route53-recovery-control-config/model/ClusterEndpoint.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   * <p>A set of five redundant Regional endpoints against which you can execute API
   * calls to update or get the state of routing controls. You can host multiple
   * control panels and routing controls on one cluster.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/Cluster">AWS
   * API Reference</a></p>
   */
  class Cluster
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Cluster() = default;
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    Cluster& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Endpoints for a cluster. Specify one of these endpoints when you want to set
     * or retrieve a routing control state in the cluster.</p> <p>To get or update the
     * routing control state, see the Amazon Route 53 Application Recovery Controller
     * Routing Control Actions.</p>
     */
    inline const Aws::Vector<ClusterEndpoint>& GetClusterEndpoints() const { return m_clusterEndpoints; }
    inline bool ClusterEndpointsHasBeenSet() const { return m_clusterEndpointsHasBeenSet; }
    template<typename ClusterEndpointsT = Aws::Vector<ClusterEndpoint>>
    void SetClusterEndpoints(ClusterEndpointsT&& value) { m_clusterEndpointsHasBeenSet = true; m_clusterEndpoints = std::forward<ClusterEndpointsT>(value); }
    template<typename ClusterEndpointsT = Aws::Vector<ClusterEndpoint>>
    Cluster& WithClusterEndpoints(ClusterEndpointsT&& value) { SetClusterEndpoints(std::forward<ClusterEndpointsT>(value)); return *this;}
    template<typename ClusterEndpointsT = ClusterEndpoint>
    Cluster& AddClusterEndpoints(ClusterEndpointsT&& value) { m_clusterEndpointsHasBeenSet = true; m_clusterEndpoints.emplace_back(std::forward<ClusterEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Cluster& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deployment status of a resource. Status can be one of the following: PENDING,
     * DEPLOYED, PENDING_DELETION.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline Cluster& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    Cluster& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type of the cluster. NetworkType can be one of the following:
     * IPV4, DUALSTACK.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline Cluster& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::Vector<ClusterEndpoint> m_clusterEndpoints;
    bool m_clusterEndpointsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
