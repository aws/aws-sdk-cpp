/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>

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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the capacity status for a pool of WorkSpaces.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CapacityStatus">AWS
   * API Reference</a></p>
   */
  class CapacityStatus
  {
  public:
    AWS_WORKSPACES_API CapacityStatus() = default;
    AWS_WORKSPACES_API CapacityStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API CapacityStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of user sessions currently available for streaming from your
     * pool.</p> <p>AvailableUserSessions = ActualUserSessions - ActiveUserSessions</p>
     */
    inline int GetAvailableUserSessions() const { return m_availableUserSessions; }
    inline bool AvailableUserSessionsHasBeenSet() const { return m_availableUserSessionsHasBeenSet; }
    inline void SetAvailableUserSessions(int value) { m_availableUserSessionsHasBeenSet = true; m_availableUserSessions = value; }
    inline CapacityStatus& WithAvailableUserSessions(int value) { SetAvailableUserSessions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of sessions slots that are either running or pending. This
     * represents the total number of concurrent streaming sessions your pool can
     * support in a steady state.</p>
     */
    inline int GetDesiredUserSessions() const { return m_desiredUserSessions; }
    inline bool DesiredUserSessionsHasBeenSet() const { return m_desiredUserSessionsHasBeenSet; }
    inline void SetDesiredUserSessions(int value) { m_desiredUserSessionsHasBeenSet = true; m_desiredUserSessions = value; }
    inline CapacityStatus& WithDesiredUserSessions(int value) { SetDesiredUserSessions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of user sessions that are available for streaming or are
     * currently streaming in your pool.</p> <p>ActualUserSessions =
     * AvailableUserSessions + ActiveUserSessions</p>
     */
    inline int GetActualUserSessions() const { return m_actualUserSessions; }
    inline bool ActualUserSessionsHasBeenSet() const { return m_actualUserSessionsHasBeenSet; }
    inline void SetActualUserSessions(int value) { m_actualUserSessionsHasBeenSet = true; m_actualUserSessions = value; }
    inline CapacityStatus& WithActualUserSessions(int value) { SetActualUserSessions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of user sessions currently being used for your pool.</p>
     */
    inline int GetActiveUserSessions() const { return m_activeUserSessions; }
    inline bool ActiveUserSessionsHasBeenSet() const { return m_activeUserSessionsHasBeenSet; }
    inline void SetActiveUserSessions(int value) { m_activeUserSessionsHasBeenSet = true; m_activeUserSessions = value; }
    inline CapacityStatus& WithActiveUserSessions(int value) { SetActiveUserSessions(value); return *this;}
    ///@}
  private:

    int m_availableUserSessions{0};
    bool m_availableUserSessionsHasBeenSet = false;

    int m_desiredUserSessions{0};
    bool m_desiredUserSessionsHasBeenSet = false;

    int m_actualUserSessions{0};
    bool m_actualUserSessionsHasBeenSet = false;

    int m_activeUserSessions{0};
    bool m_activeUserSessionsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
