/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object that contains inbox placement data for email sent from one of your
   * email domains to a specific email provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DomainIspPlacement">AWS
   * API Reference</a></p>
   */
  class DomainIspPlacement
  {
  public:
    AWS_SESV2_API DomainIspPlacement();
    AWS_SESV2_API DomainIspPlacement(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API DomainIspPlacement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline const Aws::String& GetIspName() const{ return m_ispName; }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline bool IspNameHasBeenSet() const { return m_ispNameHasBeenSet; }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline void SetIspName(const Aws::String& value) { m_ispNameHasBeenSet = true; m_ispName = value; }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline void SetIspName(Aws::String&& value) { m_ispNameHasBeenSet = true; m_ispName = std::move(value); }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline void SetIspName(const char* value) { m_ispNameHasBeenSet = true; m_ispName.assign(value); }

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline DomainIspPlacement& WithIspName(const Aws::String& value) { SetIspName(value); return *this;}

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline DomainIspPlacement& WithIspName(Aws::String&& value) { SetIspName(std::move(value)); return *this;}

    /**
     * <p>The name of the email provider that the inbox placement data applies to.</p>
     */
    inline DomainIspPlacement& WithIspName(const char* value) { SetIspName(value); return *this;}


    /**
     * <p>The total number of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' inboxes.</p>
     */
    inline long long GetInboxRawCount() const{ return m_inboxRawCount; }

    /**
     * <p>The total number of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' inboxes.</p>
     */
    inline bool InboxRawCountHasBeenSet() const { return m_inboxRawCountHasBeenSet; }

    /**
     * <p>The total number of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' inboxes.</p>
     */
    inline void SetInboxRawCount(long long value) { m_inboxRawCountHasBeenSet = true; m_inboxRawCount = value; }

    /**
     * <p>The total number of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' inboxes.</p>
     */
    inline DomainIspPlacement& WithInboxRawCount(long long value) { SetInboxRawCount(value); return *this;}


    /**
     * <p>The total number of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' spam or junk mail
     * folders.</p>
     */
    inline long long GetSpamRawCount() const{ return m_spamRawCount; }

    /**
     * <p>The total number of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' spam or junk mail
     * folders.</p>
     */
    inline bool SpamRawCountHasBeenSet() const { return m_spamRawCountHasBeenSet; }

    /**
     * <p>The total number of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' spam or junk mail
     * folders.</p>
     */
    inline void SetSpamRawCount(long long value) { m_spamRawCountHasBeenSet = true; m_spamRawCount = value; }

    /**
     * <p>The total number of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' spam or junk mail
     * folders.</p>
     */
    inline DomainIspPlacement& WithSpamRawCount(long long value) { SetSpamRawCount(value); return *this;}


    /**
     * <p>The percentage of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' inboxes.</p>
     */
    inline double GetInboxPercentage() const{ return m_inboxPercentage; }

    /**
     * <p>The percentage of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' inboxes.</p>
     */
    inline bool InboxPercentageHasBeenSet() const { return m_inboxPercentageHasBeenSet; }

    /**
     * <p>The percentage of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' inboxes.</p>
     */
    inline void SetInboxPercentage(double value) { m_inboxPercentageHasBeenSet = true; m_inboxPercentage = value; }

    /**
     * <p>The percentage of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' inboxes.</p>
     */
    inline DomainIspPlacement& WithInboxPercentage(double value) { SetInboxPercentage(value); return *this;}


    /**
     * <p>The percentage of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' spam or junk mail
     * folders.</p>
     */
    inline double GetSpamPercentage() const{ return m_spamPercentage; }

    /**
     * <p>The percentage of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' spam or junk mail
     * folders.</p>
     */
    inline bool SpamPercentageHasBeenSet() const { return m_spamPercentageHasBeenSet; }

    /**
     * <p>The percentage of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' spam or junk mail
     * folders.</p>
     */
    inline void SetSpamPercentage(double value) { m_spamPercentageHasBeenSet = true; m_spamPercentage = value; }

    /**
     * <p>The percentage of messages that were sent from the selected domain to the
     * specified email provider that arrived in recipients' spam or junk mail
     * folders.</p>
     */
    inline DomainIspPlacement& WithSpamPercentage(double value) { SetSpamPercentage(value); return *this;}

  private:

    Aws::String m_ispName;
    bool m_ispNameHasBeenSet = false;

    long long m_inboxRawCount;
    bool m_inboxRawCountHasBeenSet = false;

    long long m_spamRawCount;
    bool m_spamRawCountHasBeenSet = false;

    double m_inboxPercentage;
    bool m_inboxPercentageHasBeenSet = false;

    double m_spamPercentage;
    bool m_spamPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
