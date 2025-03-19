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
    AWS_WORKDOCS_API ShareResult() = default;
    AWS_WORKDOCS_API ShareResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API ShareResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the principal.</p>
     */
    inline const Aws::String& GetPrincipalId() const { return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    template<typename PrincipalIdT = Aws::String>
    void SetPrincipalId(PrincipalIdT&& value) { m_principalIdHasBeenSet = true; m_principalId = std::forward<PrincipalIdT>(value); }
    template<typename PrincipalIdT = Aws::String>
    ShareResult& WithPrincipalId(PrincipalIdT&& value) { SetPrincipalId(std::forward<PrincipalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the invited user.</p>
     */
    inline const Aws::String& GetInviteePrincipalId() const { return m_inviteePrincipalId; }
    inline bool InviteePrincipalIdHasBeenSet() const { return m_inviteePrincipalIdHasBeenSet; }
    template<typename InviteePrincipalIdT = Aws::String>
    void SetInviteePrincipalId(InviteePrincipalIdT&& value) { m_inviteePrincipalIdHasBeenSet = true; m_inviteePrincipalId = std::forward<InviteePrincipalIdT>(value); }
    template<typename InviteePrincipalIdT = Aws::String>
    ShareResult& WithInviteePrincipalId(InviteePrincipalIdT&& value) { SetInviteePrincipalId(std::forward<InviteePrincipalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role.</p>
     */
    inline RoleType GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(RoleType value) { m_roleHasBeenSet = true; m_role = value; }
    inline ShareResult& WithRole(RoleType value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline ShareStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ShareStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline ShareResult& WithStatus(ShareStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource that was shared.</p>
     */
    inline const Aws::String& GetShareId() const { return m_shareId; }
    inline bool ShareIdHasBeenSet() const { return m_shareIdHasBeenSet; }
    template<typename ShareIdT = Aws::String>
    void SetShareId(ShareIdT&& value) { m_shareIdHasBeenSet = true; m_shareId = std::forward<ShareIdT>(value); }
    template<typename ShareIdT = Aws::String>
    ShareResult& WithShareId(ShareIdT&& value) { SetShareId(std::forward<ShareIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ShareResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_inviteePrincipalId;
    bool m_inviteePrincipalIdHasBeenSet = false;

    RoleType m_role{RoleType::NOT_SET};
    bool m_roleHasBeenSet = false;

    ShareStatusType m_status{ShareStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_shareId;
    bool m_shareIdHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
