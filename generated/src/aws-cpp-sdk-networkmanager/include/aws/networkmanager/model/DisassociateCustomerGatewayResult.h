/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
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
  class DisassociateCustomerGatewayResult
  {
  public:
    AWS_NETWORKMANAGER_API DisassociateCustomerGatewayResult();
    AWS_NETWORKMANAGER_API DisassociateCustomerGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DisassociateCustomerGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the customer gateway association.</p>
     */
    inline const CustomerGatewayAssociation& GetCustomerGatewayAssociation() const{ return m_customerGatewayAssociation; }

    /**
     * <p>Information about the customer gateway association.</p>
     */
    inline void SetCustomerGatewayAssociation(const CustomerGatewayAssociation& value) { m_customerGatewayAssociation = value; }

    /**
     * <p>Information about the customer gateway association.</p>
     */
    inline void SetCustomerGatewayAssociation(CustomerGatewayAssociation&& value) { m_customerGatewayAssociation = std::move(value); }

    /**
     * <p>Information about the customer gateway association.</p>
     */
    inline DisassociateCustomerGatewayResult& WithCustomerGatewayAssociation(const CustomerGatewayAssociation& value) { SetCustomerGatewayAssociation(value); return *this;}

    /**
     * <p>Information about the customer gateway association.</p>
     */
    inline DisassociateCustomerGatewayResult& WithCustomerGatewayAssociation(CustomerGatewayAssociation&& value) { SetCustomerGatewayAssociation(std::move(value)); return *this;}

  private:

    CustomerGatewayAssociation m_customerGatewayAssociation;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
