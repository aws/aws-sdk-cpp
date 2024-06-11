﻿/**
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
  class GetTransitGatewayPeeringResult
  {
  public:
    AWS_NETWORKMANAGER_API GetTransitGatewayPeeringResult();
    AWS_NETWORKMANAGER_API GetTransitGatewayPeeringResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetTransitGatewayPeeringResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns information about a transit gateway peering. </p>
     */
    inline const TransitGatewayPeering& GetTransitGatewayPeering() const{ return m_transitGatewayPeering; }
    inline void SetTransitGatewayPeering(const TransitGatewayPeering& value) { m_transitGatewayPeering = value; }
    inline void SetTransitGatewayPeering(TransitGatewayPeering&& value) { m_transitGatewayPeering = std::move(value); }
    inline GetTransitGatewayPeeringResult& WithTransitGatewayPeering(const TransitGatewayPeering& value) { SetTransitGatewayPeering(value); return *this;}
    inline GetTransitGatewayPeeringResult& WithTransitGatewayPeering(TransitGatewayPeering&& value) { SetTransitGatewayPeering(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTransitGatewayPeeringResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTransitGatewayPeeringResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTransitGatewayPeeringResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TransitGatewayPeering m_transitGatewayPeering;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
