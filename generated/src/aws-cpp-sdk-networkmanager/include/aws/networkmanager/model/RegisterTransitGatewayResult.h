/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/TransitGatewayRegistration.h>
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
  class RegisterTransitGatewayResult
  {
  public:
    AWS_NETWORKMANAGER_API RegisterTransitGatewayResult();
    AWS_NETWORKMANAGER_API RegisterTransitGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API RegisterTransitGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the transit gateway registration.</p>
     */
    inline const TransitGatewayRegistration& GetTransitGatewayRegistration() const{ return m_transitGatewayRegistration; }

    /**
     * <p>Information about the transit gateway registration.</p>
     */
    inline void SetTransitGatewayRegistration(const TransitGatewayRegistration& value) { m_transitGatewayRegistration = value; }

    /**
     * <p>Information about the transit gateway registration.</p>
     */
    inline void SetTransitGatewayRegistration(TransitGatewayRegistration&& value) { m_transitGatewayRegistration = std::move(value); }

    /**
     * <p>Information about the transit gateway registration.</p>
     */
    inline RegisterTransitGatewayResult& WithTransitGatewayRegistration(const TransitGatewayRegistration& value) { SetTransitGatewayRegistration(value); return *this;}

    /**
     * <p>Information about the transit gateway registration.</p>
     */
    inline RegisterTransitGatewayResult& WithTransitGatewayRegistration(TransitGatewayRegistration&& value) { SetTransitGatewayRegistration(std::move(value)); return *this;}

  private:

    TransitGatewayRegistration m_transitGatewayRegistration;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
