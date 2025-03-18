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
   * <p>Describes the user capacity for a pool of WorkSpaces.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/Capacity">AWS
   * API Reference</a></p>
   */
  class Capacity
  {
  public:
    AWS_WORKSPACES_API Capacity() = default;
    AWS_WORKSPACES_API Capacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Capacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The desired number of user sessions for the WorkSpaces in the pool.</p>
     */
    inline int GetDesiredUserSessions() const { return m_desiredUserSessions; }
    inline bool DesiredUserSessionsHasBeenSet() const { return m_desiredUserSessionsHasBeenSet; }
    inline void SetDesiredUserSessions(int value) { m_desiredUserSessionsHasBeenSet = true; m_desiredUserSessions = value; }
    inline Capacity& WithDesiredUserSessions(int value) { SetDesiredUserSessions(value); return *this;}
    ///@}
  private:

    int m_desiredUserSessions{0};
    bool m_desiredUserSessionsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
