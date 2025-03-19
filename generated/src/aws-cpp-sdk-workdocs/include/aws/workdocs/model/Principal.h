/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/PrincipalType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workdocs/model/PermissionInfo.h>
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
   * <p>Describes a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/Principal">AWS
   * API Reference</a></p>
   */
  class Principal
  {
  public:
    AWS_WORKDOCS_API Principal() = default;
    AWS_WORKDOCS_API Principal(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Principal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Principal& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline PrincipalType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PrincipalType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Principal& WithType(PrincipalType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permission information for the resource.</p>
     */
    inline const Aws::Vector<PermissionInfo>& GetRoles() const { return m_roles; }
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }
    template<typename RolesT = Aws::Vector<PermissionInfo>>
    void SetRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles = std::forward<RolesT>(value); }
    template<typename RolesT = Aws::Vector<PermissionInfo>>
    Principal& WithRoles(RolesT&& value) { SetRoles(std::forward<RolesT>(value)); return *this;}
    template<typename RolesT = PermissionInfo>
    Principal& AddRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles.emplace_back(std::forward<RolesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    PrincipalType m_type{PrincipalType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<PermissionInfo> m_roles;
    bool m_rolesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
