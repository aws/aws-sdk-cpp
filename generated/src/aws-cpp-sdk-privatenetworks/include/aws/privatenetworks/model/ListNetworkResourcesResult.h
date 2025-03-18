﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/NetworkResource.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PrivateNetworks
{
namespace Model
{
  class ListNetworkResourcesResult
  {
  public:
    AWS_PRIVATENETWORKS_API ListNetworkResourcesResult() = default;
    AWS_PRIVATENETWORKS_API ListNetworkResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API ListNetworkResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about network resources.</p>
     */
    inline const Aws::Vector<NetworkResource>& GetNetworkResources() const { return m_networkResources; }
    template<typename NetworkResourcesT = Aws::Vector<NetworkResource>>
    void SetNetworkResources(NetworkResourcesT&& value) { m_networkResourcesHasBeenSet = true; m_networkResources = std::forward<NetworkResourcesT>(value); }
    template<typename NetworkResourcesT = Aws::Vector<NetworkResource>>
    ListNetworkResourcesResult& WithNetworkResources(NetworkResourcesT&& value) { SetNetworkResources(std::forward<NetworkResourcesT>(value)); return *this;}
    template<typename NetworkResourcesT = NetworkResource>
    ListNetworkResourcesResult& AddNetworkResources(NetworkResourcesT&& value) { m_networkResourcesHasBeenSet = true; m_networkResources.emplace_back(std::forward<NetworkResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNetworkResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNetworkResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkResource> m_networkResources;
    bool m_networkResourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
