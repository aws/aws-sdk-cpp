/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>A cross-account permission for a signing profile.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/Permission">AWS
   * API Reference</a></p>
   */
  class Permission
  {
  public:
    AWS_SIGNER_API Permission() = default;
    AWS_SIGNER_API Permission(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Permission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    Permission& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS principal that has been granted a cross-account permission.</p>
     */
    inline const Aws::String& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::String>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::String>
    Permission& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a cross-account permission statement.</p>
     */
    inline const Aws::String& GetStatementId() const { return m_statementId; }
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }
    template<typename StatementIdT = Aws::String>
    void SetStatementId(StatementIdT&& value) { m_statementIdHasBeenSet = true; m_statementId = std::forward<StatementIdT>(value); }
    template<typename StatementIdT = Aws::String>
    Permission& WithStatementId(StatementIdT&& value) { SetStatementId(std::forward<StatementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signing profile version that a permission applies to.</p>
     */
    inline const Aws::String& GetProfileVersion() const { return m_profileVersion; }
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }
    template<typename ProfileVersionT = Aws::String>
    void SetProfileVersion(ProfileVersionT&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::forward<ProfileVersionT>(value); }
    template<typename ProfileVersionT = Aws::String>
    Permission& WithProfileVersion(ProfileVersionT&& value) { SetProfileVersion(std::forward<ProfileVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;

    Aws::String m_profileVersion;
    bool m_profileVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
