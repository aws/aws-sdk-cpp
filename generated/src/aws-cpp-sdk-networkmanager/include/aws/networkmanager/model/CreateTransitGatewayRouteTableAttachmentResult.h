/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/TransitGatewayRouteTableAttachment.h>
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
  class CreateTransitGatewayRouteTableAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API CreateTransitGatewayRouteTableAttachmentResult();
    AWS_NETWORKMANAGER_API CreateTransitGatewayRouteTableAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API CreateTransitGatewayRouteTableAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The route table associated with the create transit gateway route table
     * attachment request.</p>
     */
    inline const TransitGatewayRouteTableAttachment& GetTransitGatewayRouteTableAttachment() const{ return m_transitGatewayRouteTableAttachment; }

    /**
     * <p>The route table associated with the create transit gateway route table
     * attachment request.</p>
     */
    inline void SetTransitGatewayRouteTableAttachment(const TransitGatewayRouteTableAttachment& value) { m_transitGatewayRouteTableAttachment = value; }

    /**
     * <p>The route table associated with the create transit gateway route table
     * attachment request.</p>
     */
    inline void SetTransitGatewayRouteTableAttachment(TransitGatewayRouteTableAttachment&& value) { m_transitGatewayRouteTableAttachment = std::move(value); }

    /**
     * <p>The route table associated with the create transit gateway route table
     * attachment request.</p>
     */
    inline CreateTransitGatewayRouteTableAttachmentResult& WithTransitGatewayRouteTableAttachment(const TransitGatewayRouteTableAttachment& value) { SetTransitGatewayRouteTableAttachment(value); return *this;}

    /**
     * <p>The route table associated with the create transit gateway route table
     * attachment request.</p>
     */
    inline CreateTransitGatewayRouteTableAttachmentResult& WithTransitGatewayRouteTableAttachment(TransitGatewayRouteTableAttachment&& value) { SetTransitGatewayRouteTableAttachment(std::move(value)); return *this;}

  private:

    TransitGatewayRouteTableAttachment m_transitGatewayRouteTableAttachment;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
