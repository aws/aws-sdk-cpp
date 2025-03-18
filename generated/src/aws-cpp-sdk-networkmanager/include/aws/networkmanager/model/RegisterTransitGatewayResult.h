/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/TransitGatewayRegistration.h>
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
  class RegisterTransitGatewayResult
  {
  public:
    AWS_NETWORKMANAGER_API RegisterTransitGatewayResult() = default;
    AWS_NETWORKMANAGER_API RegisterTransitGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API RegisterTransitGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the transit gateway registration.</p>
     */
    inline const TransitGatewayRegistration& GetTransitGatewayRegistration() const { return m_transitGatewayRegistration; }
    template<typename TransitGatewayRegistrationT = TransitGatewayRegistration>
    void SetTransitGatewayRegistration(TransitGatewayRegistrationT&& value) { m_transitGatewayRegistrationHasBeenSet = true; m_transitGatewayRegistration = std::forward<TransitGatewayRegistrationT>(value); }
    template<typename TransitGatewayRegistrationT = TransitGatewayRegistration>
    RegisterTransitGatewayResult& WithTransitGatewayRegistration(TransitGatewayRegistrationT&& value) { SetTransitGatewayRegistration(std::forward<TransitGatewayRegistrationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegisterTransitGatewayResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayRegistration m_transitGatewayRegistration;
    bool m_transitGatewayRegistrationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
