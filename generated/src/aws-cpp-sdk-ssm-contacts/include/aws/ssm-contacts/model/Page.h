/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>Incident Manager engaging a contact's contact channel.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/Page">AWS
   * API Reference</a></p>
   */
  class Page
  {
  public:
    AWS_SSMCONTACTS_API Page() = default;
    AWS_SSMCONTACTS_API Page(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Page& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the page to the contact channel.</p>
     */
    inline const Aws::String& GetPageArn() const { return m_pageArn; }
    inline bool PageArnHasBeenSet() const { return m_pageArnHasBeenSet; }
    template<typename PageArnT = Aws::String>
    void SetPageArn(PageArnT&& value) { m_pageArnHasBeenSet = true; m_pageArn = std::forward<PageArnT>(value); }
    template<typename PageArnT = Aws::String>
    Page& WithPageArn(PageArnT&& value) { SetPageArn(std::forward<PageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the engagement that this page is part of.</p>
     */
    inline const Aws::String& GetEngagementArn() const { return m_engagementArn; }
    inline bool EngagementArnHasBeenSet() const { return m_engagementArnHasBeenSet; }
    template<typename EngagementArnT = Aws::String>
    void SetEngagementArn(EngagementArnT&& value) { m_engagementArnHasBeenSet = true; m_engagementArn = std::forward<EngagementArnT>(value); }
    template<typename EngagementArnT = Aws::String>
    Page& WithEngagementArn(EngagementArnT&& value) { SetEngagementArn(std::forward<EngagementArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the contact that Incident Manager is engaging.</p>
     */
    inline const Aws::String& GetContactArn() const { return m_contactArn; }
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }
    template<typename ContactArnT = Aws::String>
    void SetContactArn(ContactArnT&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::forward<ContactArnT>(value); }
    template<typename ContactArnT = Aws::String>
    Page& WithContactArn(ContactArnT&& value) { SetContactArn(std::forward<ContactArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user that started the engagement.</p>
     */
    inline const Aws::String& GetSender() const { return m_sender; }
    inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }
    template<typename SenderT = Aws::String>
    void SetSender(SenderT&& value) { m_senderHasBeenSet = true; m_sender = std::forward<SenderT>(value); }
    template<typename SenderT = Aws::String>
    Page& WithSender(SenderT&& value) { SetSender(std::forward<SenderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the incident that's engaging the contact channel.</p>
     */
    inline const Aws::String& GetIncidentId() const { return m_incidentId; }
    inline bool IncidentIdHasBeenSet() const { return m_incidentIdHasBeenSet; }
    template<typename IncidentIdT = Aws::String>
    void SetIncidentId(IncidentIdT&& value) { m_incidentIdHasBeenSet = true; m_incidentId = std::forward<IncidentIdT>(value); }
    template<typename IncidentIdT = Aws::String>
    Page& WithIncidentId(IncidentIdT&& value) { SetIncidentId(std::forward<IncidentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that Incident Manager engaged the contact channel.</p>
     */
    inline const Aws::Utils::DateTime& GetSentTime() const { return m_sentTime; }
    inline bool SentTimeHasBeenSet() const { return m_sentTimeHasBeenSet; }
    template<typename SentTimeT = Aws::Utils::DateTime>
    void SetSentTime(SentTimeT&& value) { m_sentTimeHasBeenSet = true; m_sentTime = std::forward<SentTimeT>(value); }
    template<typename SentTimeT = Aws::Utils::DateTime>
    Page& WithSentTime(SentTimeT&& value) { SetSentTime(std::forward<SentTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the message was delivered to the contact channel.</p>
     */
    inline const Aws::Utils::DateTime& GetDeliveryTime() const { return m_deliveryTime; }
    inline bool DeliveryTimeHasBeenSet() const { return m_deliveryTimeHasBeenSet; }
    template<typename DeliveryTimeT = Aws::Utils::DateTime>
    void SetDeliveryTime(DeliveryTimeT&& value) { m_deliveryTimeHasBeenSet = true; m_deliveryTime = std::forward<DeliveryTimeT>(value); }
    template<typename DeliveryTimeT = Aws::Utils::DateTime>
    Page& WithDeliveryTime(DeliveryTimeT&& value) { SetDeliveryTime(std::forward<DeliveryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the contact channel acknowledged engagement.</p>
     */
    inline const Aws::Utils::DateTime& GetReadTime() const { return m_readTime; }
    inline bool ReadTimeHasBeenSet() const { return m_readTimeHasBeenSet; }
    template<typename ReadTimeT = Aws::Utils::DateTime>
    void SetReadTime(ReadTimeT&& value) { m_readTimeHasBeenSet = true; m_readTime = std::forward<ReadTimeT>(value); }
    template<typename ReadTimeT = Aws::Utils::DateTime>
    Page& WithReadTime(ReadTimeT&& value) { SetReadTime(std::forward<ReadTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pageArn;
    bool m_pageArnHasBeenSet = false;

    Aws::String m_engagementArn;
    bool m_engagementArnHasBeenSet = false;

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;

    Aws::String m_sender;
    bool m_senderHasBeenSet = false;

    Aws::String m_incidentId;
    bool m_incidentIdHasBeenSet = false;

    Aws::Utils::DateTime m_sentTime{};
    bool m_sentTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deliveryTime{};
    bool m_deliveryTimeHasBeenSet = false;

    Aws::Utils::DateTime m_readTime{};
    bool m_readTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
