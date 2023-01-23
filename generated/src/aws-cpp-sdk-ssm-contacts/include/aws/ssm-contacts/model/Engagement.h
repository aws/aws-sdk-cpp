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
   * <p>Incident Manager reaching out to a contact or escalation plan to engage
   * contact during an incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/Engagement">AWS
   * API Reference</a></p>
   */
  class Engagement
  {
  public:
    AWS_SSMCONTACTS_API Engagement();
    AWS_SSMCONTACTS_API Engagement(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Engagement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline const Aws::String& GetEngagementArn() const{ return m_engagementArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline bool EngagementArnHasBeenSet() const { return m_engagementArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline void SetEngagementArn(const Aws::String& value) { m_engagementArnHasBeenSet = true; m_engagementArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline void SetEngagementArn(Aws::String&& value) { m_engagementArnHasBeenSet = true; m_engagementArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline void SetEngagementArn(const char* value) { m_engagementArnHasBeenSet = true; m_engagementArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline Engagement& WithEngagementArn(const Aws::String& value) { SetEngagementArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline Engagement& WithEngagementArn(Aws::String&& value) { SetEngagementArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline Engagement& WithEngagementArn(const char* value) { SetEngagementArn(value); return *this;}


    /**
     * <p>The ARN of the escalation plan or contact that Incident Manager is
     * engaging.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>The ARN of the escalation plan or contact that Incident Manager is
     * engaging.</p>
     */
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }

    /**
     * <p>The ARN of the escalation plan or contact that Incident Manager is
     * engaging.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArnHasBeenSet = true; m_contactArn = value; }

    /**
     * <p>The ARN of the escalation plan or contact that Incident Manager is
     * engaging.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::move(value); }

    /**
     * <p>The ARN of the escalation plan or contact that Incident Manager is
     * engaging.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArnHasBeenSet = true; m_contactArn.assign(value); }

    /**
     * <p>The ARN of the escalation plan or contact that Incident Manager is
     * engaging.</p>
     */
    inline Engagement& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>The ARN of the escalation plan or contact that Incident Manager is
     * engaging.</p>
     */
    inline Engagement& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the escalation plan or contact that Incident Manager is
     * engaging.</p>
     */
    inline Engagement& WithContactArn(const char* value) { SetContactArn(value); return *this;}


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
    inline Engagement& WithSender(const Aws::String& value) { SetSender(value); return *this;}

    /**
     * <p>The user that started the engagement.</p>
     */
    inline Engagement& WithSender(Aws::String&& value) { SetSender(std::move(value)); return *this;}

    /**
     * <p>The user that started the engagement.</p>
     */
    inline Engagement& WithSender(const char* value) { SetSender(value); return *this;}


    /**
     * <p>The ARN of the incident that's engaging the contact.</p>
     */
    inline const Aws::String& GetIncidentId() const{ return m_incidentId; }

    /**
     * <p>The ARN of the incident that's engaging the contact.</p>
     */
    inline bool IncidentIdHasBeenSet() const { return m_incidentIdHasBeenSet; }

    /**
     * <p>The ARN of the incident that's engaging the contact.</p>
     */
    inline void SetIncidentId(const Aws::String& value) { m_incidentIdHasBeenSet = true; m_incidentId = value; }

    /**
     * <p>The ARN of the incident that's engaging the contact.</p>
     */
    inline void SetIncidentId(Aws::String&& value) { m_incidentIdHasBeenSet = true; m_incidentId = std::move(value); }

    /**
     * <p>The ARN of the incident that's engaging the contact.</p>
     */
    inline void SetIncidentId(const char* value) { m_incidentIdHasBeenSet = true; m_incidentId.assign(value); }

    /**
     * <p>The ARN of the incident that's engaging the contact.</p>
     */
    inline Engagement& WithIncidentId(const Aws::String& value) { SetIncidentId(value); return *this;}

    /**
     * <p>The ARN of the incident that's engaging the contact.</p>
     */
    inline Engagement& WithIncidentId(Aws::String&& value) { SetIncidentId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the incident that's engaging the contact.</p>
     */
    inline Engagement& WithIncidentId(const char* value) { SetIncidentId(value); return *this;}


    /**
     * <p>The time that the engagement began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time that the engagement began.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time that the engagement began.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time that the engagement began.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time that the engagement began.</p>
     */
    inline Engagement& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time that the engagement began.</p>
     */
    inline Engagement& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time that the engagement ended.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const{ return m_stopTime; }

    /**
     * <p>The time that the engagement ended.</p>
     */
    inline bool StopTimeHasBeenSet() const { return m_stopTimeHasBeenSet; }

    /**
     * <p>The time that the engagement ended.</p>
     */
    inline void SetStopTime(const Aws::Utils::DateTime& value) { m_stopTimeHasBeenSet = true; m_stopTime = value; }

    /**
     * <p>The time that the engagement ended.</p>
     */
    inline void SetStopTime(Aws::Utils::DateTime&& value) { m_stopTimeHasBeenSet = true; m_stopTime = std::move(value); }

    /**
     * <p>The time that the engagement ended.</p>
     */
    inline Engagement& WithStopTime(const Aws::Utils::DateTime& value) { SetStopTime(value); return *this;}

    /**
     * <p>The time that the engagement ended.</p>
     */
    inline Engagement& WithStopTime(Aws::Utils::DateTime&& value) { SetStopTime(std::move(value)); return *this;}

  private:

    Aws::String m_engagementArn;
    bool m_engagementArnHasBeenSet = false;

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;

    Aws::String m_sender;
    bool m_senderHasBeenSet = false;

    Aws::String m_incidentId;
    bool m_incidentIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_stopTime;
    bool m_stopTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
