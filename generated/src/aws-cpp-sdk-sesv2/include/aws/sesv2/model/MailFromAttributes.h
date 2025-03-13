/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/MailFromDomainStatus.h>
#include <aws/sesv2/model/BehaviorOnMxFailure.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>A list of attributes that are associated with a MAIL FROM
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/MailFromAttributes">AWS
   * API Reference</a></p>
   */
  class MailFromAttributes
  {
  public:
    AWS_SESV2_API MailFromAttributes() = default;
    AWS_SESV2_API MailFromAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API MailFromAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a domain that an email identity uses as a custom MAIL FROM
     * domain.</p>
     */
    inline const Aws::String& GetMailFromDomain() const { return m_mailFromDomain; }
    inline bool MailFromDomainHasBeenSet() const { return m_mailFromDomainHasBeenSet; }
    template<typename MailFromDomainT = Aws::String>
    void SetMailFromDomain(MailFromDomainT&& value) { m_mailFromDomainHasBeenSet = true; m_mailFromDomain = std::forward<MailFromDomainT>(value); }
    template<typename MailFromDomainT = Aws::String>
    MailFromAttributes& WithMailFromDomain(MailFromDomainT&& value) { SetMailFromDomain(std::forward<MailFromDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the MAIL FROM domain. This status can have the following
     * values:</p> <ul> <li> <p> <code>PENDING</code> – Amazon SES hasn't started
     * searching for the MX record yet.</p> </li> <li> <p> <code>SUCCESS</code> –
     * Amazon SES detected the required MX record for the MAIL FROM domain.</p> </li>
     * <li> <p> <code>FAILED</code> – Amazon SES can't find the required MX record, or
     * the record no longer exists.</p> </li> <li> <p> <code>TEMPORARY_FAILURE</code> –
     * A temporary issue occurred, which prevented Amazon SES from determining the
     * status of the MAIL FROM domain.</p> </li> </ul>
     */
    inline MailFromDomainStatus GetMailFromDomainStatus() const { return m_mailFromDomainStatus; }
    inline bool MailFromDomainStatusHasBeenSet() const { return m_mailFromDomainStatusHasBeenSet; }
    inline void SetMailFromDomainStatus(MailFromDomainStatus value) { m_mailFromDomainStatusHasBeenSet = true; m_mailFromDomainStatus = value; }
    inline MailFromAttributes& WithMailFromDomainStatus(MailFromDomainStatus value) { SetMailFromDomainStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take if the required MX record can't be found when you send an
     * email. When you set this value to <code>USE_DEFAULT_VALUE</code>, the mail is
     * sent using <i>amazonses.com</i> as the MAIL FROM domain. When you set this value
     * to <code>REJECT_MESSAGE</code>, the Amazon SES API v2 returns a
     * <code>MailFromDomainNotVerified</code> error, and doesn't attempt to deliver the
     * email.</p> <p>These behaviors are taken when the custom MAIL FROM domain
     * configuration is in the <code>Pending</code>, <code>Failed</code>, and
     * <code>TemporaryFailure</code> states.</p>
     */
    inline BehaviorOnMxFailure GetBehaviorOnMxFailure() const { return m_behaviorOnMxFailure; }
    inline bool BehaviorOnMxFailureHasBeenSet() const { return m_behaviorOnMxFailureHasBeenSet; }
    inline void SetBehaviorOnMxFailure(BehaviorOnMxFailure value) { m_behaviorOnMxFailureHasBeenSet = true; m_behaviorOnMxFailure = value; }
    inline MailFromAttributes& WithBehaviorOnMxFailure(BehaviorOnMxFailure value) { SetBehaviorOnMxFailure(value); return *this;}
    ///@}
  private:

    Aws::String m_mailFromDomain;
    bool m_mailFromDomainHasBeenSet = false;

    MailFromDomainStatus m_mailFromDomainStatus{MailFromDomainStatus::NOT_SET};
    bool m_mailFromDomainStatusHasBeenSet = false;

    BehaviorOnMxFailure m_behaviorOnMxFailure{BehaviorOnMxFailure::NOT_SET};
    bool m_behaviorOnMxFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
