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
    AWS_PINPOINTEMAIL_API PlacementStatistics() = default;
    AWS_PINPOINTEMAIL_API PlacementStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API PlacementStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The percentage of emails that arrived in recipients' inboxes during the
     * predictive inbox placement test.</p>
     */
    inline double GetInboxPercentage() const { return m_inboxPercentage; }
    inline bool InboxPercentageHasBeenSet() const { return m_inboxPercentageHasBeenSet; }
    inline void SetInboxPercentage(double value) { m_inboxPercentageHasBeenSet = true; m_inboxPercentage = value; }
    inline PlacementStatistics& WithInboxPercentage(double value) { SetInboxPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of emails that arrived in recipients' spam or junk mail
     * folders during the predictive inbox placement test.</p>
     */
    inline double GetSpamPercentage() const { return m_spamPercentage; }
    inline bool SpamPercentageHasBeenSet() const { return m_spamPercentageHasBeenSet; }
    inline void SetSpamPercentage(double value) { m_spamPercentageHasBeenSet = true; m_spamPercentage = value; }
    inline PlacementStatistics& WithSpamPercentage(double value) { SetSpamPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of emails that didn't arrive in recipients' inboxes at all
     * during the predictive inbox placement test.</p>
     */
    inline double GetMissingPercentage() const { return m_missingPercentage; }
    inline bool MissingPercentageHasBeenSet() const { return m_missingPercentageHasBeenSet; }
    inline void SetMissingPercentage(double value) { m_missingPercentageHasBeenSet = true; m_missingPercentage = value; }
    inline PlacementStatistics& WithMissingPercentage(double value) { SetMissingPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of emails that were authenticated by using Sender Policy
     * Framework (SPF) during the predictive inbox placement test.</p>
     */
    inline double GetSpfPercentage() const { return m_spfPercentage; }
    inline bool SpfPercentageHasBeenSet() const { return m_spfPercentageHasBeenSet; }
    inline void SetSpfPercentage(double value) { m_spfPercentageHasBeenSet = true; m_spfPercentage = value; }
    inline PlacementStatistics& WithSpfPercentage(double value) { SetSpfPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of emails that were authenticated by using DomainKeys
     * Identified Mail (DKIM) during the predictive inbox placement test.</p>
     */
    inline double GetDkimPercentage() const { return m_dkimPercentage; }
    inline bool DkimPercentageHasBeenSet() const { return m_dkimPercentageHasBeenSet; }
    inline void SetDkimPercentage(double value) { m_dkimPercentageHasBeenSet = true; m_dkimPercentage = value; }
    inline PlacementStatistics& WithDkimPercentage(double value) { SetDkimPercentage(value); return *this;}
    ///@}
  private:

    double m_inboxPercentage{0.0};
    bool m_inboxPercentageHasBeenSet = false;

    double m_spamPercentage{0.0};
    bool m_spamPercentageHasBeenSet = false;

    double m_missingPercentage{0.0};
    bool m_missingPercentageHasBeenSet = false;

    double m_spfPercentage{0.0};
    bool m_spfPercentageHasBeenSet = false;

    double m_dkimPercentage{0.0};
    bool m_dkimPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
