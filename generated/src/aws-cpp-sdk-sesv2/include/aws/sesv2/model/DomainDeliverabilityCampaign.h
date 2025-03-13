/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An object that contains the deliverability data for a specific campaign. This
   * data is available for a campaign only if the campaign sent email by using a
   * domain that the Deliverability dashboard is enabled for
   * (<code>PutDeliverabilityDashboardOption</code> operation).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DomainDeliverabilityCampaign">AWS
   * API Reference</a></p>
   */
  class DomainDeliverabilityCampaign
  {
  public:
    AWS_SESV2_API DomainDeliverabilityCampaign() = default;
    AWS_SESV2_API DomainDeliverabilityCampaign(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API DomainDeliverabilityCampaign& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the campaign. The Deliverability dashboard
     * automatically generates and assigns this identifier to a campaign.</p>
     */
    inline const Aws::String& GetCampaignId() const { return m_campaignId; }
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }
    template<typename CampaignIdT = Aws::String>
    void SetCampaignId(CampaignIdT&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::forward<CampaignIdT>(value); }
    template<typename CampaignIdT = Aws::String>
    DomainDeliverabilityCampaign& WithCampaignId(CampaignIdT&& value) { SetCampaignId(std::forward<CampaignIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of an image that contains a snapshot of the email message that was
     * sent.</p>
     */
    inline const Aws::String& GetImageUrl() const { return m_imageUrl; }
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }
    template<typename ImageUrlT = Aws::String>
    void SetImageUrl(ImageUrlT&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::forward<ImageUrlT>(value); }
    template<typename ImageUrlT = Aws::String>
    DomainDeliverabilityCampaign& WithImageUrl(ImageUrlT&& value) { SetImageUrl(std::forward<ImageUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line, or title, of the email message.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    DomainDeliverabilityCampaign& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verified email address that the email message was sent from.</p>
     */
    inline const Aws::String& GetFromAddress() const { return m_fromAddress; }
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }
    template<typename FromAddressT = Aws::String>
    void SetFromAddress(FromAddressT&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::forward<FromAddressT>(value); }
    template<typename FromAddressT = Aws::String>
    DomainDeliverabilityCampaign& WithFromAddress(FromAddressT&& value) { SetFromAddress(std::forward<FromAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP addresses that were used to send the email message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSendingIps() const { return m_sendingIps; }
    inline bool SendingIpsHasBeenSet() const { return m_sendingIpsHasBeenSet; }
    template<typename SendingIpsT = Aws::Vector<Aws::String>>
    void SetSendingIps(SendingIpsT&& value) { m_sendingIpsHasBeenSet = true; m_sendingIps = std::forward<SendingIpsT>(value); }
    template<typename SendingIpsT = Aws::Vector<Aws::String>>
    DomainDeliverabilityCampaign& WithSendingIps(SendingIpsT&& value) { SetSendingIps(std::forward<SendingIpsT>(value)); return *this;}
    template<typename SendingIpsT = Aws::String>
    DomainDeliverabilityCampaign& AddSendingIps(SendingIpsT&& value) { m_sendingIpsHasBeenSet = true; m_sendingIps.emplace_back(std::forward<SendingIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The first time when the email message was delivered to any recipient's inbox.
     * This value can help you determine how long it took for a campaign to deliver an
     * email message.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstSeenDateTime() const { return m_firstSeenDateTime; }
    inline bool FirstSeenDateTimeHasBeenSet() const { return m_firstSeenDateTimeHasBeenSet; }
    template<typename FirstSeenDateTimeT = Aws::Utils::DateTime>
    void SetFirstSeenDateTime(FirstSeenDateTimeT&& value) { m_firstSeenDateTimeHasBeenSet = true; m_firstSeenDateTime = std::forward<FirstSeenDateTimeT>(value); }
    template<typename FirstSeenDateTimeT = Aws::Utils::DateTime>
    DomainDeliverabilityCampaign& WithFirstSeenDateTime(FirstSeenDateTimeT&& value) { SetFirstSeenDateTime(std::forward<FirstSeenDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time when the email message was delivered to any recipient's inbox.
     * This value can help you determine how long it took for a campaign to deliver an
     * email message.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeenDateTime() const { return m_lastSeenDateTime; }
    inline bool LastSeenDateTimeHasBeenSet() const { return m_lastSeenDateTimeHasBeenSet; }
    template<typename LastSeenDateTimeT = Aws::Utils::DateTime>
    void SetLastSeenDateTime(LastSeenDateTimeT&& value) { m_lastSeenDateTimeHasBeenSet = true; m_lastSeenDateTime = std::forward<LastSeenDateTimeT>(value); }
    template<typename LastSeenDateTimeT = Aws::Utils::DateTime>
    DomainDeliverabilityCampaign& WithLastSeenDateTime(LastSeenDateTimeT&& value) { SetLastSeenDateTime(std::forward<LastSeenDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of email messages that were delivered to recipients’ inboxes.</p>
     */
    inline long long GetInboxCount() const { return m_inboxCount; }
    inline bool InboxCountHasBeenSet() const { return m_inboxCountHasBeenSet; }
    inline void SetInboxCount(long long value) { m_inboxCountHasBeenSet = true; m_inboxCount = value; }
    inline DomainDeliverabilityCampaign& WithInboxCount(long long value) { SetInboxCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of email messages that were delivered to recipients' spam or junk
     * mail folders.</p>
     */
    inline long long GetSpamCount() const { return m_spamCount; }
    inline bool SpamCountHasBeenSet() const { return m_spamCountHasBeenSet; }
    inline void SetSpamCount(long long value) { m_spamCountHasBeenSet = true; m_spamCount = value; }
    inline DomainDeliverabilityCampaign& WithSpamCount(long long value) { SetSpamCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of email messages that were opened by recipients. Due to
     * technical limitations, this value only includes recipients who opened the
     * message by using an email client that supports images.</p>
     */
    inline double GetReadRate() const { return m_readRate; }
    inline bool ReadRateHasBeenSet() const { return m_readRateHasBeenSet; }
    inline void SetReadRate(double value) { m_readRateHasBeenSet = true; m_readRate = value; }
    inline DomainDeliverabilityCampaign& WithReadRate(double value) { SetReadRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of email messages that were deleted by recipients, without
     * being opened first. Due to technical limitations, this value only includes
     * recipients who opened the message by using an email client that supports
     * images.</p>
     */
    inline double GetDeleteRate() const { return m_deleteRate; }
    inline bool DeleteRateHasBeenSet() const { return m_deleteRateHasBeenSet; }
    inline void SetDeleteRate(double value) { m_deleteRateHasBeenSet = true; m_deleteRate = value; }
    inline DomainDeliverabilityCampaign& WithDeleteRate(double value) { SetDeleteRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of email messages that were opened and then deleted by
     * recipients. Due to technical limitations, this value only includes recipients
     * who opened the message by using an email client that supports images.</p>
     */
    inline double GetReadDeleteRate() const { return m_readDeleteRate; }
    inline bool ReadDeleteRateHasBeenSet() const { return m_readDeleteRateHasBeenSet; }
    inline void SetReadDeleteRate(double value) { m_readDeleteRateHasBeenSet = true; m_readDeleteRate = value; }
    inline DomainDeliverabilityCampaign& WithReadDeleteRate(double value) { SetReadDeleteRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The projected number of recipients that the email message was sent to.</p>
     */
    inline long long GetProjectedVolume() const { return m_projectedVolume; }
    inline bool ProjectedVolumeHasBeenSet() const { return m_projectedVolumeHasBeenSet; }
    inline void SetProjectedVolume(long long value) { m_projectedVolumeHasBeenSet = true; m_projectedVolume = value; }
    inline DomainDeliverabilityCampaign& WithProjectedVolume(long long value) { SetProjectedVolume(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major email providers who handled the email message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEsps() const { return m_esps; }
    inline bool EspsHasBeenSet() const { return m_espsHasBeenSet; }
    template<typename EspsT = Aws::Vector<Aws::String>>
    void SetEsps(EspsT&& value) { m_espsHasBeenSet = true; m_esps = std::forward<EspsT>(value); }
    template<typename EspsT = Aws::Vector<Aws::String>>
    DomainDeliverabilityCampaign& WithEsps(EspsT&& value) { SetEsps(std::forward<EspsT>(value)); return *this;}
    template<typename EspsT = Aws::String>
    DomainDeliverabilityCampaign& AddEsps(EspsT&& value) { m_espsHasBeenSet = true; m_esps.emplace_back(std::forward<EspsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_fromAddress;
    bool m_fromAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_sendingIps;
    bool m_sendingIpsHasBeenSet = false;

    Aws::Utils::DateTime m_firstSeenDateTime{};
    bool m_firstSeenDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastSeenDateTime{};
    bool m_lastSeenDateTimeHasBeenSet = false;

    long long m_inboxCount{0};
    bool m_inboxCountHasBeenSet = false;

    long long m_spamCount{0};
    bool m_spamCountHasBeenSet = false;

    double m_readRate{0.0};
    bool m_readRateHasBeenSet = false;

    double m_deleteRate{0.0};
    bool m_deleteRateHasBeenSet = false;

    double m_readDeleteRate{0.0};
    bool m_readDeleteRateHasBeenSet = false;

    long long m_projectedVolume{0};
    bool m_projectedVolumeHasBeenSet = false;

    Aws::Vector<Aws::String> m_esps;
    bool m_espsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
