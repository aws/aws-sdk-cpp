/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/NetworkSite.h>
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
  class DeleteNetworkSiteResult
  {
  public:
    AWS_PRIVATENETWORKS_API DeleteNetworkSiteResult() = default;
    AWS_PRIVATENETWORKS_API DeleteNetworkSiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API DeleteNetworkSiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the network site.</p>
     */
    inline const NetworkSite& GetNetworkSite() const { return m_networkSite; }
    template<typename NetworkSiteT = NetworkSite>
    void SetNetworkSite(NetworkSiteT&& value) { m_networkSiteHasBeenSet = true; m_networkSite = std::forward<NetworkSiteT>(value); }
    template<typename NetworkSiteT = NetworkSite>
    DeleteNetworkSiteResult& WithNetworkSite(NetworkSiteT&& value) { SetNetworkSite(std::forward<NetworkSiteT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteNetworkSiteResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    NetworkSite m_networkSite;
    bool m_networkSiteHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
