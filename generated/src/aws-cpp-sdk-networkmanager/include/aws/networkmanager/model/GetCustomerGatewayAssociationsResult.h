/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CustomerGatewayAssociation.h>
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
  class GetCustomerGatewayAssociationsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetCustomerGatewayAssociationsResult() = default;
    AWS_NETWORKMANAGER_API GetCustomerGatewayAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetCustomerGatewayAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The customer gateway associations.</p>
     */
    inline const Aws::Vector<CustomerGatewayAssociation>& GetCustomerGatewayAssociations() const { return m_customerGatewayAssociations; }
    template<typename CustomerGatewayAssociationsT = Aws::Vector<CustomerGatewayAssociation>>
    void SetCustomerGatewayAssociations(CustomerGatewayAssociationsT&& value) { m_customerGatewayAssociationsHasBeenSet = true; m_customerGatewayAssociations = std::forward<CustomerGatewayAssociationsT>(value); }
    template<typename CustomerGatewayAssociationsT = Aws::Vector<CustomerGatewayAssociation>>
    GetCustomerGatewayAssociationsResult& WithCustomerGatewayAssociations(CustomerGatewayAssociationsT&& value) { SetCustomerGatewayAssociations(std::forward<CustomerGatewayAssociationsT>(value)); return *this;}
    template<typename CustomerGatewayAssociationsT = CustomerGatewayAssociation>
    GetCustomerGatewayAssociationsResult& AddCustomerGatewayAssociations(CustomerGatewayAssociationsT&& value) { m_customerGatewayAssociationsHasBeenSet = true; m_customerGatewayAssociations.emplace_back(std::forward<CustomerGatewayAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCustomerGatewayAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCustomerGatewayAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomerGatewayAssociation> m_customerGatewayAssociations;
    bool m_customerGatewayAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
