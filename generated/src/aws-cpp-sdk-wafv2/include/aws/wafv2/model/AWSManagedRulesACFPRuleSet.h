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
   * <code>ManagedRuleGroupConfig</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AWSManagedRulesACFPRuleSet">AWS
   * API Reference</a></p>
   */
  class AWSManagedRulesACFPRuleSet
  {
  public:
    AWS_WAFV2_API AWSManagedRulesACFPRuleSet();
    AWS_WAFV2_API AWSManagedRulesACFPRuleSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API AWSManagedRulesACFPRuleSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const Aws::String& GetCreationPath() const{ return m_creationPath; }

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
    inline bool CreationPathHasBeenSet() const { return m_creationPathHasBeenSet; }

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
    inline void SetCreationPath(const Aws::String& value) { m_creationPathHasBeenSet = true; m_creationPath = value; }

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
    inline void SetCreationPath(Aws::String&& value) { m_creationPathHasBeenSet = true; m_creationPath = std::move(value); }

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
    inline void SetCreationPath(const char* value) { m_creationPathHasBeenSet = true; m_creationPath.assign(value); }

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
    inline AWSManagedRulesACFPRuleSet& WithCreationPath(const Aws::String& value) { SetCreationPath(value); return *this;}

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
    inline AWSManagedRulesACFPRuleSet& WithCreationPath(Aws::String&& value) { SetCreationPath(std::move(value)); return *this;}

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
    inline AWSManagedRulesACFPRuleSet& WithCreationPath(const char* value) { SetCreationPath(value); return *this;}


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
    inline const Aws::String& GetRegistrationPagePath() const{ return m_registrationPagePath; }

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
    inline bool RegistrationPagePathHasBeenSet() const { return m_registrationPagePathHasBeenSet; }

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
    inline void SetRegistrationPagePath(const Aws::String& value) { m_registrationPagePathHasBeenSet = true; m_registrationPagePath = value; }

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
    inline void SetRegistrationPagePath(Aws::String&& value) { m_registrationPagePathHasBeenSet = true; m_registrationPagePath = std::move(value); }

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
    inline void SetRegistrationPagePath(const char* value) { m_registrationPagePathHasBeenSet = true; m_registrationPagePath.assign(value); }

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
    inline AWSManagedRulesACFPRuleSet& WithRegistrationPagePath(const Aws::String& value) { SetRegistrationPagePath(value); return *this;}

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
    inline AWSManagedRulesACFPRuleSet& WithRegistrationPagePath(Aws::String&& value) { SetRegistrationPagePath(std::move(value)); return *this;}

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
    inline AWSManagedRulesACFPRuleSet& WithRegistrationPagePath(const char* value) { SetRegistrationPagePath(value); return *this;}


    /**
     * <p>The criteria for inspecting account creation requests, used by the ACFP rule
     * group to validate and track account creation attempts. </p>
     */
    inline const RequestInspectionACFP& GetRequestInspection() const{ return m_requestInspection; }

    /**
     * <p>The criteria for inspecting account creation requests, used by the ACFP rule
     * group to validate and track account creation attempts. </p>
     */
    inline bool RequestInspectionHasBeenSet() const { return m_requestInspectionHasBeenSet; }

    /**
     * <p>The criteria for inspecting account creation requests, used by the ACFP rule
     * group to validate and track account creation attempts. </p>
     */
    inline void SetRequestInspection(const RequestInspectionACFP& value) { m_requestInspectionHasBeenSet = true; m_requestInspection = value; }

    /**
     * <p>The criteria for inspecting account creation requests, used by the ACFP rule
     * group to validate and track account creation attempts. </p>
     */
    inline void SetRequestInspection(RequestInspectionACFP&& value) { m_requestInspectionHasBeenSet = true; m_requestInspection = std::move(value); }

    /**
     * <p>The criteria for inspecting account creation requests, used by the ACFP rule
     * group to validate and track account creation attempts. </p>
     */
    inline AWSManagedRulesACFPRuleSet& WithRequestInspection(const RequestInspectionACFP& value) { SetRequestInspection(value); return *this;}

    /**
     * <p>The criteria for inspecting account creation requests, used by the ACFP rule
     * group to validate and track account creation attempts. </p>
     */
    inline AWSManagedRulesACFPRuleSet& WithRequestInspection(RequestInspectionACFP&& value) { SetRequestInspection(std::move(value)); return *this;}


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
    inline const ResponseInspection& GetResponseInspection() const{ return m_responseInspection; }

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
    inline bool ResponseInspectionHasBeenSet() const { return m_responseInspectionHasBeenSet; }

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
    inline void SetResponseInspection(const ResponseInspection& value) { m_responseInspectionHasBeenSet = true; m_responseInspection = value; }

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
    inline void SetResponseInspection(ResponseInspection&& value) { m_responseInspectionHasBeenSet = true; m_responseInspection = std::move(value); }

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
    inline AWSManagedRulesACFPRuleSet& WithResponseInspection(const ResponseInspection& value) { SetResponseInspection(value); return *this;}

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
    inline AWSManagedRulesACFPRuleSet& WithResponseInspection(ResponseInspection&& value) { SetResponseInspection(std::move(value)); return *this;}


    /**
     * <p>Allow the use of regular expressions in the registration page path and the
     * account creation path. </p>
     */
    inline bool GetEnableRegexInPath() const{ return m_enableRegexInPath; }

    /**
     * <p>Allow the use of regular expressions in the registration page path and the
     * account creation path. </p>
     */
    inline bool EnableRegexInPathHasBeenSet() const { return m_enableRegexInPathHasBeenSet; }

    /**
     * <p>Allow the use of regular expressions in the registration page path and the
     * account creation path. </p>
     */
    inline void SetEnableRegexInPath(bool value) { m_enableRegexInPathHasBeenSet = true; m_enableRegexInPath = value; }

    /**
     * <p>Allow the use of regular expressions in the registration page path and the
     * account creation path. </p>
     */
    inline AWSManagedRulesACFPRuleSet& WithEnableRegexInPath(bool value) { SetEnableRegexInPath(value); return *this;}

  private:

    Aws::String m_creationPath;
    bool m_creationPathHasBeenSet = false;

    Aws::String m_registrationPagePath;
    bool m_registrationPagePathHasBeenSet = false;

    RequestInspectionACFP m_requestInspection;
    bool m_requestInspectionHasBeenSet = false;

    ResponseInspection m_responseInspection;
    bool m_responseInspectionHasBeenSet = false;

    bool m_enableRegexInPath;
    bool m_enableRegexInPathHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
