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
    AWS_MEDIALIVE_API RouteUpdateRequest();
    AWS_MEDIALIVE_API RouteUpdateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API RouteUpdateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A CIDR block for one Route.
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }
    inline RouteUpdateRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}
    inline RouteUpdateRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}
    inline RouteUpdateRequest& WithCidr(const char* value) { SetCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * The IP address of the Gateway for this route, if applicable.
     */
    inline const Aws::String& GetGateway() const{ return m_gateway; }
    inline bool GatewayHasBeenSet() const { return m_gatewayHasBeenSet; }
    inline void SetGateway(const Aws::String& value) { m_gatewayHasBeenSet = true; m_gateway = value; }
    inline void SetGateway(Aws::String&& value) { m_gatewayHasBeenSet = true; m_gateway = std::move(value); }
    inline void SetGateway(const char* value) { m_gatewayHasBeenSet = true; m_gateway.assign(value); }
    inline RouteUpdateRequest& WithGateway(const Aws::String& value) { SetGateway(value); return *this;}
    inline RouteUpdateRequest& WithGateway(Aws::String&& value) { SetGateway(std::move(value)); return *this;}
    inline RouteUpdateRequest& WithGateway(const char* value) { SetGateway(value); return *this;}
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
