﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/RoleType.h>
#include <aws/workdocs/model/RolePermissionType.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the permissions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/PermissionInfo">AWS
   * API Reference</a></p>
   */
  class PermissionInfo
  {
  public:
    AWS_WORKDOCS_API PermissionInfo();
    AWS_WORKDOCS_API PermissionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API PermissionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The role of the user.</p>
     */
    inline const RoleType& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const RoleType& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(RoleType&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline PermissionInfo& WithRole(const RoleType& value) { SetRole(value); return *this;}
    inline PermissionInfo& WithRole(RoleType&& value) { SetRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of permissions.</p>
     */
    inline const RolePermissionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RolePermissionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RolePermissionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PermissionInfo& WithType(const RolePermissionType& value) { SetType(value); return *this;}
    inline PermissionInfo& WithType(RolePermissionType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    RoleType m_role;
    bool m_roleHasBeenSet = false;

    RolePermissionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
