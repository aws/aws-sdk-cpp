/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-control-config/model/Status.h>
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
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Cluster();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline Cluster& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline Cluster& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline Cluster& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Endpoints for a cluster. Specify one of these endpoints when you want to set
     * or retrieve a routing control state in the cluster.</p> <p>To get or update the
     * routing control state, see the Amazon Route 53 Application Recovery Controller
     * Routing Control Actions.</p>
     */
    inline const Aws::Vector<ClusterEndpoint>& GetClusterEndpoints() const{ return m_clusterEndpoints; }
    inline bool ClusterEndpointsHasBeenSet() const { return m_clusterEndpointsHasBeenSet; }
    inline void SetClusterEndpoints(const Aws::Vector<ClusterEndpoint>& value) { m_clusterEndpointsHasBeenSet = true; m_clusterEndpoints = value; }
    inline void SetClusterEndpoints(Aws::Vector<ClusterEndpoint>&& value) { m_clusterEndpointsHasBeenSet = true; m_clusterEndpoints = std::move(value); }
    inline Cluster& WithClusterEndpoints(const Aws::Vector<ClusterEndpoint>& value) { SetClusterEndpoints(value); return *this;}
    inline Cluster& WithClusterEndpoints(Aws::Vector<ClusterEndpoint>&& value) { SetClusterEndpoints(std::move(value)); return *this;}
    inline Cluster& AddClusterEndpoints(const ClusterEndpoint& value) { m_clusterEndpointsHasBeenSet = true; m_clusterEndpoints.push_back(value); return *this; }
    inline Cluster& AddClusterEndpoints(ClusterEndpoint&& value) { m_clusterEndpointsHasBeenSet = true; m_clusterEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Cluster& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Cluster& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Cluster& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deployment status of a resource. Status can be one of the following: PENDING,
     * DEPLOYED, PENDING_DELETION.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Cluster& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline Cluster& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline Cluster& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline Cluster& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline Cluster& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::Vector<ClusterEndpoint> m_clusterEndpoints;
    bool m_clusterEndpointsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
