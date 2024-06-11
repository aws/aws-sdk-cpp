/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53
{
namespace Model
{

  /**
   * <p>Gets the value that Amazon Route 53 returns in response to a DNS request for
   * a specified record name and type. You can optionally specify the IP address of a
   * DNS resolver, an EDNS0 client subnet IP address, and a subnet mask.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/TestDNSAnswerRequest">AWS
   * API Reference</a></p>
   */
  class TestDNSAnswerRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API TestDNSAnswerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestDNSAnswer"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;

    AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the hosted zone that you want Amazon Route 53 to simulate a query
     * for.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }
    inline TestDNSAnswerRequest& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}
    inline TestDNSAnswerRequest& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}
    inline TestDNSAnswerRequest& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource record set that you want Amazon Route 53 to simulate
     * a query for.</p>
     */
    inline const Aws::String& GetRecordName() const{ return m_recordName; }
    inline bool RecordNameHasBeenSet() const { return m_recordNameHasBeenSet; }
    inline void SetRecordName(const Aws::String& value) { m_recordNameHasBeenSet = true; m_recordName = value; }
    inline void SetRecordName(Aws::String&& value) { m_recordNameHasBeenSet = true; m_recordName = std::move(value); }
    inline void SetRecordName(const char* value) { m_recordNameHasBeenSet = true; m_recordName.assign(value); }
    inline TestDNSAnswerRequest& WithRecordName(const Aws::String& value) { SetRecordName(value); return *this;}
    inline TestDNSAnswerRequest& WithRecordName(Aws::String&& value) { SetRecordName(std::move(value)); return *this;}
    inline TestDNSAnswerRequest& WithRecordName(const char* value) { SetRecordName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource record set.</p>
     */
    inline const RRType& GetRecordType() const{ return m_recordType; }
    inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }
    inline void SetRecordType(const RRType& value) { m_recordTypeHasBeenSet = true; m_recordType = value; }
    inline void SetRecordType(RRType&& value) { m_recordTypeHasBeenSet = true; m_recordType = std::move(value); }
    inline TestDNSAnswerRequest& WithRecordType(const RRType& value) { SetRecordType(value); return *this;}
    inline TestDNSAnswerRequest& WithRecordType(RRType&& value) { SetRecordType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you want to simulate a request from a specific DNS resolver, specify the
     * IP address for that resolver. If you omit this value, <code>TestDnsAnswer</code>
     * uses the IP address of a DNS resolver in the Amazon Web Services US East (N.
     * Virginia) Region (<code>us-east-1</code>).</p>
     */
    inline const Aws::String& GetResolverIP() const{ return m_resolverIP; }
    inline bool ResolverIPHasBeenSet() const { return m_resolverIPHasBeenSet; }
    inline void SetResolverIP(const Aws::String& value) { m_resolverIPHasBeenSet = true; m_resolverIP = value; }
    inline void SetResolverIP(Aws::String&& value) { m_resolverIPHasBeenSet = true; m_resolverIP = std::move(value); }
    inline void SetResolverIP(const char* value) { m_resolverIPHasBeenSet = true; m_resolverIP.assign(value); }
    inline TestDNSAnswerRequest& WithResolverIP(const Aws::String& value) { SetResolverIP(value); return *this;}
    inline TestDNSAnswerRequest& WithResolverIP(Aws::String&& value) { SetResolverIP(std::move(value)); return *this;}
    inline TestDNSAnswerRequest& WithResolverIP(const char* value) { SetResolverIP(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the resolver that you specified for resolverip supports EDNS0, specify the
     * IPv4 or IPv6 address of a client in the applicable location, for example,
     * <code>192.0.2.44</code> or <code>2001:db8:85a3::8a2e:370:7334</code>.</p>
     */
    inline const Aws::String& GetEDNS0ClientSubnetIP() const{ return m_eDNS0ClientSubnetIP; }
    inline bool EDNS0ClientSubnetIPHasBeenSet() const { return m_eDNS0ClientSubnetIPHasBeenSet; }
    inline void SetEDNS0ClientSubnetIP(const Aws::String& value) { m_eDNS0ClientSubnetIPHasBeenSet = true; m_eDNS0ClientSubnetIP = value; }
    inline void SetEDNS0ClientSubnetIP(Aws::String&& value) { m_eDNS0ClientSubnetIPHasBeenSet = true; m_eDNS0ClientSubnetIP = std::move(value); }
    inline void SetEDNS0ClientSubnetIP(const char* value) { m_eDNS0ClientSubnetIPHasBeenSet = true; m_eDNS0ClientSubnetIP.assign(value); }
    inline TestDNSAnswerRequest& WithEDNS0ClientSubnetIP(const Aws::String& value) { SetEDNS0ClientSubnetIP(value); return *this;}
    inline TestDNSAnswerRequest& WithEDNS0ClientSubnetIP(Aws::String&& value) { SetEDNS0ClientSubnetIP(std::move(value)); return *this;}
    inline TestDNSAnswerRequest& WithEDNS0ClientSubnetIP(const char* value) { SetEDNS0ClientSubnetIP(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specify an IP address for <code>edns0clientsubnetip</code>, you can
     * optionally specify the number of bits of the IP address that you want the
     * checking tool to include in the DNS query. For example, if you specify
     * <code>192.0.2.44</code> for <code>edns0clientsubnetip</code> and <code>24</code>
     * for <code>edns0clientsubnetmask</code>, the checking tool will simulate a
     * request from 192.0.2.0/24. The default value is 24 bits for IPv4 addresses and
     * 64 bits for IPv6 addresses.</p> <p>The range of valid values depends on whether
     * <code>edns0clientsubnetip</code> is an IPv4 or an IPv6 address:</p> <ul> <li>
     * <p> <b>IPv4</b>: Specify a value between 0 and 32</p> </li> <li> <p>
     * <b>IPv6</b>: Specify a value between 0 and 128</p> </li> </ul>
     */
    inline const Aws::String& GetEDNS0ClientSubnetMask() const{ return m_eDNS0ClientSubnetMask; }
    inline bool EDNS0ClientSubnetMaskHasBeenSet() const { return m_eDNS0ClientSubnetMaskHasBeenSet; }
    inline void SetEDNS0ClientSubnetMask(const Aws::String& value) { m_eDNS0ClientSubnetMaskHasBeenSet = true; m_eDNS0ClientSubnetMask = value; }
    inline void SetEDNS0ClientSubnetMask(Aws::String&& value) { m_eDNS0ClientSubnetMaskHasBeenSet = true; m_eDNS0ClientSubnetMask = std::move(value); }
    inline void SetEDNS0ClientSubnetMask(const char* value) { m_eDNS0ClientSubnetMaskHasBeenSet = true; m_eDNS0ClientSubnetMask.assign(value); }
    inline TestDNSAnswerRequest& WithEDNS0ClientSubnetMask(const Aws::String& value) { SetEDNS0ClientSubnetMask(value); return *this;}
    inline TestDNSAnswerRequest& WithEDNS0ClientSubnetMask(Aws::String&& value) { SetEDNS0ClientSubnetMask(std::move(value)); return *this;}
    inline TestDNSAnswerRequest& WithEDNS0ClientSubnetMask(const char* value) { SetEDNS0ClientSubnetMask(value); return *this;}
    ///@}
  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_recordName;
    bool m_recordNameHasBeenSet = false;

    RRType m_recordType;
    bool m_recordTypeHasBeenSet = false;

    Aws::String m_resolverIP;
    bool m_resolverIPHasBeenSet = false;

    Aws::String m_eDNS0ClientSubnetIP;
    bool m_eDNS0ClientSubnetIPHasBeenSet = false;

    Aws::String m_eDNS0ClientSubnetMask;
    bool m_eDNS0ClientSubnetMaskHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
