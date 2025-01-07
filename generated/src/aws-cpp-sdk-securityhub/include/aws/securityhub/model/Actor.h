/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ActorUser.h>
#include <aws/securityhub/model/ActorSession.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Information about the threat actor identified in an Amazon GuardDuty
   * Extended Threat Detection attack sequence. GuardDuty generates an attack
   * sequence finding when multiple events align to a potentially suspicious
   * activity. To receive GuardDuty attack sequence findings in Security Hub, you
   * must have GuardDuty enabled. For more information, see <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty-extended-threat-detection.html">GuardDuty
   * Extended Threat Detection </a> in the <i>Amazon GuardDuty User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Actor">AWS
   * API Reference</a></p>
   */
  class Actor
  {
  public:
    AWS_SECURITYHUB_API Actor();
    AWS_SECURITYHUB_API Actor(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Actor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the threat actor. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Actor& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Actor& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Actor& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains information about the user credentials used by the threat
     * actor.</p>
     */
    inline const ActorUser& GetUser() const{ return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(const ActorUser& value) { m_userHasBeenSet = true; m_user = value; }
    inline void SetUser(ActorUser&& value) { m_userHasBeenSet = true; m_user = std::move(value); }
    inline Actor& WithUser(const ActorUser& value) { SetUser(value); return *this;}
    inline Actor& WithUser(ActorUser&& value) { SetUser(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains information about the user session where the activity
     * initiated.</p>
     */
    inline const ActorSession& GetSession() const{ return m_session; }
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }
    inline void SetSession(const ActorSession& value) { m_sessionHasBeenSet = true; m_session = value; }
    inline void SetSession(ActorSession&& value) { m_sessionHasBeenSet = true; m_session = std::move(value); }
    inline Actor& WithSession(const ActorSession& value) { SetSession(value); return *this;}
    inline Actor& WithSession(ActorSession&& value) { SetSession(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ActorUser m_user;
    bool m_userHasBeenSet = false;

    ActorSession m_session;
    bool m_sessionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
