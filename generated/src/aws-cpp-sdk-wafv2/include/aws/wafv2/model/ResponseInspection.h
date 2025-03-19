/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ResponseInspectionStatusCode.h>
#include <aws/wafv2/model/ResponseInspectionHeader.h>
#include <aws/wafv2/model/ResponseInspectionBodyContains.h>
#include <aws/wafv2/model/ResponseInspectionJson.h>
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
   * <p>The criteria for inspecting responses to login requests and account creation
   * requests, used by the ATP and ACFP rule groups to track login and account
   * creation success and failure rates. </p>  <p>Response inspection is
   * available only in web ACLs that protect Amazon CloudFront distributions.</p>
   *  <p>The rule groups evaluates the responses that your protected resources
   * send back to client login and account creation attempts, keeping count of
   * successful and failed attempts from each IP address and client session. Using
   * this information, the rule group labels and mitigates requests from client
   * sessions and IP addresses with too much suspicious activity in a short amount of
   * time. </p> <p>This is part of the <code>AWSManagedRulesATPRuleSet</code> and
   * <code>AWSManagedRulesACFPRuleSet</code> configurations in
   * <code>ManagedRuleGroupConfig</code>.</p> <p>Enable response inspection by
   * configuring exactly one component of the response to inspect, for example,
   * <code>Header</code> or <code>StatusCode</code>. You can't configure more than
   * one component for inspection. If you don't configure any of the response
   * inspection options, response inspection is disabled. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ResponseInspection">AWS
   * API Reference</a></p>
   */
  class ResponseInspection
  {
  public:
    AWS_WAFV2_API ResponseInspection() = default;
    AWS_WAFV2_API ResponseInspection(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ResponseInspection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configures inspection of the response status code for success and failure
     * indicators. </p>
     */
    inline const ResponseInspectionStatusCode& GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    template<typename StatusCodeT = ResponseInspectionStatusCode>
    void SetStatusCode(StatusCodeT&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::forward<StatusCodeT>(value); }
    template<typename StatusCodeT = ResponseInspectionStatusCode>
    ResponseInspection& WithStatusCode(StatusCodeT&& value) { SetStatusCode(std::forward<StatusCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures inspection of the response header for success and failure
     * indicators. </p>
     */
    inline const ResponseInspectionHeader& GetHeader() const { return m_header; }
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
    template<typename HeaderT = ResponseInspectionHeader>
    void SetHeader(HeaderT&& value) { m_headerHasBeenSet = true; m_header = std::forward<HeaderT>(value); }
    template<typename HeaderT = ResponseInspectionHeader>
    ResponseInspection& WithHeader(HeaderT&& value) { SetHeader(std::forward<HeaderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures inspection of the response body for success and failure
     * indicators. WAF can inspect the first 65,536 bytes (64 KB) of the response body.
     * </p>
     */
    inline const ResponseInspectionBodyContains& GetBodyContains() const { return m_bodyContains; }
    inline bool BodyContainsHasBeenSet() const { return m_bodyContainsHasBeenSet; }
    template<typename BodyContainsT = ResponseInspectionBodyContains>
    void SetBodyContains(BodyContainsT&& value) { m_bodyContainsHasBeenSet = true; m_bodyContains = std::forward<BodyContainsT>(value); }
    template<typename BodyContainsT = ResponseInspectionBodyContains>
    ResponseInspection& WithBodyContains(BodyContainsT&& value) { SetBodyContains(std::forward<BodyContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures inspection of the response JSON for success and failure
     * indicators. WAF can inspect the first 65,536 bytes (64 KB) of the response JSON.
     * </p>
     */
    inline const ResponseInspectionJson& GetJson() const { return m_json; }
    inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
    template<typename JsonT = ResponseInspectionJson>
    void SetJson(JsonT&& value) { m_jsonHasBeenSet = true; m_json = std::forward<JsonT>(value); }
    template<typename JsonT = ResponseInspectionJson>
    ResponseInspection& WithJson(JsonT&& value) { SetJson(std::forward<JsonT>(value)); return *this;}
    ///@}
  private:

    ResponseInspectionStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    ResponseInspectionHeader m_header;
    bool m_headerHasBeenSet = false;

    ResponseInspectionBodyContains m_bodyContains;
    bool m_bodyContainsHasBeenSet = false;

    ResponseInspectionJson m_json;
    bool m_jsonHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
