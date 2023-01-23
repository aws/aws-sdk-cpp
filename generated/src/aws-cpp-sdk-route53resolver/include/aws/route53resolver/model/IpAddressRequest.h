/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>In a <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
   * request, the IP address that DNS queries originate from (for outbound endpoints)
   * or that you forward DNS queries to (for inbound endpoints).
   * <code>IpAddressRequest</code> also includes the ID of the subnet that contains
   * the IP address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/IpAddressRequest">AWS
   * API Reference</a></p>
   */
  class IpAddressRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API IpAddressRequest();
    AWS_ROUTE53RESOLVER_API IpAddressRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API IpAddressRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the subnet that contains the IP address. </p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet that contains the IP address. </p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet that contains the IP address. </p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet that contains the IP address. </p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet that contains the IP address. </p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet that contains the IP address. </p>
     */
    inline IpAddressRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet that contains the IP address. </p>
     */
    inline IpAddressRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet that contains the IP address. </p>
     */
    inline IpAddressRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }

    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }

    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }

    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }

    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }

    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline IpAddressRequest& WithIp(const Aws::String& value) { SetIp(value); return *this;}

    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline IpAddressRequest& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}

    /**
     * <p>The IP address that you want to use for DNS queries.</p>
     */
    inline IpAddressRequest& WithIp(const char* value) { SetIp(value); return *this;}

  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
