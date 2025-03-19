/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/NetworkTelemetry.h>
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
  class GetNetworkTelemetryResult
  {
  public:
    AWS_NETWORKMANAGER_API GetNetworkTelemetryResult() = default;
    AWS_NETWORKMANAGER_API GetNetworkTelemetryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetNetworkTelemetryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The network telemetry.</p>
     */
    inline const Aws::Vector<NetworkTelemetry>& GetNetworkTelemetry() const { return m_networkTelemetry; }
    template<typename NetworkTelemetryT = Aws::Vector<NetworkTelemetry>>
    void SetNetworkTelemetry(NetworkTelemetryT&& value) { m_networkTelemetryHasBeenSet = true; m_networkTelemetry = std::forward<NetworkTelemetryT>(value); }
    template<typename NetworkTelemetryT = Aws::Vector<NetworkTelemetry>>
    GetNetworkTelemetryResult& WithNetworkTelemetry(NetworkTelemetryT&& value) { SetNetworkTelemetry(std::forward<NetworkTelemetryT>(value)); return *this;}
    template<typename NetworkTelemetryT = NetworkTelemetry>
    GetNetworkTelemetryResult& AddNetworkTelemetry(NetworkTelemetryT&& value) { m_networkTelemetryHasBeenSet = true; m_networkTelemetry.emplace_back(std::forward<NetworkTelemetryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetNetworkTelemetryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetNetworkTelemetryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkTelemetry> m_networkTelemetry;
    bool m_networkTelemetryHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
