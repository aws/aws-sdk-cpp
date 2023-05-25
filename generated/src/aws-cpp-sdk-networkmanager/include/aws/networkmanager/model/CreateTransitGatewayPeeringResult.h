/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/TransitGatewayPeering.h>
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
  class CreateTransitGatewayPeeringResult
  {
  public:
    AWS_NETWORKMANAGER_API CreateTransitGatewayPeeringResult();
    AWS_NETWORKMANAGER_API CreateTransitGatewayPeeringResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API CreateTransitGatewayPeeringResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns information about the transit gateway peering connection request.</p>
     */
    inline const TransitGatewayPeering& GetTransitGatewayPeering() const{ return m_transitGatewayPeering; }

    /**
     * <p>Returns information about the transit gateway peering connection request.</p>
     */
    inline void SetTransitGatewayPeering(const TransitGatewayPeering& value) { m_transitGatewayPeering = value; }

    /**
     * <p>Returns information about the transit gateway peering connection request.</p>
     */
    inline void SetTransitGatewayPeering(TransitGatewayPeering&& value) { m_transitGatewayPeering = std::move(value); }

    /**
     * <p>Returns information about the transit gateway peering connection request.</p>
     */
    inline CreateTransitGatewayPeeringResult& WithTransitGatewayPeering(const TransitGatewayPeering& value) { SetTransitGatewayPeering(value); return *this;}

    /**
     * <p>Returns information about the transit gateway peering connection request.</p>
     */
    inline CreateTransitGatewayPeeringResult& WithTransitGatewayPeering(TransitGatewayPeering&& value) { SetTransitGatewayPeering(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateTransitGatewayPeeringResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateTransitGatewayPeeringResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateTransitGatewayPeeringResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TransitGatewayPeering m_transitGatewayPeering;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
