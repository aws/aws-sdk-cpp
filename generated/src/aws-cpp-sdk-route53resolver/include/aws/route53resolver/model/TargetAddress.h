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
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverRule.html">CreateResolverRule</a>
   * request, an array of the IPs that you want to forward DNS queries
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/TargetAddress">AWS
   * API Reference</a></p>
   */
  class TargetAddress
  {
  public:
    AWS_ROUTE53RESOLVER_API TargetAddress();
    AWS_ROUTE53RESOLVER_API TargetAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API TargetAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }

    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }

    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }

    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }

    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }

    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline TargetAddress& WithIp(const Aws::String& value) { SetIp(value); return *this;}

    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline TargetAddress& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}

    /**
     * <p>One IP address that you want to forward DNS queries to. You can specify only
     * IPv4 addresses.</p>
     */
    inline TargetAddress& WithIp(const char* value) { SetIp(value); return *this;}


    /**
     * <p>The port at <code>Ip</code> that you want to forward DNS queries to.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port at <code>Ip</code> that you want to forward DNS queries to.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port at <code>Ip</code> that you want to forward DNS queries to.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port at <code>Ip</code> that you want to forward DNS queries to.</p>
     */
    inline TargetAddress& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
