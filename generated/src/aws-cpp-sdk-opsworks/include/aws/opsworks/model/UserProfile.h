/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a user's SSH information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UserProfile">AWS
   * API Reference</a></p>
   */
  class UserProfile
  {
  public:
    AWS_OPSWORKS_API UserProfile() = default;
    AWS_OPSWORKS_API UserProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API UserProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user's IAM ARN.</p>
     */
    inline const Aws::String& GetIamUserArn() const { return m_iamUserArn; }
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }
    template<typename IamUserArnT = Aws::String>
    void SetIamUserArn(IamUserArnT&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::forward<IamUserArnT>(value); }
    template<typename IamUserArnT = Aws::String>
    UserProfile& WithIamUserArn(IamUserArnT&& value) { SetIamUserArn(std::forward<IamUserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UserProfile& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's SSH user name.</p>
     */
    inline const Aws::String& GetSshUsername() const { return m_sshUsername; }
    inline bool SshUsernameHasBeenSet() const { return m_sshUsernameHasBeenSet; }
    template<typename SshUsernameT = Aws::String>
    void SetSshUsername(SshUsernameT&& value) { m_sshUsernameHasBeenSet = true; m_sshUsername = std::forward<SshUsernameT>(value); }
    template<typename SshUsernameT = Aws::String>
    UserProfile& WithSshUsername(SshUsernameT&& value) { SetSshUsername(std::forward<SshUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's SSH public key.</p>
     */
    inline const Aws::String& GetSshPublicKey() const { return m_sshPublicKey; }
    inline bool SshPublicKeyHasBeenSet() const { return m_sshPublicKeyHasBeenSet; }
    template<typename SshPublicKeyT = Aws::String>
    void SetSshPublicKey(SshPublicKeyT&& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = std::forward<SshPublicKeyT>(value); }
    template<typename SshPublicKeyT = Aws::String>
    UserProfile& WithSshPublicKey(SshPublicKeyT&& value) { SetSshPublicKey(std::forward<SshPublicKeyT>(value)); return *this;}
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
    inline UserProfile& WithAllowSelfManagement(bool value) { SetAllowSelfManagement(value); return *this;}
    ///@}
  private:

    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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
