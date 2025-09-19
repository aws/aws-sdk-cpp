/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A <code>SignupResponse</code> object that contains a summary of a newly
   * created account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SignupResponse">AWS
   * API Reference</a></p>
   */
  class SignupResponse
  {
  public:
    AWS_QUICKSIGHT_API SignupResponse() = default;
    AWS_QUICKSIGHT_API SignupResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SignupResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Boolean that is <code>TRUE</code> if the QuickSight uses IAM as an
     * authentication method.</p>
     */
    inline bool GetIAMUser() const { return m_iAMUser; }
    inline bool IAMUserHasBeenSet() const { return m_iAMUserHasBeenSet; }
    inline void SetIAMUser(bool value) { m_iAMUserHasBeenSet = true; m_iAMUser = value; }
    inline SignupResponse& WithIAMUser(bool value) { SetIAMUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user login name for your QuickSight account.</p>
     */
    inline const Aws::String& GetUserLoginName() const { return m_userLoginName; }
    inline bool UserLoginNameHasBeenSet() const { return m_userLoginNameHasBeenSet; }
    template<typename UserLoginNameT = Aws::String>
    void SetUserLoginName(UserLoginNameT&& value) { m_userLoginNameHasBeenSet = true; m_userLoginName = std::forward<UserLoginNameT>(value); }
    template<typename UserLoginNameT = Aws::String>
    SignupResponse& WithUserLoginName(UserLoginNameT&& value) { SetUserLoginName(std::forward<UserLoginNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your QuickSight account.</p>
     */
    inline const Aws::String& GetAccountName() const { return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    template<typename AccountNameT = Aws::String>
    void SetAccountName(AccountNameT&& value) { m_accountNameHasBeenSet = true; m_accountName = std::forward<AccountNameT>(value); }
    template<typename AccountNameT = Aws::String>
    SignupResponse& WithAccountName(AccountNameT&& value) { SetAccountName(std::forward<AccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Active Directory that is being used to authenticate the
     * QuickSight account. Valid values are <code>SIMPLE_AD</code>,
     * <code>AD_CONNECTOR</code>, and <code>MICROSOFT_AD</code>.</p>
     */
    inline const Aws::String& GetDirectoryType() const { return m_directoryType; }
    inline bool DirectoryTypeHasBeenSet() const { return m_directoryTypeHasBeenSet; }
    template<typename DirectoryTypeT = Aws::String>
    void SetDirectoryType(DirectoryTypeT&& value) { m_directoryTypeHasBeenSet = true; m_directoryType = std::forward<DirectoryTypeT>(value); }
    template<typename DirectoryTypeT = Aws::String>
    SignupResponse& WithDirectoryType(DirectoryTypeT&& value) { SetDirectoryType(std::forward<DirectoryTypeT>(value)); return *this;}
    ///@}
  private:

    bool m_iAMUser{false};
    bool m_iAMUserHasBeenSet = false;

    Aws::String m_userLoginName;
    bool m_userLoginNameHasBeenSet = false;

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Aws::String m_directoryType;
    bool m_directoryTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
