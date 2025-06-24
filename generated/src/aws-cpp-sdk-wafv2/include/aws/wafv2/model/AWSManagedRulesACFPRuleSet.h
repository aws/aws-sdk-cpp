/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/RequestInspectionACFP.h>
#include <aws/wafv2/model/ResponseInspection.h>
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
   * <p>Details for your use of the account creation fraud prevention managed rule
   * group, <code>AWSManagedRulesACFPRuleSet</code>. This configuration is used in
   * <code>ManagedRuleGroupConfig</code>. </p> <p>For additional information about
   * this and the other intelligent threat mitigation rule groups, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-managed-protections">Intelligent
   * threat mitigation in WAF</a> and <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-list">Amazon
   * Web Services Managed Rules rule groups list</a> in the <i>WAF Developer
   * Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AWSManagedRulesACFPRuleSet">AWS
   * API Reference</a></p>
   */
  class AWSManagedRulesACFPRuleSet
  {
  public:
    AWS_WAFV2_API AWSManagedRulesACFPRuleSet() = default;
    AWS_WAFV2_API AWSManagedRulesACFPRuleSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API AWSManagedRulesACFPRuleSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path of the account creation endpoint for your application. This is the
     * page on your website that accepts the completed registration form for a new
     * user. This page must accept <code>POST</code> requests.</p> <p>For example, for
     * the URL <code>https://example.com/web/newaccount</code>, you would provide the
     * path <code>/web/newaccount</code>. Account creation page paths that start with
     * the path that you provide are considered a match. For example
     * <code>/web/newaccount</code> matches the account creation paths
     * <code>/web/newaccount</code>, <code>/web/newaccount/</code>,
     * <code>/web/newaccountPage</code>, and <code>/web/newaccount/thisPage</code>, but
     * doesn't match the path <code>/home/web/newaccount</code> or
     * <code>/website/newaccount</code>. </p>
     */
    inline const Aws::String& GetCreationPath() const { return m_creationPath; }
    inline bool CreationPathHasBeenSet() const { return m_creationPathHasBeenSet; }
    template<typename CreationPathT = Aws::String>
    void SetCreationPath(CreationPathT&& value) { m_creationPathHasBeenSet = true; m_creationPath = std::forward<CreationPathT>(value); }
    template<typename CreationPathT = Aws::String>
    AWSManagedRulesACFPRuleSet& WithCreationPath(CreationPathT&& value) { SetCreationPath(std::forward<CreationPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the account registration endpoint for your application. This is
     * the page on your website that presents the registration form to new users. </p>
     *  <p>This page must accept <code>GET</code> text/html requests.</p> 
     * <p>For example, for the URL <code>https://example.com/web/registration</code>,
     * you would provide the path <code>/web/registration</code>. Registration page
     * paths that start with the path that you provide are considered a match. For
     * example <code>/web/registration</code> matches the registration paths
     * <code>/web/registration</code>, <code>/web/registration/</code>,
     * <code>/web/registrationPage</code>, and <code>/web/registration/thisPage</code>,
     * but doesn't match the path <code>/home/web/registration</code> or
     * <code>/website/registration</code>. </p>
     */
    inline const Aws::String& GetRegistrationPagePath() const { return m_registrationPagePath; }
    inline bool RegistrationPagePathHasBeenSet() const { return m_registrationPagePathHasBeenSet; }
    template<typename RegistrationPagePathT = Aws::String>
    void SetRegistrationPagePath(RegistrationPagePathT&& value) { m_registrationPagePathHasBeenSet = true; m_registrationPagePath = std::forward<RegistrationPagePathT>(value); }
    template<typename RegistrationPagePathT = Aws::String>
    AWSManagedRulesACFPRuleSet& WithRegistrationPagePath(RegistrationPagePathT&& value) { SetRegistrationPagePath(std::forward<RegistrationPagePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria for inspecting account creation requests, used by the ACFP rule
     * group to validate and track account creation attempts. </p>
     */
    inline const RequestInspectionACFP& GetRequestInspection() const { return m_requestInspection; }
    inline bool RequestInspectionHasBeenSet() const { return m_requestInspectionHasBeenSet; }
    template<typename RequestInspectionT = RequestInspectionACFP>
    void SetRequestInspection(RequestInspectionT&& value) { m_requestInspectionHasBeenSet = true; m_requestInspection = std::forward<RequestInspectionT>(value); }
    template<typename RequestInspectionT = RequestInspectionACFP>
    AWSManagedRulesACFPRuleSet& WithRequestInspection(RequestInspectionT&& value) { SetRequestInspection(std::forward<RequestInspectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria for inspecting responses to account creation requests, used by
     * the ACFP rule group to track account creation success rates. </p> 
     * <p>Response inspection is available only in web ACLs that protect Amazon
     * CloudFront distributions.</p>  <p>The ACFP rule group evaluates the
     * responses that your protected resources send back to client account creation
     * attempts, keeping count of successful and failed attempts from each IP address
     * and client session. Using this information, the rule group labels and mitigates
     * requests from client sessions and IP addresses that have had too many successful
     * account creation attempts in a short amount of time. </p>
     */
    inline const ResponseInspection& GetResponseInspection() const { return m_responseInspection; }
    inline bool ResponseInspectionHasBeenSet() const { return m_responseInspectionHasBeenSet; }
    template<typename ResponseInspectionT = ResponseInspection>
    void SetResponseInspection(ResponseInspectionT&& value) { m_responseInspectionHasBeenSet = true; m_responseInspection = std::forward<ResponseInspectionT>(value); }
    template<typename ResponseInspectionT = ResponseInspection>
    AWSManagedRulesACFPRuleSet& WithResponseInspection(ResponseInspectionT&& value) { SetResponseInspection(std::forward<ResponseInspectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allow the use of regular expressions in the registration page path and the
     * account creation path. </p>
     */
    inline bool GetEnableRegexInPath() const { return m_enableRegexInPath; }
    inline bool EnableRegexInPathHasBeenSet() const { return m_enableRegexInPathHasBeenSet; }
    inline void SetEnableRegexInPath(bool value) { m_enableRegexInPathHasBeenSet = true; m_enableRegexInPath = value; }
    inline AWSManagedRulesACFPRuleSet& WithEnableRegexInPath(bool value) { SetEnableRegexInPath(value); return *this;}
    ///@}
  private:

    Aws::String m_creationPath;
    bool m_creationPathHasBeenSet = false;

    Aws::String m_registrationPagePath;
    bool m_registrationPagePathHasBeenSet = false;

    RequestInspectionACFP m_requestInspection;
    bool m_requestInspectionHasBeenSet = false;

    ResponseInspection m_responseInspection;
    bool m_responseInspectionHasBeenSet = false;

    bool m_enableRegexInPath{false};
    bool m_enableRegexInPathHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
