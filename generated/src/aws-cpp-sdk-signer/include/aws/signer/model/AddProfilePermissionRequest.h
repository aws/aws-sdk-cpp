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
    AWS_SIGNER_API AddProfilePermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddProfilePermission"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;


    /**
     * <p>The human-readable name of the signing profile.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>The human-readable name of the signing profile.</p>
     */
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }

    /**
     * <p>The human-readable name of the signing profile.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }

    /**
     * <p>The human-readable name of the signing profile.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }

    /**
     * <p>The human-readable name of the signing profile.</p>
     */
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }

    /**
     * <p>The human-readable name of the signing profile.</p>
     */
    inline AddProfilePermissionRequest& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The human-readable name of the signing profile.</p>
     */
    inline AddProfilePermissionRequest& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The human-readable name of the signing profile.</p>
     */
    inline AddProfilePermissionRequest& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>The version of the signing profile.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }

    /**
     * <p>The version of the signing profile.</p>
     */
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }

    /**
     * <p>The version of the signing profile.</p>
     */
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersionHasBeenSet = true; m_profileVersion = value; }

    /**
     * <p>The version of the signing profile.</p>
     */
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::move(value); }

    /**
     * <p>The version of the signing profile.</p>
     */
    inline void SetProfileVersion(const char* value) { m_profileVersionHasBeenSet = true; m_profileVersion.assign(value); }

    /**
     * <p>The version of the signing profile.</p>
     */
    inline AddProfilePermissionRequest& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}

    /**
     * <p>The version of the signing profile.</p>
     */
    inline AddProfilePermissionRequest& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the signing profile.</p>
     */
    inline AddProfilePermissionRequest& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}


    /**
     * <p>The AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>The AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>The AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline AddProfilePermissionRequest& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>The AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline AddProfilePermissionRequest& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline AddProfilePermissionRequest& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>The AWS principal receiving cross-account permissions. This may be an IAM
     * role or another AWS account ID.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The AWS principal receiving cross-account permissions. This may be an IAM
     * role or another AWS account ID.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The AWS principal receiving cross-account permissions. This may be an IAM
     * role or another AWS account ID.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The AWS principal receiving cross-account permissions. This may be an IAM
     * role or another AWS account ID.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The AWS principal receiving cross-account permissions. This may be an IAM
     * role or another AWS account ID.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The AWS principal receiving cross-account permissions. This may be an IAM
     * role or another AWS account ID.</p>
     */
    inline AddProfilePermissionRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The AWS principal receiving cross-account permissions. This may be an IAM
     * role or another AWS account ID.</p>
     */
    inline AddProfilePermissionRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The AWS principal receiving cross-account permissions. This may be an IAM
     * role or another AWS account ID.</p>
     */
    inline AddProfilePermissionRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}


    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline AddProfilePermissionRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline AddProfilePermissionRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the current profile revision.</p>
     */
    inline AddProfilePermissionRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>A unique identifier for the cross-account permission statement.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }

    /**
     * <p>A unique identifier for the cross-account permission statement.</p>
     */
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }

    /**
     * <p>A unique identifier for the cross-account permission statement.</p>
     */
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

    /**
     * <p>A unique identifier for the cross-account permission statement.</p>
     */
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }

    /**
     * <p>A unique identifier for the cross-account permission statement.</p>
     */
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }

    /**
     * <p>A unique identifier for the cross-account permission statement.</p>
     */
    inline AddProfilePermissionRequest& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}

    /**
     * <p>A unique identifier for the cross-account permission statement.</p>
     */
    inline AddProfilePermissionRequest& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the cross-account permission statement.</p>
     */
    inline AddProfilePermissionRequest& WithStatementId(const char* value) { SetStatementId(value); return *this;}

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
