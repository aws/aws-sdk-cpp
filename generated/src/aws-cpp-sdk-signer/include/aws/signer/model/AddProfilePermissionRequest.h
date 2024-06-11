﻿/**
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
    AWS_SIGNER_API AddProfilePermissionRequest();

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
    inline const Aws::String& GetProfileName() const{ return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }
    inline AddProfilePermissionRequest& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}
    inline AddProfilePermissionRequest& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}
    inline AddProfilePermissionRequest& WithProfileName(const char* value) { SetProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the signing profile.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersionHasBeenSet = true; m_profileVersion = value; }
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::move(value); }
    inline void SetProfileVersion(const char* value) { m_profileVersionHasBeenSet = true; m_profileVersion.assign(value); }
    inline AddProfilePermissionRequest& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}
    inline AddProfilePermissionRequest& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}
    inline AddProfilePermissionRequest& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}
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
    inline const Aws::String& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }
    inline AddProfilePermissionRequest& WithAction(const Aws::String& value) { SetAction(value); return *this;}
    inline AddProfilePermissionRequest& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}
    inline AddProfilePermissionRequest& WithAction(const char* value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS principal receiving cross-account permissions. This may be an IAM
     * role or another AWS account ID.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }
    inline AddProfilePermissionRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}
    inline AddProfilePermissionRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}
    inline AddProfilePermissionRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }
    inline AddProfilePermissionRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline AddProfilePermissionRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline AddProfilePermissionRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the cross-account permission statement.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }
    inline AddProfilePermissionRequest& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}
    inline AddProfilePermissionRequest& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}
    inline AddProfilePermissionRequest& WithStatementId(const char* value) { SetStatementId(value); return *this;}
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
