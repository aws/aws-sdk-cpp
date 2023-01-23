/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/BehaviorOnMxFailure.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to configure the custom MAIL FROM domain for a verified
   * identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityMailFromAttributesRequest">AWS
   * API Reference</a></p>
   */
  class PutEmailIdentityMailFromAttributesRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutEmailIdentityMailFromAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEmailIdentityMailFromAttributes"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The verified email identity.</p>
     */
    inline const Aws::String& GetEmailIdentity() const{ return m_emailIdentity; }

    /**
     * <p>The verified email identity.</p>
     */
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }

    /**
     * <p>The verified email identity.</p>
     */
    inline void SetEmailIdentity(const Aws::String& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = value; }

    /**
     * <p>The verified email identity.</p>
     */
    inline void SetEmailIdentity(Aws::String&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::move(value); }

    /**
     * <p>The verified email identity.</p>
     */
    inline void SetEmailIdentity(const char* value) { m_emailIdentityHasBeenSet = true; m_emailIdentity.assign(value); }

    /**
     * <p>The verified email identity.</p>
     */
    inline PutEmailIdentityMailFromAttributesRequest& WithEmailIdentity(const Aws::String& value) { SetEmailIdentity(value); return *this;}

    /**
     * <p>The verified email identity.</p>
     */
    inline PutEmailIdentityMailFromAttributesRequest& WithEmailIdentity(Aws::String&& value) { SetEmailIdentity(std::move(value)); return *this;}

    /**
     * <p>The verified email identity.</p>
     */
    inline PutEmailIdentityMailFromAttributesRequest& WithEmailIdentity(const char* value) { SetEmailIdentity(value); return *this;}


    /**
     * <p> The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must meet the following criteria:</p> <ul> <li> <p>It has to be
     * a subdomain of the verified identity.</p> </li> <li> <p>It can't be used to
     * receive email.</p> </li> <li> <p>It can't be used in a "From" address if the
     * MAIL FROM domain is a destination for feedback forwarding emails.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetMailFromDomain() const{ return m_mailFromDomain; }

    /**
     * <p> The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must meet the following criteria:</p> <ul> <li> <p>It has to be
     * a subdomain of the verified identity.</p> </li> <li> <p>It can't be used to
     * receive email.</p> </li> <li> <p>It can't be used in a "From" address if the
     * MAIL FROM domain is a destination for feedback forwarding emails.</p> </li>
     * </ul>
     */
    inline bool MailFromDomainHasBeenSet() const { return m_mailFromDomainHasBeenSet; }

    /**
     * <p> The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must meet the following criteria:</p> <ul> <li> <p>It has to be
     * a subdomain of the verified identity.</p> </li> <li> <p>It can't be used to
     * receive email.</p> </li> <li> <p>It can't be used in a "From" address if the
     * MAIL FROM domain is a destination for feedback forwarding emails.</p> </li>
     * </ul>
     */
    inline void SetMailFromDomain(const Aws::String& value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain = value; }

    /**
     * <p> The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must meet the following criteria:</p> <ul> <li> <p>It has to be
     * a subdomain of the verified identity.</p> </li> <li> <p>It can't be used to
     * receive email.</p> </li> <li> <p>It can't be used in a "From" address if the
     * MAIL FROM domain is a destination for feedback forwarding emails.</p> </li>
     * </ul>
     */
    inline void SetMailFromDomain(Aws::String&& value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain = std::move(value); }

    /**
     * <p> The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must meet the following criteria:</p> <ul> <li> <p>It has to be
     * a subdomain of the verified identity.</p> </li> <li> <p>It can't be used to
     * receive email.</p> </li> <li> <p>It can't be used in a "From" address if the
     * MAIL FROM domain is a destination for feedback forwarding emails.</p> </li>
     * </ul>
     */
    inline void SetMailFromDomain(const char* value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain.assign(value); }

    /**
     * <p> The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must meet the following criteria:</p> <ul> <li> <p>It has to be
     * a subdomain of the verified identity.</p> </li> <li> <p>It can't be used to
     * receive email.</p> </li> <li> <p>It can't be used in a "From" address if the
     * MAIL FROM domain is a destination for feedback forwarding emails.</p> </li>
     * </ul>
     */
    inline PutEmailIdentityMailFromAttributesRequest& WithMailFromDomain(const Aws::String& value) { SetMailFromDomain(value); return *this;}

    /**
     * <p> The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must meet the following criteria:</p> <ul> <li> <p>It has to be
     * a subdomain of the verified identity.</p> </li> <li> <p>It can't be used to
     * receive email.</p> </li> <li> <p>It can't be used in a "From" address if the
     * MAIL FROM domain is a destination for feedback forwarding emails.</p> </li>
     * </ul>
     */
    inline PutEmailIdentityMailFromAttributesRequest& WithMailFromDomain(Aws::String&& value) { SetMailFromDomain(std::move(value)); return *this;}

    /**
     * <p> The custom MAIL FROM domain that you want the verified identity to use. The
     * MAIL FROM domain must meet the following criteria:</p> <ul> <li> <p>It has to be
     * a subdomain of the verified identity.</p> </li> <li> <p>It can't be used to
     * receive email.</p> </li> <li> <p>It can't be used in a "From" address if the
     * MAIL FROM domain is a destination for feedback forwarding emails.</p> </li>
     * </ul>
     */
    inline PutEmailIdentityMailFromAttributesRequest& WithMailFromDomain(const char* value) { SetMailFromDomain(value); return *this;}


    /**
     * <p>The action to take if the required MX record isn't found when you send an
     * email. When you set this value to <code>UseDefaultValue</code>, the mail is sent
     * using <i>amazonses.com</i> as the MAIL FROM domain. When you set this value to
     * <code>RejectMessage</code>, the Amazon SES API v2 returns a
     * <code>MailFromDomainNotVerified</code> error, and doesn't attempt to deliver the
     * email.</p> <p>These behaviors are taken when the custom MAIL FROM domain
     * configuration is in the <code>Pending</code>, <code>Failed</code>, and
     * <code>TemporaryFailure</code> states.</p>
     */
    inline const BehaviorOnMxFailure& GetBehaviorOnMxFailure() const{ return m_behaviorOnMxFailure; }

    /**
     * <p>The action to take if the required MX record isn't found when you send an
     * email. When you set this value to <code>UseDefaultValue</code>, the mail is sent
     * using <i>amazonses.com</i> as the MAIL FROM domain. When you set this value to
     * <code>RejectMessage</code>, the Amazon SES API v2 returns a
     * <code>MailFromDomainNotVerified</code> error, and doesn't attempt to deliver the
     * email.</p> <p>These behaviors are taken when the custom MAIL FROM domain
     * configuration is in the <code>Pending</code>, <code>Failed</code>, and
     * <code>TemporaryFailure</code> states.</p>
     */
    inline bool BehaviorOnMxFailureHasBeenSet() const { return m_behaviorOnMxFailureHasBeenSet; }

    /**
     * <p>The action to take if the required MX record isn't found when you send an
     * email. When you set this value to <code>UseDefaultValue</code>, the mail is sent
     * using <i>amazonses.com</i> as the MAIL FROM domain. When you set this value to
     * <code>RejectMessage</code>, the Amazon SES API v2 returns a
     * <code>MailFromDomainNotVerified</code> error, and doesn't attempt to deliver the
     * email.</p> <p>These behaviors are taken when the custom MAIL FROM domain
     * configuration is in the <code>Pending</code>, <code>Failed</code>, and
     * <code>TemporaryFailure</code> states.</p>
     */
    inline void SetBehaviorOnMxFailure(const BehaviorOnMxFailure& value) { m_behaviorOnMxFailureHasBeenSet = true; m_behaviorOnMxFailure = value; }

    /**
     * <p>The action to take if the required MX record isn't found when you send an
     * email. When you set this value to <code>UseDefaultValue</code>, the mail is sent
     * using <i>amazonses.com</i> as the MAIL FROM domain. When you set this value to
     * <code>RejectMessage</code>, the Amazon SES API v2 returns a
     * <code>MailFromDomainNotVerified</code> error, and doesn't attempt to deliver the
     * email.</p> <p>These behaviors are taken when the custom MAIL FROM domain
     * configuration is in the <code>Pending</code>, <code>Failed</code>, and
     * <code>TemporaryFailure</code> states.</p>
     */
    inline void SetBehaviorOnMxFailure(BehaviorOnMxFailure&& value) { m_behaviorOnMxFailureHasBeenSet = true; m_behaviorOnMxFailure = std::move(value); }

    /**
     * <p>The action to take if the required MX record isn't found when you send an
     * email. When you set this value to <code>UseDefaultValue</code>, the mail is sent
     * using <i>amazonses.com</i> as the MAIL FROM domain. When you set this value to
     * <code>RejectMessage</code>, the Amazon SES API v2 returns a
     * <code>MailFromDomainNotVerified</code> error, and doesn't attempt to deliver the
     * email.</p> <p>These behaviors are taken when the custom MAIL FROM domain
     * configuration is in the <code>Pending</code>, <code>Failed</code>, and
     * <code>TemporaryFailure</code> states.</p>
     */
    inline PutEmailIdentityMailFromAttributesRequest& WithBehaviorOnMxFailure(const BehaviorOnMxFailure& value) { SetBehaviorOnMxFailure(value); return *this;}

    /**
     * <p>The action to take if the required MX record isn't found when you send an
     * email. When you set this value to <code>UseDefaultValue</code>, the mail is sent
     * using <i>amazonses.com</i> as the MAIL FROM domain. When you set this value to
     * <code>RejectMessage</code>, the Amazon SES API v2 returns a
     * <code>MailFromDomainNotVerified</code> error, and doesn't attempt to deliver the
     * email.</p> <p>These behaviors are taken when the custom MAIL FROM domain
     * configuration is in the <code>Pending</code>, <code>Failed</code>, and
     * <code>TemporaryFailure</code> states.</p>
     */
    inline PutEmailIdentityMailFromAttributesRequest& WithBehaviorOnMxFailure(BehaviorOnMxFailure&& value) { SetBehaviorOnMxFailure(std::move(value)); return *this;}

  private:

    Aws::String m_emailIdentity;
    bool m_emailIdentityHasBeenSet = false;

    Aws::String m_mailFromDomain;
    bool m_mailFromDomainHasBeenSet = false;

    BehaviorOnMxFailure m_behaviorOnMxFailure;
    bool m_behaviorOnMxFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
