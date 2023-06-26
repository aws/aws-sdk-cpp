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


    /**
     * <p>The Amazon Resource Name (ARN) of the page to the contact channel.</p>
     */
    inline const Aws::String& GetPageArn() const{ return m_pageArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the page to the contact channel.</p>
     */
    inline bool PageArnHasBeenSet() const { return m_pageArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the page to the contact channel.</p>
     */
    inline void SetPageArn(const Aws::String& value) { m_pageArnHasBeenSet = true; m_pageArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the page to the contact channel.</p>
     */
    inline void SetPageArn(Aws::String&& value) { m_pageArnHasBeenSet = true; m_pageArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the page to the contact channel.</p>
     */
    inline void SetPageArn(const char* value) { m_pageArnHasBeenSet = true; m_pageArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the page to the contact channel.</p>
     */
    inline Page& WithPageArn(const Aws::String& value) { SetPageArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the page to the contact channel.</p>
     */
    inline Page& WithPageArn(Aws::String&& value) { SetPageArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the page to the contact channel.</p>
     */
    inline Page& WithPageArn(const char* value) { SetPageArn(value); return *this;}


    /**
     * <p>The ARN of the engagement that this page is part of.</p>
     */
    inline const Aws::String& GetEngagementArn() const{ return m_engagementArn; }

    /**
     * <p>The ARN of the engagement that this page is part of.</p>
     */
    inline bool EngagementArnHasBeenSet() const { return m_engagementArnHasBeenSet; }

    /**
     * <p>The ARN of the engagement that this page is part of.</p>
     */
    inline void SetEngagementArn(const Aws::String& value) { m_engagementArnHasBeenSet = true; m_engagementArn = value; }

    /**
     * <p>The ARN of the engagement that this page is part of.</p>
     */
    inline void SetEngagementArn(Aws::String&& value) { m_engagementArnHasBeenSet = true; m_engagementArn = std::move(value); }

    /**
     * <p>The ARN of the engagement that this page is part of.</p>
     */
    inline void SetEngagementArn(const char* value) { m_engagementArnHasBeenSet = true; m_engagementArn.assign(value); }

    /**
     * <p>The ARN of the engagement that this page is part of.</p>
     */
    inline Page& WithEngagementArn(const Aws::String& value) { SetEngagementArn(value); return *this;}

    /**
     * <p>The ARN of the engagement that this page is part of.</p>
     */
    inline Page& WithEngagementArn(Aws::String&& value) { SetEngagementArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the engagement that this page is part of.</p>
     */
    inline Page& WithEngagementArn(const char* value) { SetEngagementArn(value); return *this;}


    /**
     * <p>The ARN of the contact that Incident Manager is engaging.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>The ARN of the contact that Incident Manager is engaging.</p>
     */
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }

    /**
     * <p>The ARN of the contact that Incident Manager is engaging.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArnHasBeenSet = true; m_contactArn = value; }

    /**
     * <p>The ARN of the contact that Incident Manager is engaging.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::move(value); }

    /**
     * <p>The ARN of the contact that Incident Manager is engaging.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArnHasBeenSet = true; m_contactArn.assign(value); }

    /**
     * <p>The ARN of the contact that Incident Manager is engaging.</p>
     */
    inline Page& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>The ARN of the contact that Incident Manager is engaging.</p>
     */
    inline Page& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the contact that Incident Manager is engaging.</p>
     */
    inline Page& WithContactArn(const char* value) { SetContactArn(value); return *this;}


    /**
     * <p>The user that started the engagement.</p>
     */
    inline const Aws::String& GetSender() const{ return m_sender; }

    /**
     * <p>The user that started the engagement.</p>
     */
    inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }

    /**
     * <p>The user that started the engagement.</p>
     */
    inline void SetSender(const Aws::String& value) { m_senderHasBeenSet = true; m_sender = value; }

    /**
     * <p>The user that started the engagement.</p>
     */
    inline void SetSender(Aws::String&& value) { m_senderHasBeenSet = true; m_sender = std::move(value); }

    /**
     * <p>The user that started the engagement.</p>
     */
    inline void SetSender(const char* value) { m_senderHasBeenSet = true; m_sender.assign(value); }

    /**
     * <p>The user that started the engagement.</p>
     */
    inline Page& WithSender(const Aws::String& value) { SetSender(value); return *this;}

    /**
     * <p>The user that started the engagement.</p>
     */
    inline Page& WithSender(Aws::String&& value) { SetSender(std::move(value)); return *this;}

    /**
     * <p>The user that started the engagement.</p>
     */
    inline Page& WithSender(const char* value) { SetSender(value); return *this;}


    /**
     * <p>The ARN of the incident that's engaging the contact channel.</p>
     */
    inline const Aws::String& GetIncidentId() const{ return m_incidentId; }

    /**
     * <p>The ARN of the incident that's engaging the contact channel.</p>
     */
    inline bool IncidentIdHasBeenSet() const { return m_incidentIdHasBeenSet; }

    /**
     * <p>The ARN of the incident that's engaging the contact channel.</p>
     */
    inline void SetIncidentId(const Aws::String& value) { m_incidentIdHasBeenSet = true; m_incidentId = value; }

    /**
     * <p>The ARN of the incident that's engaging the contact channel.</p>
     */
    inline void SetIncidentId(Aws::String&& value) { m_incidentIdHasBeenSet = true; m_incidentId = std::move(value); }

    /**
     * <p>The ARN of the incident that's engaging the contact channel.</p>
     */
    inline void SetIncidentId(const char* value) { m_incidentIdHasBeenSet = true; m_incidentId.assign(value); }

    /**
     * <p>The ARN of the incident that's engaging the contact channel.</p>
     */
    inline Page& WithIncidentId(const Aws::String& value) { SetIncidentId(value); return *this;}

    /**
     * <p>The ARN of the incident that's engaging the contact channel.</p>
     */
    inline Page& WithIncidentId(Aws::String&& value) { SetIncidentId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the incident that's engaging the contact channel.</p>
     */
    inline Page& WithIncidentId(const char* value) { SetIncidentId(value); return *this;}


    /**
     * <p>The time that Incident Manager engaged the contact channel.</p>
     */
    inline const Aws::Utils::DateTime& GetSentTime() const{ return m_sentTime; }

    /**
     * <p>The time that Incident Manager engaged the contact channel.</p>
     */
    inline bool SentTimeHasBeenSet() const { return m_sentTimeHasBeenSet; }

    /**
     * <p>The time that Incident Manager engaged the contact channel.</p>
     */
    inline void SetSentTime(const Aws::Utils::DateTime& value) { m_sentTimeHasBeenSet = true; m_sentTime = value; }

    /**
     * <p>The time that Incident Manager engaged the contact channel.</p>
     */
    inline void SetSentTime(Aws::Utils::DateTime&& value) { m_sentTimeHasBeenSet = true; m_sentTime = std::move(value); }

    /**
     * <p>The time that Incident Manager engaged the contact channel.</p>
     */
    inline Page& WithSentTime(const Aws::Utils::DateTime& value) { SetSentTime(value); return *this;}

    /**
     * <p>The time that Incident Manager engaged the contact channel.</p>
     */
    inline Page& WithSentTime(Aws::Utils::DateTime&& value) { SetSentTime(std::move(value)); return *this;}


    /**
     * <p>The time the message was delivered to the contact channel.</p>
     */
    inline const Aws::Utils::DateTime& GetDeliveryTime() const{ return m_deliveryTime; }

    /**
     * <p>The time the message was delivered to the contact channel.</p>
     */
    inline bool DeliveryTimeHasBeenSet() const { return m_deliveryTimeHasBeenSet; }

    /**
     * <p>The time the message was delivered to the contact channel.</p>
     */
    inline void SetDeliveryTime(const Aws::Utils::DateTime& value) { m_deliveryTimeHasBeenSet = true; m_deliveryTime = value; }

    /**
     * <p>The time the message was delivered to the contact channel.</p>
     */
    inline void SetDeliveryTime(Aws::Utils::DateTime&& value) { m_deliveryTimeHasBeenSet = true; m_deliveryTime = std::move(value); }

    /**
     * <p>The time the message was delivered to the contact channel.</p>
     */
    inline Page& WithDeliveryTime(const Aws::Utils::DateTime& value) { SetDeliveryTime(value); return *this;}

    /**
     * <p>The time the message was delivered to the contact channel.</p>
     */
    inline Page& WithDeliveryTime(Aws::Utils::DateTime&& value) { SetDeliveryTime(std::move(value)); return *this;}


    /**
     * <p>The time that the contact channel acknowledged engagement.</p>
     */
    inline const Aws::Utils::DateTime& GetReadTime() const{ return m_readTime; }

    /**
     * <p>The time that the contact channel acknowledged engagement.</p>
     */
    inline bool ReadTimeHasBeenSet() const { return m_readTimeHasBeenSet; }

    /**
     * <p>The time that the contact channel acknowledged engagement.</p>
     */
    inline void SetReadTime(const Aws::Utils::DateTime& value) { m_readTimeHasBeenSet = true; m_readTime = value; }

    /**
     * <p>The time that the contact channel acknowledged engagement.</p>
     */
    inline void SetReadTime(Aws::Utils::DateTime&& value) { m_readTimeHasBeenSet = true; m_readTime = std::move(value); }

    /**
     * <p>The time that the contact channel acknowledged engagement.</p>
     */
    inline Page& WithReadTime(const Aws::Utils::DateTime& value) { SetReadTime(value); return *this;}

    /**
     * <p>The time that the contact channel acknowledged engagement.</p>
     */
    inline Page& WithReadTime(Aws::Utils::DateTime&& value) { SetReadTime(std::move(value)); return *this;}

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
