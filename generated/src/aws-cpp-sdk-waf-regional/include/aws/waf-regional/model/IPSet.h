/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/IPSetDescriptor.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>Contains one or more IP
   * addresses or blocks of IP addresses specified in Classless Inter-Domain Routing
   * (CIDR) notation. AWS WAF supports IPv4 address ranges: /8 and any range between
   * /16 through /32. AWS WAF supports IPv6 address ranges: /24, /32, /48, /56, /64,
   * and /128.</p> <p>To specify an individual IP address, you specify the four-part
   * IP address followed by a <code>/32</code>, for example, 192.0.2.0/32. To block a
   * range of IP addresses, you can specify /8 or any range between /16 through /32
   * (for IPv4) or /24, /32, /48, /56, /64, or /128 (for IPv6). For more information
   * about CIDR notation, see the Wikipedia entry <a
   * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
   * Inter-Domain Routing</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/IPSet">AWS
   * API Reference</a></p>
   */
  class IPSet
  {
  public:
    AWS_WAFREGIONAL_API IPSet() = default;
    AWS_WAFREGIONAL_API IPSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API IPSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>IPSetId</code> for an <code>IPSet</code>. You use
     * <code>IPSetId</code> to get information about an <code>IPSet</code> (see
     * <a>GetIPSet</a>), update an <code>IPSet</code> (see <a>UpdateIPSet</a>), insert
     * an <code>IPSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete an <code>IPSet</code> from
     * AWS WAF (see <a>DeleteIPSet</a>).</p> <p> <code>IPSetId</code> is returned by
     * <a>CreateIPSet</a> and by <a>ListIPSets</a>.</p>
     */
    inline const Aws::String& GetIPSetId() const { return m_iPSetId; }
    inline bool IPSetIdHasBeenSet() const { return m_iPSetIdHasBeenSet; }
    template<typename IPSetIdT = Aws::String>
    void SetIPSetId(IPSetIdT&& value) { m_iPSetIdHasBeenSet = true; m_iPSetId = std::forward<IPSetIdT>(value); }
    template<typename IPSetIdT = Aws::String>
    IPSet& WithIPSetId(IPSetIdT&& value) { SetIPSetId(std::forward<IPSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description of the <a>IPSet</a>. You can't change the name
     * of an <code>IPSet</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    IPSet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type (<code>IPV4</code> or <code>IPV6</code>) and the IP
     * address range (in CIDR notation) that web requests originate from. If the
     * <code>WebACL</code> is associated with a CloudFront distribution and the viewer
     * did not use an HTTP proxy or a load balancer to send the request, this is the
     * value of the c-ip field in the CloudFront access logs.</p>
     */
    inline const Aws::Vector<IPSetDescriptor>& GetIPSetDescriptors() const { return m_iPSetDescriptors; }
    inline bool IPSetDescriptorsHasBeenSet() const { return m_iPSetDescriptorsHasBeenSet; }
    template<typename IPSetDescriptorsT = Aws::Vector<IPSetDescriptor>>
    void SetIPSetDescriptors(IPSetDescriptorsT&& value) { m_iPSetDescriptorsHasBeenSet = true; m_iPSetDescriptors = std::forward<IPSetDescriptorsT>(value); }
    template<typename IPSetDescriptorsT = Aws::Vector<IPSetDescriptor>>
    IPSet& WithIPSetDescriptors(IPSetDescriptorsT&& value) { SetIPSetDescriptors(std::forward<IPSetDescriptorsT>(value)); return *this;}
    template<typename IPSetDescriptorsT = IPSetDescriptor>
    IPSet& AddIPSetDescriptors(IPSetDescriptorsT&& value) { m_iPSetDescriptorsHasBeenSet = true; m_iPSetDescriptors.emplace_back(std::forward<IPSetDescriptorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_iPSetId;
    bool m_iPSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<IPSetDescriptor> m_iPSetDescriptors;
    bool m_iPSetDescriptorsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
