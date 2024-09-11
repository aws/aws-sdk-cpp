/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/IpPoolCreateRequest.h>
#include <aws/medialive/model/RouteCreateRequest.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to create a Network.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateNetworkRequest">AWS
   * API Reference</a></p>
   */
  class CreateNetworkRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API CreateNetworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetwork"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * An array of IpPoolCreateRequests that identify a collection of IP addresses in
     * your network that you want to reserve for use in MediaLive Anywhere.
     * MediaLiveAnywhere uses these IP addresses for Push inputs (in both Bridge and
     * NATnetworks) and for output destinations (only in Bridge networks).
     * EachIpPoolUpdateRequest specifies one CIDR block.
     */
    inline const Aws::Vector<IpPoolCreateRequest>& GetIpPools() const{ return m_ipPools; }
    inline bool IpPoolsHasBeenSet() const { return m_ipPoolsHasBeenSet; }
    inline void SetIpPools(const Aws::Vector<IpPoolCreateRequest>& value) { m_ipPoolsHasBeenSet = true; m_ipPools = value; }
    inline void SetIpPools(Aws::Vector<IpPoolCreateRequest>&& value) { m_ipPoolsHasBeenSet = true; m_ipPools = std::move(value); }
    inline CreateNetworkRequest& WithIpPools(const Aws::Vector<IpPoolCreateRequest>& value) { SetIpPools(value); return *this;}
    inline CreateNetworkRequest& WithIpPools(Aws::Vector<IpPoolCreateRequest>&& value) { SetIpPools(std::move(value)); return *this;}
    inline CreateNetworkRequest& AddIpPools(const IpPoolCreateRequest& value) { m_ipPoolsHasBeenSet = true; m_ipPools.push_back(value); return *this; }
    inline CreateNetworkRequest& AddIpPools(IpPoolCreateRequest&& value) { m_ipPoolsHasBeenSet = true; m_ipPools.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Specify a name that is unique in the AWS account. We recommend that you assign a
     * name that hints at the type of traffic on the network. Names are case-sensitive.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateNetworkRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateNetworkRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateNetworkRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * An ID that you assign to a create request. This ID ensures idempotency when
     * creating resources.
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline CreateNetworkRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateNetworkRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateNetworkRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * An array of routes that MediaLive Anywhere needs to know about in order to route
     * encoding traffic.
     */
    inline const Aws::Vector<RouteCreateRequest>& GetRoutes() const{ return m_routes; }
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }
    inline void SetRoutes(const Aws::Vector<RouteCreateRequest>& value) { m_routesHasBeenSet = true; m_routes = value; }
    inline void SetRoutes(Aws::Vector<RouteCreateRequest>&& value) { m_routesHasBeenSet = true; m_routes = std::move(value); }
    inline CreateNetworkRequest& WithRoutes(const Aws::Vector<RouteCreateRequest>& value) { SetRoutes(value); return *this;}
    inline CreateNetworkRequest& WithRoutes(Aws::Vector<RouteCreateRequest>&& value) { SetRoutes(std::move(value)); return *this;}
    inline CreateNetworkRequest& AddRoutes(const RouteCreateRequest& value) { m_routesHasBeenSet = true; m_routes.push_back(value); return *this; }
    inline CreateNetworkRequest& AddRoutes(RouteCreateRequest&& value) { m_routesHasBeenSet = true; m_routes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateNetworkRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateNetworkRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateNetworkRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateNetworkRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateNetworkRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateNetworkRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateNetworkRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateNetworkRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateNetworkRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Vector<IpPoolCreateRequest> m_ipPools;
    bool m_ipPoolsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::Vector<RouteCreateRequest> m_routes;
    bool m_routesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
