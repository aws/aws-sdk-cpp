/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class UpdateUserProfileRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API UpdateUserProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserProfile"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The user IAM ARN. This can also be a federated user's ARN.</p>
     */
    inline const Aws::String& GetIamUserArn() const { return m_iamUserArn; }
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }
    template<typename IamUserArnT = Aws::String>
    void SetIamUserArn(IamUserArnT&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::forward<IamUserArnT>(value); }
    template<typename IamUserArnT = Aws::String>
    UpdateUserProfileRequest& WithIamUserArn(IamUserArnT&& value) { SetIamUserArn(std::forward<IamUserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's SSH user name. The allowable characters are [a-z], [A-Z], [0-9],
     * '-', and '_'. If the specified name includes other punctuation marks, OpsWorks
     * Stacks removes them. For example, <code>my.name</code> will be changed to
     * <code>myname</code>. If you do not specify an SSH user name, OpsWorks Stacks
     * generates one from the IAM user name. </p>
     */
    inline const Aws::String& GetSshUsername() const { return m_sshUsername; }
    inline bool SshUsernameHasBeenSet() const { return m_sshUsernameHasBeenSet; }
    template<typename SshUsernameT = Aws::String>
    void SetSshUsername(SshUsernameT&& value) { m_sshUsernameHasBeenSet = true; m_sshUsername = std::forward<SshUsernameT>(value); }
    template<typename SshUsernameT = Aws::String>
    UpdateUserProfileRequest& WithSshUsername(SshUsernameT&& value) { SetSshUsername(std::forward<SshUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's new SSH public key.</p>
     */
    inline const Aws::String& GetSshPublicKey() const { return m_sshPublicKey; }
    inline bool SshPublicKeyHasBeenSet() const { return m_sshPublicKeyHasBeenSet; }
    template<typename SshPublicKeyT = Aws::String>
    void SetSshPublicKey(SshPublicKeyT&& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = std::forward<SshPublicKeyT>(value); }
    template<typename SshPublicKeyT = Aws::String>
    UpdateUserProfileRequest& WithSshPublicKey(SshPublicKeyT&& value) { SetSshPublicKey(std::forward<SshPublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether users can specify their own SSH public key through the My Settings
     * page. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-settingsshkey.html">Managing
     * User Permissions</a>.</p>
     */
    inline bool GetAllowSelfManagement() const { return m_allowSelfManagement; }
    inline bool AllowSelfManagementHasBeenSet() const { return m_allowSelfManagementHasBeenSet; }
    inline void SetAllowSelfManagement(bool value) { m_allowSelfManagementHasBeenSet = true; m_allowSelfManagement = value; }
    inline UpdateUserProfileRequest& WithAllowSelfManagement(bool value) { SetAllowSelfManagement(value); return *this;}
    ///@}
  private:

    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet = false;

    Aws::String m_sshUsername;
    bool m_sshUsernameHasBeenSet = false;

    Aws::String m_sshPublicKey;
    bool m_sshPublicKeyHasBeenSet = false;

    bool m_allowSelfManagement{false};
    bool m_allowSelfManagementHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
