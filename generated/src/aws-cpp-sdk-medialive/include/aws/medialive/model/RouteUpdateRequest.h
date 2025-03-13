/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Used in UpdateNetworkRequest.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RouteUpdateRequest">AWS
   * API Reference</a></p>
   */
  class RouteUpdateRequest
  {
  public:
    AWS_MEDIALIVE_API RouteUpdateRequest() = default;
    AWS_MEDIALIVE_API RouteUpdateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API RouteUpdateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A CIDR block for one Route.
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    RouteUpdateRequest& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The IP address of the Gateway for this route, if applicable.
     */
    inline const Aws::String& GetGateway() const { return m_gateway; }
    inline bool GatewayHasBeenSet() const { return m_gatewayHasBeenSet; }
    template<typename GatewayT = Aws::String>
    void SetGateway(GatewayT&& value) { m_gatewayHasBeenSet = true; m_gateway = std::forward<GatewayT>(value); }
    template<typename GatewayT = Aws::String>
    RouteUpdateRequest& WithGateway(GatewayT&& value) { SetGateway(std::forward<GatewayT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_gateway;
    bool m_gatewayHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
