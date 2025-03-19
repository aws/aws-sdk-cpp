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
    AWS_SSMCONTACTS_API Engagement() = default;
    AWS_SSMCONTACTS_API Engagement(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Engagement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the engagement.</p>
     */
    inline const Aws::String& GetEngagementArn() const { return m_engagementArn; }
    inline bool EngagementArnHasBeenSet() const { return m_engagementArnHasBeenSet; }
    template<typename EngagementArnT = Aws::String>
    void SetEngagementArn(EngagementArnT&& value) { m_engagementArnHasBeenSet = true; m_engagementArn = std::forward<EngagementArnT>(value); }
    template<typename EngagementArnT = Aws::String>
    Engagement& WithEngagementArn(EngagementArnT&& value) { SetEngagementArn(std::forward<EngagementArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the escalation plan or contact that Incident Manager is
     * engaging.</p>
     */
    inline const Aws::String& GetContactArn() const { return m_contactArn; }
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }
    template<typename ContactArnT = Aws::String>
    void SetContactArn(ContactArnT&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::forward<ContactArnT>(value); }
    template<typename ContactArnT = Aws::String>
    Engagement& WithContactArn(ContactArnT&& value) { SetContactArn(std::forward<ContactArnT>(value)); return *this;}
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
    Engagement& WithSender(SenderT&& value) { SetSender(std::forward<SenderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the incident that's engaging the contact.</p>
     */
    inline const Aws::String& GetIncidentId() const { return m_incidentId; }
    inline bool IncidentIdHasBeenSet() const { return m_incidentIdHasBeenSet; }
    template<typename IncidentIdT = Aws::String>
    void SetIncidentId(IncidentIdT&& value) { m_incidentIdHasBeenSet = true; m_incidentId = std::forward<IncidentIdT>(value); }
    template<typename IncidentIdT = Aws::String>
    Engagement& WithIncidentId(IncidentIdT&& value) { SetIncidentId(std::forward<IncidentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the engagement began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Engagement& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the engagement ended.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const { return m_stopTime; }
    inline bool StopTimeHasBeenSet() const { return m_stopTimeHasBeenSet; }
    template<typename StopTimeT = Aws::Utils::DateTime>
    void SetStopTime(StopTimeT&& value) { m_stopTimeHasBeenSet = true; m_stopTime = std::forward<StopTimeT>(value); }
    template<typename StopTimeT = Aws::Utils::DateTime>
    Engagement& WithStopTime(StopTimeT&& value) { SetStopTime(std::forward<StopTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_engagementArn;
    bool m_engagementArnHasBeenSet = false;

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;

    Aws::String m_sender;
    bool m_senderHasBeenSet = false;

    Aws::String m_incidentId;
    bool m_incidentIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_stopTime{};
    bool m_stopTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
