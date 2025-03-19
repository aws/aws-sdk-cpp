/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>

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
   * <p>An object that contains information about the amount of email that was
   * delivered to recipients.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/VolumeStatistics">AWS
   * API Reference</a></p>
   */
  class VolumeStatistics
  {
  public:
    AWS_SESV2_API VolumeStatistics() = default;
    AWS_SESV2_API VolumeStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API VolumeStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of emails that arrived in recipients' inboxes.</p>
     */
    inline long long GetInboxRawCount() const { return m_inboxRawCount; }
    inline bool InboxRawCountHasBeenSet() const { return m_inboxRawCountHasBeenSet; }
    inline void SetInboxRawCount(long long value) { m_inboxRawCountHasBeenSet = true; m_inboxRawCount = value; }
    inline VolumeStatistics& WithInboxRawCount(long long value) { SetInboxRawCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of emails that arrived in recipients' spam or junk mail
     * folders.</p>
     */
    inline long long GetSpamRawCount() const { return m_spamRawCount; }
    inline bool SpamRawCountHasBeenSet() const { return m_spamRawCountHasBeenSet; }
    inline void SetSpamRawCount(long long value) { m_spamRawCountHasBeenSet = true; m_spamRawCount = value; }
    inline VolumeStatistics& WithSpamRawCount(long long value) { SetSpamRawCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An estimate of the percentage of emails sent from the current domain that
     * will arrive in recipients' inboxes.</p>
     */
    inline long long GetProjectedInbox() const { return m_projectedInbox; }
    inline bool ProjectedInboxHasBeenSet() const { return m_projectedInboxHasBeenSet; }
    inline void SetProjectedInbox(long long value) { m_projectedInboxHasBeenSet = true; m_projectedInbox = value; }
    inline VolumeStatistics& WithProjectedInbox(long long value) { SetProjectedInbox(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An estimate of the percentage of emails sent from the current domain that
     * will arrive in recipients' spam or junk mail folders.</p>
     */
    inline long long GetProjectedSpam() const { return m_projectedSpam; }
    inline bool ProjectedSpamHasBeenSet() const { return m_projectedSpamHasBeenSet; }
    inline void SetProjectedSpam(long long value) { m_projectedSpamHasBeenSet = true; m_projectedSpam = value; }
    inline VolumeStatistics& WithProjectedSpam(long long value) { SetProjectedSpam(value); return *this;}
    ///@}
  private:

    long long m_inboxRawCount{0};
    bool m_inboxRawCountHasBeenSet = false;

    long long m_spamRawCount{0};
    bool m_spamRawCountHasBeenSet = false;

    long long m_projectedInbox{0};
    bool m_projectedInboxHasBeenSet = false;

    long long m_projectedSpam{0};
    bool m_projectedSpamHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
