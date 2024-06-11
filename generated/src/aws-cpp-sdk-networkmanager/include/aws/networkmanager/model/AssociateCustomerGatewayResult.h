﻿/**
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
    AWS_NETWORKMANAGER_API AssociateCustomerGatewayResult();
    AWS_NETWORKMANAGER_API AssociateCustomerGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API AssociateCustomerGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The customer gateway association.</p>
     */
    inline const CustomerGatewayAssociation& GetCustomerGatewayAssociation() const{ return m_customerGatewayAssociation; }
    inline void SetCustomerGatewayAssociation(const CustomerGatewayAssociation& value) { m_customerGatewayAssociation = value; }
    inline void SetCustomerGatewayAssociation(CustomerGatewayAssociation&& value) { m_customerGatewayAssociation = std::move(value); }
    inline AssociateCustomerGatewayResult& WithCustomerGatewayAssociation(const CustomerGatewayAssociation& value) { SetCustomerGatewayAssociation(value); return *this;}
    inline AssociateCustomerGatewayResult& WithCustomerGatewayAssociation(CustomerGatewayAssociation&& value) { SetCustomerGatewayAssociation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateCustomerGatewayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateCustomerGatewayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateCustomerGatewayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CustomerGatewayAssociation m_customerGatewayAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
