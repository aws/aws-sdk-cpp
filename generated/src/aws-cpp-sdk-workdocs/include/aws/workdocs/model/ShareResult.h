/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/RoleType.h>
#include <aws/workdocs/model/ShareStatusType.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the share results of a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/ShareResult">AWS
   * API Reference</a></p>
   */
  class ShareResult
  {
  public:
    AWS_WORKDOCS_API ShareResult();
    AWS_WORKDOCS_API ShareResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API ShareResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the principal.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline ShareResult& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline ShareResult& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline ShareResult& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the invited user.</p>
     */
    inline const Aws::String& GetInviteePrincipalId() const{ return m_inviteePrincipalId; }
    inline bool InviteePrincipalIdHasBeenSet() const { return m_inviteePrincipalIdHasBeenSet; }
    inline void SetInviteePrincipalId(const Aws::String& value) { m_inviteePrincipalIdHasBeenSet = true; m_inviteePrincipalId = value; }
    inline void SetInviteePrincipalId(Aws::String&& value) { m_inviteePrincipalIdHasBeenSet = true; m_inviteePrincipalId = std::move(value); }
    inline void SetInviteePrincipalId(const char* value) { m_inviteePrincipalIdHasBeenSet = true; m_inviteePrincipalId.assign(value); }
    inline ShareResult& WithInviteePrincipalId(const Aws::String& value) { SetInviteePrincipalId(value); return *this;}
    inline ShareResult& WithInviteePrincipalId(Aws::String&& value) { SetInviteePrincipalId(std::move(value)); return *this;}
    inline ShareResult& WithInviteePrincipalId(const char* value) { SetInviteePrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role.</p>
     */
    inline const RoleType& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const RoleType& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(RoleType&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline ShareResult& WithRole(const RoleType& value) { SetRole(value); return *this;}
    inline ShareResult& WithRole(RoleType&& value) { SetRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline const ShareStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ShareStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ShareStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ShareResult& WithStatus(const ShareStatusType& value) { SetStatus(value); return *this;}
    inline ShareResult& WithStatus(ShareStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource that was shared.</p>
     */
    inline const Aws::String& GetShareId() const{ return m_shareId; }
    inline bool ShareIdHasBeenSet() const { return m_shareIdHasBeenSet; }
    inline void SetShareId(const Aws::String& value) { m_shareIdHasBeenSet = true; m_shareId = value; }
    inline void SetShareId(Aws::String&& value) { m_shareIdHasBeenSet = true; m_shareId = std::move(value); }
    inline void SetShareId(const char* value) { m_shareIdHasBeenSet = true; m_shareId.assign(value); }
    inline ShareResult& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}
    inline ShareResult& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}
    inline ShareResult& WithShareId(const char* value) { SetShareId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ShareResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ShareResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ShareResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_inviteePrincipalId;
    bool m_inviteePrincipalIdHasBeenSet = false;

    RoleType m_role;
    bool m_roleHasBeenSet = false;

    ShareStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_shareId;
    bool m_shareIdHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
