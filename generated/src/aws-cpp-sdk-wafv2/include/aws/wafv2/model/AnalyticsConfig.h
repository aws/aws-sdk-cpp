/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/AnalyticsMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>Specifies the security analytics configuration for the web ACL. Security
 * analytics shows the web ACL's request log data from multiple Amazon Web Services
 * Regions in a single dashboard in the WAF console. </p> <p>When you enable
 * security analytics, you authorize Amazon Web Services to transfer and store full
 * request logs outside the Amazon Web Services Region where the web ACL is hosted.
 * For regional web ACLs, security analytics is disabled by default when you omit
 * this configuration. For web ACLs that protect CloudFront distributions (global
 * web ACLs), security analytics is enabled by default. For more information, see
 * <a
 * href="https://docs.aws.amazon.com/waf/latest/developerguide/web-acl-security-analytics-enabling.html">Enabling
 * security analytics for a protection pack (web ACL)</a> in the <i>WAF Developer
 * Guide</i>. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AnalyticsConfig">AWS
 * API Reference</a></p>
 */
class AnalyticsConfig {
 public:
  AWS_WAFV2_API AnalyticsConfig() = default;
  AWS_WAFV2_API AnalyticsConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API AnalyticsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The security analytics mode for the web ACL. Valid values:</p> <ul> <li> <p>
   * <code>CROSS_REGION</code> - Enables security analytics. WAF transfers and stores
   * the web ACL's request logs outside the Amazon Web Services Region where the web
   * ACL is hosted, for aggregation and processing. </p> </li> <li> <p>
   * <code>DISABLED</code> - Disables security analytics. WAF stops transferring the
   * web ACL's request logs. </p> </li> </ul>
   */
  inline AnalyticsMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(AnalyticsMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline AnalyticsConfig& WithMode(AnalyticsMode value) {
    SetMode(value);
    return *this;
  }
  ///@}
 private:
  AnalyticsMode m_mode{AnalyticsMode::NOT_SET};
  bool m_modeHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
