/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/NetworkResource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartNetworkResourceUpdateResult
  {
  public:
    AWS_PRIVATENETWORKS_API StartNetworkResourceUpdateResult() = default;
    AWS_PRIVATENETWORKS_API StartNetworkResourceUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API StartNetworkResourceUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The network resource.</p>
     */
    inline const NetworkResource& GetNetworkResource() const { return m_networkResource; }
    template<typename NetworkResourceT = NetworkResource>
    void SetNetworkResource(NetworkResourceT&& value) { m_networkResourceHasBeenSet = true; m_networkResource = std::forward<NetworkResourceT>(value); }
    template<typename NetworkResourceT = NetworkResource>
    StartNetworkResourceUpdateResult& WithNetworkResource(NetworkResourceT&& value) { SetNetworkResource(std::forward<NetworkResourceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartNetworkResourceUpdateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    NetworkResource m_networkResource;
    bool m_networkResourceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
