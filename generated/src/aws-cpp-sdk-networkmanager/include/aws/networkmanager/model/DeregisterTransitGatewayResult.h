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
  class DeregisterTransitGatewayResult
  {
  public:
    AWS_NETWORKMANAGER_API DeregisterTransitGatewayResult();
    AWS_NETWORKMANAGER_API DeregisterTransitGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DeregisterTransitGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The transit gateway registration information.</p>
     */
    inline const TransitGatewayRegistration& GetTransitGatewayRegistration() const{ return m_transitGatewayRegistration; }

    /**
     * <p>The transit gateway registration information.</p>
     */
    inline void SetTransitGatewayRegistration(const TransitGatewayRegistration& value) { m_transitGatewayRegistration = value; }

    /**
     * <p>The transit gateway registration information.</p>
     */
    inline void SetTransitGatewayRegistration(TransitGatewayRegistration&& value) { m_transitGatewayRegistration = std::move(value); }

    /**
     * <p>The transit gateway registration information.</p>
     */
    inline DeregisterTransitGatewayResult& WithTransitGatewayRegistration(const TransitGatewayRegistration& value) { SetTransitGatewayRegistration(value); return *this;}

    /**
     * <p>The transit gateway registration information.</p>
     */
    inline DeregisterTransitGatewayResult& WithTransitGatewayRegistration(TransitGatewayRegistration&& value) { SetTransitGatewayRegistration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeregisterTransitGatewayResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeregisterTransitGatewayResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeregisterTransitGatewayResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TransitGatewayRegistration m_transitGatewayRegistration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
