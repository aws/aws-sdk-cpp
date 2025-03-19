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
    AWS_ROUTE53_API TestDNSAnswerRequest() = default;

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
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    TestDNSAnswerRequest& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource record set that you want Amazon Route 53 to simulate
     * a query for.</p>
     */
    inline const Aws::String& GetRecordName() const { return m_recordName; }
    inline bool RecordNameHasBeenSet() const { return m_recordNameHasBeenSet; }
    template<typename RecordNameT = Aws::String>
    void SetRecordName(RecordNameT&& value) { m_recordNameHasBeenSet = true; m_recordName = std::forward<RecordNameT>(value); }
    template<typename RecordNameT = Aws::String>
    TestDNSAnswerRequest& WithRecordName(RecordNameT&& value) { SetRecordName(std::forward<RecordNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource record set.</p>
     */
    inline RRType GetRecordType() const { return m_recordType; }
    inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }
    inline void SetRecordType(RRType value) { m_recordTypeHasBeenSet = true; m_recordType = value; }
    inline TestDNSAnswerRequest& WithRecordType(RRType value) { SetRecordType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you want to simulate a request from a specific DNS resolver, specify the
     * IP address for that resolver. If you omit this value, <code>TestDnsAnswer</code>
     * uses the IP address of a DNS resolver in the Amazon Web Services US East (N.
     * Virginia) Region (<code>us-east-1</code>).</p>
     */
    inline const Aws::String& GetResolverIP() const { return m_resolverIP; }
    inline bool ResolverIPHasBeenSet() const { return m_resolverIPHasBeenSet; }
    template<typename ResolverIPT = Aws::String>
    void SetResolverIP(ResolverIPT&& value) { m_resolverIPHasBeenSet = true; m_resolverIP = std::forward<ResolverIPT>(value); }
    template<typename ResolverIPT = Aws::String>
    TestDNSAnswerRequest& WithResolverIP(ResolverIPT&& value) { SetResolverIP(std::forward<ResolverIPT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the resolver that you specified for resolverip supports EDNS0, specify the
     * IPv4 or IPv6 address of a client in the applicable location, for example,
     * <code>192.0.2.44</code> or <code>2001:db8:85a3::8a2e:370:7334</code>.</p>
     */
    inline const Aws::String& GetEDNS0ClientSubnetIP() const { return m_eDNS0ClientSubnetIP; }
    inline bool EDNS0ClientSubnetIPHasBeenSet() const { return m_eDNS0ClientSubnetIPHasBeenSet; }
    template<typename EDNS0ClientSubnetIPT = Aws::String>
    void SetEDNS0ClientSubnetIP(EDNS0ClientSubnetIPT&& value) { m_eDNS0ClientSubnetIPHasBeenSet = true; m_eDNS0ClientSubnetIP = std::forward<EDNS0ClientSubnetIPT>(value); }
    template<typename EDNS0ClientSubnetIPT = Aws::String>
    TestDNSAnswerRequest& WithEDNS0ClientSubnetIP(EDNS0ClientSubnetIPT&& value) { SetEDNS0ClientSubnetIP(std::forward<EDNS0ClientSubnetIPT>(value)); return *this;}
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
    inline const Aws::String& GetEDNS0ClientSubnetMask() const { return m_eDNS0ClientSubnetMask; }
    inline bool EDNS0ClientSubnetMaskHasBeenSet() const { return m_eDNS0ClientSubnetMaskHasBeenSet; }
    template<typename EDNS0ClientSubnetMaskT = Aws::String>
    void SetEDNS0ClientSubnetMask(EDNS0ClientSubnetMaskT&& value) { m_eDNS0ClientSubnetMaskHasBeenSet = true; m_eDNS0ClientSubnetMask = std::forward<EDNS0ClientSubnetMaskT>(value); }
    template<typename EDNS0ClientSubnetMaskT = Aws::String>
    TestDNSAnswerRequest& WithEDNS0ClientSubnetMask(EDNS0ClientSubnetMaskT&& value) { SetEDNS0ClientSubnetMask(std::forward<EDNS0ClientSubnetMaskT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_recordName;
    bool m_recordNameHasBeenSet = false;

    RRType m_recordType{RRType::NOT_SET};
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
