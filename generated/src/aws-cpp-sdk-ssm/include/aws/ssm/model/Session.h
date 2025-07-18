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
#include <aws/ssm/model/AccessType.h>
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
    AWS_SSM_API Session() = default;
    AWS_SSM_API Session(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    Session& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node that the Session Manager session connected to.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    Session& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the session. For example, "Connected" or "Terminated".</p>
     */
    inline SessionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Session& WithStatus(SessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO-8601 Extended format, when the session began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    Session& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO-8601 Extended format, when the session was
     * terminated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    Session& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Session Manager SSM document used to define the parameters
     * and plugin settings for the session. For example,
     * <code>SSM-SessionManagerRunShell</code>.</p>
     */
    inline const Aws::String& GetDocumentName() const { return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    template<typename DocumentNameT = Aws::String>
    void SetDocumentName(DocumentNameT&& value) { m_documentNameHasBeenSet = true; m_documentName = std::forward<DocumentNameT>(value); }
    template<typename DocumentNameT = Aws::String>
    Session& WithDocumentName(DocumentNameT&& value) { SetDocumentName(std::forward<DocumentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services user that started the session.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    Session& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for connecting to the instance.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    Session& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::String>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::String>
    Session& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const SessionManagerOutputUrl& GetOutputUrl() const { return m_outputUrl; }
    inline bool OutputUrlHasBeenSet() const { return m_outputUrlHasBeenSet; }
    template<typename OutputUrlT = SessionManagerOutputUrl>
    void SetOutputUrl(OutputUrlT&& value) { m_outputUrlHasBeenSet = true; m_outputUrl = std::forward<OutputUrlT>(value); }
    template<typename OutputUrlT = SessionManagerOutputUrl>
    Session& WithOutputUrl(OutputUrlT&& value) { SetOutputUrl(std::forward<OutputUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration of a session before it terminates.</p>
     */
    inline const Aws::String& GetMaxSessionDuration() const { return m_maxSessionDuration; }
    inline bool MaxSessionDurationHasBeenSet() const { return m_maxSessionDurationHasBeenSet; }
    template<typename MaxSessionDurationT = Aws::String>
    void SetMaxSessionDuration(MaxSessionDurationT&& value) { m_maxSessionDurationHasBeenSet = true; m_maxSessionDuration = std::forward<MaxSessionDurationT>(value); }
    template<typename MaxSessionDurationT = Aws::String>
    Session& WithMaxSessionDuration(MaxSessionDurationT&& value) { SetMaxSessionDuration(std::forward<MaxSessionDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>Standard</code> access type is the default for Session Manager
     * sessions. <code>JustInTime</code> is the access type for <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-just-in-time-node-access.html">Just-in-time
     * node access</a>.</p>
     */
    inline AccessType GetAccessType() const { return m_accessType; }
    inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }
    inline void SetAccessType(AccessType value) { m_accessTypeHasBeenSet = true; m_accessType = value; }
    inline Session& WithAccessType(AccessType value) { SetAccessType(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    SessionStatus m_status{SessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
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

    AccessType m_accessType{AccessType::NOT_SET};
    bool m_accessTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
