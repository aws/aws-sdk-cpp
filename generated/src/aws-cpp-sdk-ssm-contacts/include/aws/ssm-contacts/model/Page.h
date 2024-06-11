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
    AWS_SSMCONTACTS_API Page();
    AWS_SSMCONTACTS_API Page(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Page& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the page to the contact channel.</p>
     */
    inline const Aws::String& GetPageArn() const{ return m_pageArn; }
    inline bool PageArnHasBeenSet() const { return m_pageArnHasBeenSet; }
    inline void SetPageArn(const Aws::String& value) { m_pageArnHasBeenSet = true; m_pageArn = value; }
    inline void SetPageArn(Aws::String&& value) { m_pageArnHasBeenSet = true; m_pageArn = std::move(value); }
    inline void SetPageArn(const char* value) { m_pageArnHasBeenSet = true; m_pageArn.assign(value); }
    inline Page& WithPageArn(const Aws::String& value) { SetPageArn(value); return *this;}
    inline Page& WithPageArn(Aws::String&& value) { SetPageArn(std::move(value)); return *this;}
    inline Page& WithPageArn(const char* value) { SetPageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the engagement that this page is part of.</p>
     */
    inline const Aws::String& GetEngagementArn() const{ return m_engagementArn; }
    inline bool EngagementArnHasBeenSet() const { return m_engagementArnHasBeenSet; }
    inline void SetEngagementArn(const Aws::String& value) { m_engagementArnHasBeenSet = true; m_engagementArn = value; }
    inline void SetEngagementArn(Aws::String&& value) { m_engagementArnHasBeenSet = true; m_engagementArn = std::move(value); }
    inline void SetEngagementArn(const char* value) { m_engagementArnHasBeenSet = true; m_engagementArn.assign(value); }
    inline Page& WithEngagementArn(const Aws::String& value) { SetEngagementArn(value); return *this;}
    inline Page& WithEngagementArn(Aws::String&& value) { SetEngagementArn(std::move(value)); return *this;}
    inline Page& WithEngagementArn(const char* value) { SetEngagementArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the contact that Incident Manager is engaging.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }
    inline void SetContactArn(const Aws::String& value) { m_contactArnHasBeenSet = true; m_contactArn = value; }
    inline void SetContactArn(Aws::String&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::move(value); }
    inline void SetContactArn(const char* value) { m_contactArnHasBeenSet = true; m_contactArn.assign(value); }
    inline Page& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}
    inline Page& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}
    inline Page& WithContactArn(const char* value) { SetContactArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user that started the engagement.</p>
     */
    inline const Aws::String& GetSender() const{ return m_sender; }
    inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }
    inline void SetSender(const Aws::String& value) { m_senderHasBeenSet = true; m_sender = value; }
    inline void SetSender(Aws::String&& value) { m_senderHasBeenSet = true; m_sender = std::move(value); }
    inline void SetSender(const char* value) { m_senderHasBeenSet = true; m_sender.assign(value); }
    inline Page& WithSender(const Aws::String& value) { SetSender(value); return *this;}
    inline Page& WithSender(Aws::String&& value) { SetSender(std::move(value)); return *this;}
    inline Page& WithSender(const char* value) { SetSender(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the incident that's engaging the contact channel.</p>
     */
    inline const Aws::String& GetIncidentId() const{ return m_incidentId; }
    inline bool IncidentIdHasBeenSet() const { return m_incidentIdHasBeenSet; }
    inline void SetIncidentId(const Aws::String& value) { m_incidentIdHasBeenSet = true; m_incidentId = value; }
    inline void SetIncidentId(Aws::String&& value) { m_incidentIdHasBeenSet = true; m_incidentId = std::move(value); }
    inline void SetIncidentId(const char* value) { m_incidentIdHasBeenSet = true; m_incidentId.assign(value); }
    inline Page& WithIncidentId(const Aws::String& value) { SetIncidentId(value); return *this;}
    inline Page& WithIncidentId(Aws::String&& value) { SetIncidentId(std::move(value)); return *this;}
    inline Page& WithIncidentId(const char* value) { SetIncidentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that Incident Manager engaged the contact channel.</p>
     */
    inline const Aws::Utils::DateTime& GetSentTime() const{ return m_sentTime; }
    inline bool SentTimeHasBeenSet() const { return m_sentTimeHasBeenSet; }
    inline void SetSentTime(const Aws::Utils::DateTime& value) { m_sentTimeHasBeenSet = true; m_sentTime = value; }
    inline void SetSentTime(Aws::Utils::DateTime&& value) { m_sentTimeHasBeenSet = true; m_sentTime = std::move(value); }
    inline Page& WithSentTime(const Aws::Utils::DateTime& value) { SetSentTime(value); return *this;}
    inline Page& WithSentTime(Aws::Utils::DateTime&& value) { SetSentTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the message was delivered to the contact channel.</p>
     */
    inline const Aws::Utils::DateTime& GetDeliveryTime() const{ return m_deliveryTime; }
    inline bool DeliveryTimeHasBeenSet() const { return m_deliveryTimeHasBeenSet; }
    inline void SetDeliveryTime(const Aws::Utils::DateTime& value) { m_deliveryTimeHasBeenSet = true; m_deliveryTime = value; }
    inline void SetDeliveryTime(Aws::Utils::DateTime&& value) { m_deliveryTimeHasBeenSet = true; m_deliveryTime = std::move(value); }
    inline Page& WithDeliveryTime(const Aws::Utils::DateTime& value) { SetDeliveryTime(value); return *this;}
    inline Page& WithDeliveryTime(Aws::Utils::DateTime&& value) { SetDeliveryTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the contact channel acknowledged engagement.</p>
     */
    inline const Aws::Utils::DateTime& GetReadTime() const{ return m_readTime; }
    inline bool ReadTimeHasBeenSet() const { return m_readTimeHasBeenSet; }
    inline void SetReadTime(const Aws::Utils::DateTime& value) { m_readTimeHasBeenSet = true; m_readTime = value; }
    inline void SetReadTime(Aws::Utils::DateTime&& value) { m_readTimeHasBeenSet = true; m_readTime = std::move(value); }
    inline Page& WithReadTime(const Aws::Utils::DateTime& value) { SetReadTime(value); return *this;}
    inline Page& WithReadTime(Aws::Utils::DateTime&& value) { SetReadTime(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_sentTime;
    bool m_sentTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deliveryTime;
    bool m_deliveryTimeHasBeenSet = false;

    Aws::Utils::DateTime m_readTime;
    bool m_readTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
