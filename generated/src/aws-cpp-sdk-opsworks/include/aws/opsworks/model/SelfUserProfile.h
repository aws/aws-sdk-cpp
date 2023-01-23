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
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/SelfUserProfile">AWS
   * API Reference</a></p>
   */
  class SelfUserProfile
  {
  public:
    AWS_OPSWORKS_API SelfUserProfile();
    AWS_OPSWORKS_API SelfUserProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API SelfUserProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user's IAM ARN.</p>
     */
    inline const Aws::String& GetIamUserArn() const{ return m_iamUserArn; }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline void SetIamUserArn(const Aws::String& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = value; }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline void SetIamUserArn(Aws::String&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::move(value); }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline void SetIamUserArn(const char* value) { m_iamUserArnHasBeenSet = true; m_iamUserArn.assign(value); }

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline SelfUserProfile& WithIamUserArn(const Aws::String& value) { SetIamUserArn(value); return *this;}

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline SelfUserProfile& WithIamUserArn(Aws::String&& value) { SetIamUserArn(std::move(value)); return *this;}

    /**
     * <p>The user's IAM ARN.</p>
     */
    inline SelfUserProfile& WithIamUserArn(const char* value) { SetIamUserArn(value); return *this;}


    /**
     * <p>The user's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The user's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The user's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The user's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The user's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The user's name.</p>
     */
    inline SelfUserProfile& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The user's name.</p>
     */
    inline SelfUserProfile& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The user's name.</p>
     */
    inline SelfUserProfile& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The user's SSH user name.</p>
     */
    inline const Aws::String& GetSshUsername() const{ return m_sshUsername; }

    /**
     * <p>The user's SSH user name.</p>
     */
    inline bool SshUsernameHasBeenSet() const { return m_sshUsernameHasBeenSet; }

    /**
     * <p>The user's SSH user name.</p>
     */
    inline void SetSshUsername(const Aws::String& value) { m_sshUsernameHasBeenSet = true; m_sshUsername = value; }

    /**
     * <p>The user's SSH user name.</p>
     */
    inline void SetSshUsername(Aws::String&& value) { m_sshUsernameHasBeenSet = true; m_sshUsername = std::move(value); }

    /**
     * <p>The user's SSH user name.</p>
     */
    inline void SetSshUsername(const char* value) { m_sshUsernameHasBeenSet = true; m_sshUsername.assign(value); }

    /**
     * <p>The user's SSH user name.</p>
     */
    inline SelfUserProfile& WithSshUsername(const Aws::String& value) { SetSshUsername(value); return *this;}

    /**
     * <p>The user's SSH user name.</p>
     */
    inline SelfUserProfile& WithSshUsername(Aws::String&& value) { SetSshUsername(std::move(value)); return *this;}

    /**
     * <p>The user's SSH user name.</p>
     */
    inline SelfUserProfile& WithSshUsername(const char* value) { SetSshUsername(value); return *this;}


    /**
     * <p>The user's SSH public key.</p>
     */
    inline const Aws::String& GetSshPublicKey() const{ return m_sshPublicKey; }

    /**
     * <p>The user's SSH public key.</p>
     */
    inline bool SshPublicKeyHasBeenSet() const { return m_sshPublicKeyHasBeenSet; }

    /**
     * <p>The user's SSH public key.</p>
     */
    inline void SetSshPublicKey(const Aws::String& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = value; }

    /**
     * <p>The user's SSH public key.</p>
     */
    inline void SetSshPublicKey(Aws::String&& value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey = std::move(value); }

    /**
     * <p>The user's SSH public key.</p>
     */
    inline void SetSshPublicKey(const char* value) { m_sshPublicKeyHasBeenSet = true; m_sshPublicKey.assign(value); }

    /**
     * <p>The user's SSH public key.</p>
     */
    inline SelfUserProfile& WithSshPublicKey(const Aws::String& value) { SetSshPublicKey(value); return *this;}

    /**
     * <p>The user's SSH public key.</p>
     */
    inline SelfUserProfile& WithSshPublicKey(Aws::String&& value) { SetSshPublicKey(std::move(value)); return *this;}

    /**
     * <p>The user's SSH public key.</p>
     */
    inline SelfUserProfile& WithSshPublicKey(const char* value) { SetSshPublicKey(value); return *this;}

  private:

    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sshUsername;
    bool m_sshUsernameHasBeenSet = false;

    Aws::String m_sshPublicKey;
    bool m_sshPublicKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
