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
   * <p>Describes stack or user permissions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Permission">AWS
   * API Reference</a></p>
   */
  class Permission
  {
  public:
    AWS_OPSWORKS_API Permission() = default;
    AWS_OPSWORKS_API Permission(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Permission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A stack ID.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    Permission& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for an Identity and Access Management (IAM)
     * role. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetIamUserArn() const { return m_iamUserArn; }
    inline bool IamUserArnHasBeenSet() const { return m_iamUserArnHasBeenSet; }
    template<typename IamUserArnT = Aws::String>
    void SetIamUserArn(IamUserArnT&& value) { m_iamUserArnHasBeenSet = true; m_iamUserArn = std::forward<IamUserArnT>(value); }
    template<typename IamUserArnT = Aws::String>
    Permission& WithIamUserArn(IamUserArnT&& value) { SetIamUserArn(std::forward<IamUserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the user can use SSH.</p>
     */
    inline bool GetAllowSsh() const { return m_allowSsh; }
    inline bool AllowSshHasBeenSet() const { return m_allowSshHasBeenSet; }
    inline void SetAllowSsh(bool value) { m_allowSshHasBeenSet = true; m_allowSsh = value; }
    inline Permission& WithAllowSsh(bool value) { SetAllowSsh(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the user can use <b>sudo</b>.</p>
     */
    inline bool GetAllowSudo() const { return m_allowSudo; }
    inline bool AllowSudoHasBeenSet() const { return m_allowSudoHasBeenSet; }
    inline void SetAllowSudo(bool value) { m_allowSudoHasBeenSet = true; m_allowSudo = value; }
    inline Permission& WithAllowSudo(bool value) { SetAllowSudo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's permission level, which must be the following:</p> <ul> <li> <p>
     * <code>deny</code> </p> </li> <li> <p> <code>show</code> </p> </li> <li> <p>
     * <code>deploy</code> </p> </li> <li> <p> <code>manage</code> </p> </li> <li> <p>
     * <code>iam_only</code> </p> </li> </ul> <p>For more information on the
     * permissions associated with these levels, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
     * User Permissions</a> </p>
     */
    inline const Aws::String& GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    template<typename LevelT = Aws::String>
    void SetLevel(LevelT&& value) { m_levelHasBeenSet = true; m_level = std::forward<LevelT>(value); }
    template<typename LevelT = Aws::String>
    Permission& WithLevel(LevelT&& value) { SetLevel(std::forward<LevelT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_iamUserArn;
    bool m_iamUserArnHasBeenSet = false;

    bool m_allowSsh{false};
    bool m_allowSshHasBeenSet = false;

    bool m_allowSudo{false};
    bool m_allowSudoHasBeenSet = false;

    Aws::String m_level;
    bool m_levelHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
