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


    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline Cluster& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline Cluster& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline Cluster& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>Endpoints for a cluster. Specify one of these endpoints when you want to set
     * or retrieve a routing control state in the cluster.</p> <p>To get or update the
     * routing control state, see the Amazon Route 53 Application Recovery Controller
     * Routing Control Actions.</p>
     */
    inline const Aws::Vector<ClusterEndpoint>& GetClusterEndpoints() const{ return m_clusterEndpoints; }

    /**
     * <p>Endpoints for a cluster. Specify one of these endpoints when you want to set
     * or retrieve a routing control state in the cluster.</p> <p>To get or update the
     * routing control state, see the Amazon Route 53 Application Recovery Controller
     * Routing Control Actions.</p>
     */
    inline bool ClusterEndpointsHasBeenSet() const { return m_clusterEndpointsHasBeenSet; }

    /**
     * <p>Endpoints for a cluster. Specify one of these endpoints when you want to set
     * or retrieve a routing control state in the cluster.</p> <p>To get or update the
     * routing control state, see the Amazon Route 53 Application Recovery Controller
     * Routing Control Actions.</p>
     */
    inline void SetClusterEndpoints(const Aws::Vector<ClusterEndpoint>& value) { m_clusterEndpointsHasBeenSet = true; m_clusterEndpoints = value; }

    /**
     * <p>Endpoints for a cluster. Specify one of these endpoints when you want to set
     * or retrieve a routing control state in the cluster.</p> <p>To get or update the
     * routing control state, see the Amazon Route 53 Application Recovery Controller
     * Routing Control Actions.</p>
     */
    inline void SetClusterEndpoints(Aws::Vector<ClusterEndpoint>&& value) { m_clusterEndpointsHasBeenSet = true; m_clusterEndpoints = std::move(value); }

    /**
     * <p>Endpoints for a cluster. Specify one of these endpoints when you want to set
     * or retrieve a routing control state in the cluster.</p> <p>To get or update the
     * routing control state, see the Amazon Route 53 Application Recovery Controller
     * Routing Control Actions.</p>
     */
    inline Cluster& WithClusterEndpoints(const Aws::Vector<ClusterEndpoint>& value) { SetClusterEndpoints(value); return *this;}

    /**
     * <p>Endpoints for a cluster. Specify one of these endpoints when you want to set
     * or retrieve a routing control state in the cluster.</p> <p>To get or update the
     * routing control state, see the Amazon Route 53 Application Recovery Controller
     * Routing Control Actions.</p>
     */
    inline Cluster& WithClusterEndpoints(Aws::Vector<ClusterEndpoint>&& value) { SetClusterEndpoints(std::move(value)); return *this;}

    /**
     * <p>Endpoints for a cluster. Specify one of these endpoints when you want to set
     * or retrieve a routing control state in the cluster.</p> <p>To get or update the
     * routing control state, see the Amazon Route 53 Application Recovery Controller
     * Routing Control Actions.</p>
     */
    inline Cluster& AddClusterEndpoints(const ClusterEndpoint& value) { m_clusterEndpointsHasBeenSet = true; m_clusterEndpoints.push_back(value); return *this; }

    /**
     * <p>Endpoints for a cluster. Specify one of these endpoints when you want to set
     * or retrieve a routing control state in the cluster.</p> <p>To get or update the
     * routing control state, see the Amazon Route 53 Application Recovery Controller
     * Routing Control Actions.</p>
     */
    inline Cluster& AddClusterEndpoints(ClusterEndpoint&& value) { m_clusterEndpointsHasBeenSet = true; m_clusterEndpoints.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the cluster.</p>
     */
    inline Cluster& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline Cluster& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster.</p>
     */
    inline Cluster& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Deployment status of a resource. Status can be one of the following: PENDING,
     * DEPLOYED, PENDING_DELETION.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>Deployment status of a resource. Status can be one of the following: PENDING,
     * DEPLOYED, PENDING_DELETION.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Deployment status of a resource. Status can be one of the following: PENDING,
     * DEPLOYED, PENDING_DELETION.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Deployment status of a resource. Status can be one of the following: PENDING,
     * DEPLOYED, PENDING_DELETION.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Deployment status of a resource. Status can be one of the following: PENDING,
     * DEPLOYED, PENDING_DELETION.</p>
     */
    inline Cluster& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>Deployment status of a resource. Status can be one of the following: PENDING,
     * DEPLOYED, PENDING_DELETION.</p>
     */
    inline Cluster& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::Vector<ClusterEndpoint> m_clusterEndpoints;
    bool m_clusterEndpointsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
