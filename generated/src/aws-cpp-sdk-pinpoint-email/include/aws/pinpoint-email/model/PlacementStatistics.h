/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>

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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that contains inbox placement data for an email
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PlacementStatistics">AWS
   * API Reference</a></p>
   */
  class PlacementStatistics
  {
  public:
    AWS_PINPOINTEMAIL_API PlacementStatistics();
    AWS_PINPOINTEMAIL_API PlacementStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API PlacementStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentage of emails that arrived in recipients' inboxes during the
     * predictive inbox placement test.</p>
     */
    inline double GetInboxPercentage() const{ return m_inboxPercentage; }

    /**
     * <p>The percentage of emails that arrived in recipients' inboxes during the
     * predictive inbox placement test.</p>
     */
    inline bool InboxPercentageHasBeenSet() const { return m_inboxPercentageHasBeenSet; }

    /**
     * <p>The percentage of emails that arrived in recipients' inboxes during the
     * predictive inbox placement test.</p>
     */
    inline void SetInboxPercentage(double value) { m_inboxPercentageHasBeenSet = true; m_inboxPercentage = value; }

    /**
     * <p>The percentage of emails that arrived in recipients' inboxes during the
     * predictive inbox placement test.</p>
     */
    inline PlacementStatistics& WithInboxPercentage(double value) { SetInboxPercentage(value); return *this;}


    /**
     * <p>The percentage of emails that arrived in recipients' spam or junk mail
     * folders during the predictive inbox placement test.</p>
     */
    inline double GetSpamPercentage() const{ return m_spamPercentage; }

    /**
     * <p>The percentage of emails that arrived in recipients' spam or junk mail
     * folders during the predictive inbox placement test.</p>
     */
    inline bool SpamPercentageHasBeenSet() const { return m_spamPercentageHasBeenSet; }

    /**
     * <p>The percentage of emails that arrived in recipients' spam or junk mail
     * folders during the predictive inbox placement test.</p>
     */
    inline void SetSpamPercentage(double value) { m_spamPercentageHasBeenSet = true; m_spamPercentage = value; }

    /**
     * <p>The percentage of emails that arrived in recipients' spam or junk mail
     * folders during the predictive inbox placement test.</p>
     */
    inline PlacementStatistics& WithSpamPercentage(double value) { SetSpamPercentage(value); return *this;}


    /**
     * <p>The percentage of emails that didn't arrive in recipients' inboxes at all
     * during the predictive inbox placement test.</p>
     */
    inline double GetMissingPercentage() const{ return m_missingPercentage; }

    /**
     * <p>The percentage of emails that didn't arrive in recipients' inboxes at all
     * during the predictive inbox placement test.</p>
     */
    inline bool MissingPercentageHasBeenSet() const { return m_missingPercentageHasBeenSet; }

    /**
     * <p>The percentage of emails that didn't arrive in recipients' inboxes at all
     * during the predictive inbox placement test.</p>
     */
    inline void SetMissingPercentage(double value) { m_missingPercentageHasBeenSet = true; m_missingPercentage = value; }

    /**
     * <p>The percentage of emails that didn't arrive in recipients' inboxes at all
     * during the predictive inbox placement test.</p>
     */
    inline PlacementStatistics& WithMissingPercentage(double value) { SetMissingPercentage(value); return *this;}


    /**
     * <p>The percentage of emails that were authenticated by using Sender Policy
     * Framework (SPF) during the predictive inbox placement test.</p>
     */
    inline double GetSpfPercentage() const{ return m_spfPercentage; }

    /**
     * <p>The percentage of emails that were authenticated by using Sender Policy
     * Framework (SPF) during the predictive inbox placement test.</p>
     */
    inline bool SpfPercentageHasBeenSet() const { return m_spfPercentageHasBeenSet; }

    /**
     * <p>The percentage of emails that were authenticated by using Sender Policy
     * Framework (SPF) during the predictive inbox placement test.</p>
     */
    inline void SetSpfPercentage(double value) { m_spfPercentageHasBeenSet = true; m_spfPercentage = value; }

    /**
     * <p>The percentage of emails that were authenticated by using Sender Policy
     * Framework (SPF) during the predictive inbox placement test.</p>
     */
    inline PlacementStatistics& WithSpfPercentage(double value) { SetSpfPercentage(value); return *this;}


    /**
     * <p>The percentage of emails that were authenticated by using DomainKeys
     * Identified Mail (DKIM) during the predictive inbox placement test.</p>
     */
    inline double GetDkimPercentage() const{ return m_dkimPercentage; }

    /**
     * <p>The percentage of emails that were authenticated by using DomainKeys
     * Identified Mail (DKIM) during the predictive inbox placement test.</p>
     */
    inline bool DkimPercentageHasBeenSet() const { return m_dkimPercentageHasBeenSet; }

    /**
     * <p>The percentage of emails that were authenticated by using DomainKeys
     * Identified Mail (DKIM) during the predictive inbox placement test.</p>
     */
    inline void SetDkimPercentage(double value) { m_dkimPercentageHasBeenSet = true; m_dkimPercentage = value; }

    /**
     * <p>The percentage of emails that were authenticated by using DomainKeys
     * Identified Mail (DKIM) during the predictive inbox placement test.</p>
     */
    inline PlacementStatistics& WithDkimPercentage(double value) { SetDkimPercentage(value); return *this;}

  private:

    double m_inboxPercentage;
    bool m_inboxPercentageHasBeenSet = false;

    double m_spamPercentage;
    bool m_spamPercentageHasBeenSet = false;

    double m_missingPercentage;
    bool m_missingPercentageHasBeenSet = false;

    double m_spfPercentage;
    bool m_spfPercentageHasBeenSet = false;

    double m_dkimPercentage;
    bool m_dkimPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
