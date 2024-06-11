/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/SessionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/SessionManagerOutputUrl.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about a Session Manager connection to a managed
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Session">AWS API
   * Reference</a></p>
   */
  class Session
  {
  public:
    AWS_SSM_API Session();
    AWS_SSM_API Session(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline Session& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline Session& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline Session& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node that the Session Manager session connected to.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline Session& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline Session& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline Session& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the session. For example, "Connected" or "Terminated".</p>
     */
    inline const SessionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Session& WithStatus(const SessionStatus& value) { SetStatus(value); return *this;}
    inline Session& WithStatus(SessionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO-8601 Extended format, when the session began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline Session& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline Session& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO-8601 Extended format, when the session was
     * terminated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }
    inline Session& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}
    inline Session& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Session Manager SSM document used to define the parameters
     * and plugin settings for the session. For example,
     * <code>SSM-SessionManagerRunShell</code>.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }
    inline Session& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}
    inline Session& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}
    inline Session& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services user that started the session.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline Session& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline Session& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline Session& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for connecting to the instance.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline Session& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline Session& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline Session& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }
    inline Session& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}
    inline Session& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}
    inline Session& WithDetails(const char* value) { SetDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const SessionManagerOutputUrl& GetOutputUrl() const{ return m_outputUrl; }
    inline bool OutputUrlHasBeenSet() const { return m_outputUrlHasBeenSet; }
    inline void SetOutputUrl(const SessionManagerOutputUrl& value) { m_outputUrlHasBeenSet = true; m_outputUrl = value; }
    inline void SetOutputUrl(SessionManagerOutputUrl&& value) { m_outputUrlHasBeenSet = true; m_outputUrl = std::move(value); }
    inline Session& WithOutputUrl(const SessionManagerOutputUrl& value) { SetOutputUrl(value); return *this;}
    inline Session& WithOutputUrl(SessionManagerOutputUrl&& value) { SetOutputUrl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration of a session before it terminates.</p>
     */
    inline const Aws::String& GetMaxSessionDuration() const{ return m_maxSessionDuration; }
    inline bool MaxSessionDurationHasBeenSet() const { return m_maxSessionDurationHasBeenSet; }
    inline void SetMaxSessionDuration(const Aws::String& value) { m_maxSessionDurationHasBeenSet = true; m_maxSessionDuration = value; }
    inline void SetMaxSessionDuration(Aws::String&& value) { m_maxSessionDurationHasBeenSet = true; m_maxSessionDuration = std::move(value); }
    inline void SetMaxSessionDuration(const char* value) { m_maxSessionDurationHasBeenSet = true; m_maxSessionDuration.assign(value); }
    inline Session& WithMaxSessionDuration(const Aws::String& value) { SetMaxSessionDuration(value); return *this;}
    inline Session& WithMaxSessionDuration(Aws::String&& value) { SetMaxSessionDuration(std::move(value)); return *this;}
    inline Session& WithMaxSessionDuration(const char* value) { SetMaxSessionDuration(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    SessionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    SessionManagerOutputUrl m_outputUrl;
    bool m_outputUrlHasBeenSet = false;

    Aws::String m_maxSessionDuration;
    bool m_maxSessionDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
