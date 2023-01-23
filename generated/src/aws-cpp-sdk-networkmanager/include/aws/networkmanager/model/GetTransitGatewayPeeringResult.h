/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/TransitGatewayPeering.h>
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


    /**
     * <p>Returns information about a transit gateway peering. </p>
     */
    inline const TransitGatewayPeering& GetTransitGatewayPeering() const{ return m_transitGatewayPeering; }

    /**
     * <p>Returns information about a transit gateway peering. </p>
     */
    inline void SetTransitGatewayPeering(const TransitGatewayPeering& value) { m_transitGatewayPeering = value; }

    /**
     * <p>Returns information about a transit gateway peering. </p>
     */
    inline void SetTransitGatewayPeering(TransitGatewayPeering&& value) { m_transitGatewayPeering = std::move(value); }

    /**
     * <p>Returns information about a transit gateway peering. </p>
     */
    inline GetTransitGatewayPeeringResult& WithTransitGatewayPeering(const TransitGatewayPeering& value) { SetTransitGatewayPeering(value); return *this;}

    /**
     * <p>Returns information about a transit gateway peering. </p>
     */
    inline GetTransitGatewayPeeringResult& WithTransitGatewayPeering(TransitGatewayPeering&& value) { SetTransitGatewayPeering(std::move(value)); return *this;}

  private:

    TransitGatewayPeering m_transitGatewayPeering;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
