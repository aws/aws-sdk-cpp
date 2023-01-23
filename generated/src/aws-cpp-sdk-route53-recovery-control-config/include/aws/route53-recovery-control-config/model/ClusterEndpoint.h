/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A cluster endpoint. Specify an endpoint when you want to set or retrieve a
   * routing control state in the cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/ClusterEndpoint">AWS
   * API Reference</a></p>
   */
  class ClusterEndpoint
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ClusterEndpoint();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ClusterEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ClusterEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A cluster endpoint. Specify an endpoint and Amazon Web Services Region when
     * you want to set or retrieve a routing control state in the cluster.</p> <p>To
     * get or update the routing control state, see the Amazon Route 53 Application
     * Recovery Controller Routing Control Actions.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>A cluster endpoint. Specify an endpoint and Amazon Web Services Region when
     * you want to set or retrieve a routing control state in the cluster.</p> <p>To
     * get or update the routing control state, see the Amazon Route 53 Application
     * Recovery Controller Routing Control Actions.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>A cluster endpoint. Specify an endpoint and Amazon Web Services Region when
     * you want to set or retrieve a routing control state in the cluster.</p> <p>To
     * get or update the routing control state, see the Amazon Route 53 Application
     * Recovery Controller Routing Control Actions.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>A cluster endpoint. Specify an endpoint and Amazon Web Services Region when
     * you want to set or retrieve a routing control state in the cluster.</p> <p>To
     * get or update the routing control state, see the Amazon Route 53 Application
     * Recovery Controller Routing Control Actions.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>A cluster endpoint. Specify an endpoint and Amazon Web Services Region when
     * you want to set or retrieve a routing control state in the cluster.</p> <p>To
     * get or update the routing control state, see the Amazon Route 53 Application
     * Recovery Controller Routing Control Actions.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>A cluster endpoint. Specify an endpoint and Amazon Web Services Region when
     * you want to set or retrieve a routing control state in the cluster.</p> <p>To
     * get or update the routing control state, see the Amazon Route 53 Application
     * Recovery Controller Routing Control Actions.</p>
     */
    inline ClusterEndpoint& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>A cluster endpoint. Specify an endpoint and Amazon Web Services Region when
     * you want to set or retrieve a routing control state in the cluster.</p> <p>To
     * get or update the routing control state, see the Amazon Route 53 Application
     * Recovery Controller Routing Control Actions.</p>
     */
    inline ClusterEndpoint& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>A cluster endpoint. Specify an endpoint and Amazon Web Services Region when
     * you want to set or retrieve a routing control state in the cluster.</p> <p>To
     * get or update the routing control state, see the Amazon Route 53 Application
     * Recovery Controller Routing Control Actions.</p>
     */
    inline ClusterEndpoint& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The Amazon Web Services Region for a cluster endpoint.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region for a cluster endpoint.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region for a cluster endpoint.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region for a cluster endpoint.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region for a cluster endpoint.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region for a cluster endpoint.</p>
     */
    inline ClusterEndpoint& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region for a cluster endpoint.</p>
     */
    inline ClusterEndpoint& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region for a cluster endpoint.</p>
     */
    inline ClusterEndpoint& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
