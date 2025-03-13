/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/model/PermissionOutputActionEnum.h>
#include <aws/qapps/model/PrincipalOutput.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>The permission granted to the Amazon Q App.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/PermissionOutput">AWS
   * API Reference</a></p>
   */
  class PermissionOutput
  {
  public:
    AWS_QAPPS_API PermissionOutput() = default;
    AWS_QAPPS_API PermissionOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API PermissionOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action associated with the permission.</p>
     */
    inline PermissionOutputActionEnum GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(PermissionOutputActionEnum value) { m_actionHasBeenSet = true; m_action = value; }
    inline PermissionOutput& WithAction(PermissionOutputActionEnum value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal user to which the permission applies.</p>
     */
    inline const PrincipalOutput& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = PrincipalOutput>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = PrincipalOutput>
    PermissionOutput& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}
  private:

    PermissionOutputActionEnum m_action{PermissionOutputActionEnum::NOT_SET};
    bool m_actionHasBeenSet = false;

    PrincipalOutput m_principal;
    bool m_principalHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
