﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/model/PermissionInputActionEnum.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>The permission to grant or revoke for a Amazon Q App.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/PermissionInput">AWS
   * API Reference</a></p>
   */
  class PermissionInput
  {
  public:
    AWS_QAPPS_API PermissionInput();
    AWS_QAPPS_API PermissionInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API PermissionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action associated with the permission.</p>
     */
    inline const PermissionInputActionEnum& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const PermissionInputActionEnum& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(PermissionInputActionEnum&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline PermissionInput& WithAction(const PermissionInputActionEnum& value) { SetAction(value); return *this;}
    inline PermissionInput& WithAction(PermissionInputActionEnum&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal user to which the permission applies.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }
    inline PermissionInput& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}
    inline PermissionInput& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}
    inline PermissionInput& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}
    ///@}
  private:

    PermissionInputActionEnum m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
