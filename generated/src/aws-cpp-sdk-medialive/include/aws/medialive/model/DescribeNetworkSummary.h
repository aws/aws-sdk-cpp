/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/NetworkState.h>
#include <aws/medialive/model/IpPool.h>
#include <aws/medialive/model/Route.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Used in ListNetworksResult.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeNetworkSummary">AWS
   * API Reference</a></p>
   */
  class DescribeNetworkSummary
  {
  public:
    AWS_MEDIALIVE_API DescribeNetworkSummary();
    AWS_MEDIALIVE_API DescribeNetworkSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API DescribeNetworkSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of this Network. It is automatically assigned when the Network is
     * created.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DescribeNetworkSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeNetworkSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeNetworkSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetAssociatedClusterIds() const{ return m_associatedClusterIds; }
    inline bool AssociatedClusterIdsHasBeenSet() const { return m_associatedClusterIdsHasBeenSet; }
    inline void SetAssociatedClusterIds(const Aws::Vector<Aws::String>& value) { m_associatedClusterIdsHasBeenSet = true; m_associatedClusterIds = value; }
    inline void SetAssociatedClusterIds(Aws::Vector<Aws::String>&& value) { m_associatedClusterIdsHasBeenSet = true; m_associatedClusterIds = std::move(value); }
    inline DescribeNetworkSummary& WithAssociatedClusterIds(const Aws::Vector<Aws::String>& value) { SetAssociatedClusterIds(value); return *this;}
    inline DescribeNetworkSummary& WithAssociatedClusterIds(Aws::Vector<Aws::String>&& value) { SetAssociatedClusterIds(std::move(value)); return *this;}
    inline DescribeNetworkSummary& AddAssociatedClusterIds(const Aws::String& value) { m_associatedClusterIdsHasBeenSet = true; m_associatedClusterIds.push_back(value); return *this; }
    inline DescribeNetworkSummary& AddAssociatedClusterIds(Aws::String&& value) { m_associatedClusterIdsHasBeenSet = true; m_associatedClusterIds.push_back(std::move(value)); return *this; }
    inline DescribeNetworkSummary& AddAssociatedClusterIds(const char* value) { m_associatedClusterIdsHasBeenSet = true; m_associatedClusterIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The ID of the Network. Unique in the AWS account. The ID is the resource-id
     * portion of the ARN.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DescribeNetworkSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DescribeNetworkSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DescribeNetworkSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * An array of IpPools in your organization's network that identify a collection of
     * IP addresses in your organization's network that are reserved for use in
     * MediaLive Anywhere. MediaLive Anywhere uses these IP addresses for Push inputs
     * (in both Bridge and NAT networks) and for output destinations (only in Bridge
     * networks). Each IpPool specifies one CIDR block.
     */
    inline const Aws::Vector<IpPool>& GetIpPools() const{ return m_ipPools; }
    inline bool IpPoolsHasBeenSet() const { return m_ipPoolsHasBeenSet; }
    inline void SetIpPools(const Aws::Vector<IpPool>& value) { m_ipPoolsHasBeenSet = true; m_ipPools = value; }
    inline void SetIpPools(Aws::Vector<IpPool>&& value) { m_ipPoolsHasBeenSet = true; m_ipPools = std::move(value); }
    inline DescribeNetworkSummary& WithIpPools(const Aws::Vector<IpPool>& value) { SetIpPools(value); return *this;}
    inline DescribeNetworkSummary& WithIpPools(Aws::Vector<IpPool>&& value) { SetIpPools(std::move(value)); return *this;}
    inline DescribeNetworkSummary& AddIpPools(const IpPool& value) { m_ipPoolsHasBeenSet = true; m_ipPools.push_back(value); return *this; }
    inline DescribeNetworkSummary& AddIpPools(IpPool&& value) { m_ipPoolsHasBeenSet = true; m_ipPools.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The name that you specified for this Network.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DescribeNetworkSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeNetworkSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeNetworkSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * An array of routes that MediaLive Anywhere needs to know about in order to route
     * encoding traffic.
     */
    inline const Aws::Vector<Route>& GetRoutes() const{ return m_routes; }
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }
    inline void SetRoutes(const Aws::Vector<Route>& value) { m_routesHasBeenSet = true; m_routes = value; }
    inline void SetRoutes(Aws::Vector<Route>&& value) { m_routesHasBeenSet = true; m_routes = std::move(value); }
    inline DescribeNetworkSummary& WithRoutes(const Aws::Vector<Route>& value) { SetRoutes(value); return *this;}
    inline DescribeNetworkSummary& WithRoutes(Aws::Vector<Route>&& value) { SetRoutes(std::move(value)); return *this;}
    inline DescribeNetworkSummary& AddRoutes(const Route& value) { m_routesHasBeenSet = true; m_routes.push_back(value); return *this; }
    inline DescribeNetworkSummary& AddRoutes(Route&& value) { m_routesHasBeenSet = true; m_routes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The current state of the Network. Only MediaLive Anywhere can change the state.
     */
    inline const NetworkState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const NetworkState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(NetworkState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline DescribeNetworkSummary& WithState(const NetworkState& value) { SetState(value); return *this;}
    inline DescribeNetworkSummary& WithState(NetworkState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedClusterIds;
    bool m_associatedClusterIdsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<IpPool> m_ipPools;
    bool m_ipPoolsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Route> m_routes;
    bool m_routesHasBeenSet = false;

    NetworkState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
