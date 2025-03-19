/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/CoreNetwork.h>
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
namespace NetworkManager
{
namespace Model
{
  class GetCoreNetworkResult
  {
  public:
    AWS_NETWORKMANAGER_API GetCoreNetworkResult() = default;
    AWS_NETWORKMANAGER_API GetCoreNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetCoreNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about a core network.</p>
     */
    inline const CoreNetwork& GetCoreNetwork() const { return m_coreNetwork; }
    template<typename CoreNetworkT = CoreNetwork>
    void SetCoreNetwork(CoreNetworkT&& value) { m_coreNetworkHasBeenSet = true; m_coreNetwork = std::forward<CoreNetworkT>(value); }
    template<typename CoreNetworkT = CoreNetwork>
    GetCoreNetworkResult& WithCoreNetwork(CoreNetworkT&& value) { SetCoreNetwork(std::forward<CoreNetworkT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCoreNetworkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CoreNetwork m_coreNetwork;
    bool m_coreNetworkHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
