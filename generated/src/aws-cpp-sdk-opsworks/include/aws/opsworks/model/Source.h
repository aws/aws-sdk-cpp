/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/model/SourceType.h>
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
   * <p>Contains the information required to retrieve an app or cookbook from a
   * repository. For more information, see <a
   * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Creating
   * Apps</a> or <a
   * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook.html">Custom
   * Recipes and Cookbooks</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Source">AWS API
   * Reference</a></p>
   */
  class Source
  {
  public:
    AWS_OPSWORKS_API Source() = default;
    AWS_OPSWORKS_API Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The repository type.</p>
     */
    inline SourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Source& WithType(SourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source URL. The following is an example of an Amazon S3 source URL:
     * <code>https://s3.amazonaws.com/opsworks-demo-bucket/opsworks_cookbook_demo.tar.gz</code>.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    Source& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter depends on the repository type.</p> <ul> <li> <p>For Amazon S3
     * bundles, set <code>Username</code> to the appropriate IAM access key ID.</p>
     * </li> <li> <p>For HTTP bundles, Git repositories, and Subversion repositories,
     * set <code>Username</code> to the user name.</p> </li> </ul>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    Source& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When included in a request, the parameter depends on the repository type.</p>
     * <ul> <li> <p>For Amazon S3 bundles, set <code>Password</code> to the appropriate
     * IAM secret access key.</p> </li> <li> <p>For HTTP bundles and Subversion
     * repositories, set <code>Password</code> to the password.</p> </li> </ul> <p>For
     * more information on how to safely handle IAM credentials, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">https://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html</a>.</p>
     * <p>In responses, OpsWorks Stacks returns <code>*****FILTERED*****</code> instead
     * of the actual value.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    Source& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In requests, the repository's SSH key.</p> <p>In responses, OpsWorks Stacks
     * returns <code>*****FILTERED*****</code> instead of the actual value.</p>
     */
    inline const Aws::String& GetSshKey() const { return m_sshKey; }
    inline bool SshKeyHasBeenSet() const { return m_sshKeyHasBeenSet; }
    template<typename SshKeyT = Aws::String>
    void SetSshKey(SshKeyT&& value) { m_sshKeyHasBeenSet = true; m_sshKey = std::forward<SshKeyT>(value); }
    template<typename SshKeyT = Aws::String>
    Source& WithSshKey(SshKeyT&& value) { SetSshKey(std::forward<SshKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application's version. OpsWorks Stacks enables you to easily deploy new
     * versions of an application. One of the simplest approaches is to have branches
     * or revisions in your repository that represent different versions that can
     * potentially be deployed.</p>
     */
    inline const Aws::String& GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    template<typename RevisionT = Aws::String>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = Aws::String>
    Source& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}
  private:

    SourceType m_type{SourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_sshKey;
    bool m_sshKeyHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
