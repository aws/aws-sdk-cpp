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
  class DisassociateCustomerGatewayResult
  {
  public:
    AWS_NETWORKMANAGER_API DisassociateCustomerGatewayResult() = default;
    AWS_NETWORKMANAGER_API DisassociateCustomerGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DisassociateCustomerGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the customer gateway association.</p>
     */
    inline const CustomerGatewayAssociation& GetCustomerGatewayAssociation() const { return m_customerGatewayAssociation; }
    template<typename CustomerGatewayAssociationT = CustomerGatewayAssociation>
    void SetCustomerGatewayAssociation(CustomerGatewayAssociationT&& value) { m_customerGatewayAssociationHasBeenSet = true; m_customerGatewayAssociation = std::forward<CustomerGatewayAssociationT>(value); }
    template<typename CustomerGatewayAssociationT = CustomerGatewayAssociation>
    DisassociateCustomerGatewayResult& WithCustomerGatewayAssociation(CustomerGatewayAssociationT&& value) { SetCustomerGatewayAssociation(std::forward<CustomerGatewayAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisassociateCustomerGatewayResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
