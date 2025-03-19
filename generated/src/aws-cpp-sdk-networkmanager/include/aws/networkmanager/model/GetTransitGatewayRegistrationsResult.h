/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/TransitGatewayRegistration.h>
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
  class GetTransitGatewayRegistrationsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetTransitGatewayRegistrationsResult() = default;
    AWS_NETWORKMANAGER_API GetTransitGatewayRegistrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetTransitGatewayRegistrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The transit gateway registrations.</p>
     */
    inline const Aws::Vector<TransitGatewayRegistration>& GetTransitGatewayRegistrations() const { return m_transitGatewayRegistrations; }
    template<typename TransitGatewayRegistrationsT = Aws::Vector<TransitGatewayRegistration>>
    void SetTransitGatewayRegistrations(TransitGatewayRegistrationsT&& value) { m_transitGatewayRegistrationsHasBeenSet = true; m_transitGatewayRegistrations = std::forward<TransitGatewayRegistrationsT>(value); }
    template<typename TransitGatewayRegistrationsT = Aws::Vector<TransitGatewayRegistration>>
    GetTransitGatewayRegistrationsResult& WithTransitGatewayRegistrations(TransitGatewayRegistrationsT&& value) { SetTransitGatewayRegistrations(std::forward<TransitGatewayRegistrationsT>(value)); return *this;}
    template<typename TransitGatewayRegistrationsT = TransitGatewayRegistration>
    GetTransitGatewayRegistrationsResult& AddTransitGatewayRegistrations(TransitGatewayRegistrationsT&& value) { m_transitGatewayRegistrationsHasBeenSet = true; m_transitGatewayRegistrations.emplace_back(std::forward<TransitGatewayRegistrationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTransitGatewayRegistrationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTransitGatewayRegistrationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransitGatewayRegistration> m_transitGatewayRegistrations;
    bool m_transitGatewayRegistrationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
