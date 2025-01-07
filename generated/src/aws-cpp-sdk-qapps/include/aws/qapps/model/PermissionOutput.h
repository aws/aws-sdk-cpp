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
    AWS_QAPPS_API PermissionOutput();
    AWS_QAPPS_API PermissionOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API PermissionOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action associated with the permission.</p>
     */
    inline const PermissionOutputActionEnum& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const PermissionOutputActionEnum& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(PermissionOutputActionEnum&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline PermissionOutput& WithAction(const PermissionOutputActionEnum& value) { SetAction(value); return *this;}
    inline PermissionOutput& WithAction(PermissionOutputActionEnum&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal user to which the permission applies.</p>
     */
    inline const PrincipalOutput& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const PrincipalOutput& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(PrincipalOutput&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline PermissionOutput& WithPrincipal(const PrincipalOutput& value) { SetPrincipal(value); return *this;}
    inline PermissionOutput& WithPrincipal(PrincipalOutput&& value) { SetPrincipal(std::move(value)); return *this;}
    ///@}
  private:

    PermissionOutputActionEnum m_action;
    bool m_actionHasBeenSet = false;

    PrincipalOutput m_principal;
    bool m_principalHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
