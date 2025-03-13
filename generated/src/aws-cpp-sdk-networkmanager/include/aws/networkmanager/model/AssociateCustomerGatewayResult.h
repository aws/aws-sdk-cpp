/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/CustomerGatewayAssociation.h>
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
  class AssociateCustomerGatewayResult
  {
  public:
    AWS_NETWORKMANAGER_API AssociateCustomerGatewayResult() = default;
    AWS_NETWORKMANAGER_API AssociateCustomerGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API AssociateCustomerGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The customer gateway association.</p>
     */
    inline const CustomerGatewayAssociation& GetCustomerGatewayAssociation() const { return m_customerGatewayAssociation; }
    template<typename CustomerGatewayAssociationT = CustomerGatewayAssociation>
    void SetCustomerGatewayAssociation(CustomerGatewayAssociationT&& value) { m_customerGatewayAssociationHasBeenSet = true; m_customerGatewayAssociation = std::forward<CustomerGatewayAssociationT>(value); }
    template<typename CustomerGatewayAssociationT = CustomerGatewayAssociation>
    AssociateCustomerGatewayResult& WithCustomerGatewayAssociation(CustomerGatewayAssociationT&& value) { SetCustomerGatewayAssociation(std::forward<CustomerGatewayAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateCustomerGatewayResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CustomerGatewayAssociation m_customerGatewayAssociation;
    bool m_customerGatewayAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
