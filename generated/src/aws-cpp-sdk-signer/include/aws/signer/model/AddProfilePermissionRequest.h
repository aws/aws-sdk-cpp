/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace signer
{
namespace Model
{

  /**
   */
  class AddProfilePermissionRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API AddProfilePermissionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddProfilePermission"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The human-readable name of the signing profile.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    AddProfilePermissionRequest& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the signing profile.</p>
     */
    inline const Aws::String& GetProfileVersion() const { return m_profileVersion; }
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }
    template<typename ProfileVersionT = Aws::String>
    void SetProfileVersion(ProfileVersionT&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::forward<ProfileVersionT>(value); }
    template<typename ProfileVersionT = Aws::String>
    AddProfilePermissionRequest& WithProfileVersion(ProfileVersionT&& value) { SetProfileVersion(std::forward<ProfileVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For cross-account signing. Grant a designated account permission to perform
     * one or more of the following actions. Each action is associated with a specific
     * API's operations. For more information about cross-account signing, see <a
     * href="https://docs.aws.amazon.com/signer/latest/developerguide/signing-profile-cross-account.html">Using
     * cross-account signing with signing profiles</a> in the <i>AWS Signer Developer
     * Guide</i>.</p> <p>You can designate the following actions to an account.</p>
     * <ul> <li> <p> <code>signer:StartSigningJob</code>. This action isn't supported
     * for container image workflows. For details, see <a>StartSigningJob</a>.</p>
     * </li> <li> <p> <code>signer:SignPayload</code>. This action isn't supported for
     * AWS Lambda workflows. For details, see <a>SignPayload</a> </p> </li> <li> <p>
     * <code>signer:GetSigningProfile</code>. For details, see
     * <a>GetSigningProfile</a>.</p> </li> <li> <p>
     * <code>signer:RevokeSignature</code>. For details, see
     * <a>RevokeSignature</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    AddProfilePermissionRequest& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS principal receiving cross-account permissions. This may be an IAM
     * role or another AWS account ID.</p>
     */
    inline const Aws::String& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::String>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::String>
    AddProfilePermissionRequest& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    AddProfilePermissionRequest& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the cross-account permission statement.</p>
     */
    inline const Aws::String& GetStatementId() const { return m_statementId; }
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }
    template<typename StatementIdT = Aws::String>
    void SetStatementId(StatementIdT&& value) { m_statementIdHasBeenSet = true; m_statementId = std::forward<StatementIdT>(value); }
    template<typename StatementIdT = Aws::String>
    AddProfilePermissionRequest& WithStatementId(StatementIdT&& value) { SetStatementId(std::forward<StatementIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileVersion;
    bool m_profileVersionHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
