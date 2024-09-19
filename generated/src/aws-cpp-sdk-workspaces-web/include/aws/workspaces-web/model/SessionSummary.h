/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/SessionStatus.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>Summary information about a secure browser session.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/SessionSummary">AWS
   * API Reference</a></p>
   */
  class SessionSummary
  {
  public:
    AWS_WORKSPACESWEB_API SessionSummary();
    AWS_WORKSPACESWEB_API SessionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API SessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The end time of the session.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline SessionSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline SessionSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }
    inline bool PortalArnHasBeenSet() const { return m_portalArnHasBeenSet; }
    inline void SetPortalArn(const Aws::String& value) { m_portalArnHasBeenSet = true; m_portalArn = value; }
    inline void SetPortalArn(Aws::String&& value) { m_portalArnHasBeenSet = true; m_portalArn = std::move(value); }
    inline void SetPortalArn(const char* value) { m_portalArnHasBeenSet = true; m_portalArn.assign(value); }
    inline SessionSummary& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}
    inline SessionSummary& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}
    inline SessionSummary& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline SessionSummary& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline SessionSummary& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline SessionSummary& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the session.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline SessionSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline SessionSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the session.</p>
     */
    inline const SessionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SessionSummary& WithStatus(const SessionStatus& value) { SetStatus(value); return *this;}
    inline SessionSummary& WithStatus(SessionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the session.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline SessionSummary& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline SessionSummary& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline SessionSummary& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_portalArn;
    bool m_portalArnHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    SessionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
