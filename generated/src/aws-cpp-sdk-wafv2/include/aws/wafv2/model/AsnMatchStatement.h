/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/ForwardedIPConfig.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>A rule statement that inspects web traffic based on the Autonomous System
   * Number (ASN) associated with the request's IP address.</p> <p>For additional
   * details, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-statement-type-asn-match.html">ASN
   * match rule statement</a> in the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">WAF
   * Developer Guide</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AsnMatchStatement">AWS
   * API Reference</a></p>
   */
  class AsnMatchStatement
  {
  public:
    AWS_WAFV2_API AsnMatchStatement() = default;
    AWS_WAFV2_API AsnMatchStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API AsnMatchStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains one or more Autonomous System Numbers (ASNs). ASNs are unique
     * identifiers assigned to large internet networks managed by organizations such as
     * internet service providers, enterprises, universities, or government agencies.
     * </p>
     */
    inline const Aws::Vector<long long>& GetAsnList() const { return m_asnList; }
    inline bool AsnListHasBeenSet() const { return m_asnListHasBeenSet; }
    template<typename AsnListT = Aws::Vector<long long>>
    void SetAsnList(AsnListT&& value) { m_asnListHasBeenSet = true; m_asnList = std::forward<AsnListT>(value); }
    template<typename AsnListT = Aws::Vector<long long>>
    AsnMatchStatement& WithAsnList(AsnListT&& value) { SetAsnList(std::forward<AsnListT>(value)); return *this;}
    inline AsnMatchStatement& AddAsnList(long long value) { m_asnListHasBeenSet = true; m_asnList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for inspecting IP addresses to match against an ASN in an
     * HTTP header that you specify, instead of using the IP address that's reported by
     * the web request origin. Commonly, this is the X-Forwarded-For (XFF) header, but
     * you can specify any header name. </p>
     */
    inline const ForwardedIPConfig& GetForwardedIPConfig() const { return m_forwardedIPConfig; }
    inline bool ForwardedIPConfigHasBeenSet() const { return m_forwardedIPConfigHasBeenSet; }
    template<typename ForwardedIPConfigT = ForwardedIPConfig>
    void SetForwardedIPConfig(ForwardedIPConfigT&& value) { m_forwardedIPConfigHasBeenSet = true; m_forwardedIPConfig = std::forward<ForwardedIPConfigT>(value); }
    template<typename ForwardedIPConfigT = ForwardedIPConfig>
    AsnMatchStatement& WithForwardedIPConfig(ForwardedIPConfigT&& value) { SetForwardedIPConfig(std::forward<ForwardedIPConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<long long> m_asnList;
    bool m_asnListHasBeenSet = false;

    ForwardedIPConfig m_forwardedIPConfig;
    bool m_forwardedIPConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
