/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workdocs/model/PrincipalRoleType.h>
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
   * <p>Filter based on UserIds or GroupIds.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/SearchPrincipalType">AWS
   * API Reference</a></p>
   */
  class SearchPrincipalType
  {
  public:
    AWS_WORKDOCS_API SearchPrincipalType() = default;
    AWS_WORKDOCS_API SearchPrincipalType(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API SearchPrincipalType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>UserIds or GroupIds.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SearchPrincipalType& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Role of a User or Group.</p>
     */
    inline const Aws::Vector<PrincipalRoleType>& GetRoles() const { return m_roles; }
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }
    template<typename RolesT = Aws::Vector<PrincipalRoleType>>
    void SetRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles = std::forward<RolesT>(value); }
    template<typename RolesT = Aws::Vector<PrincipalRoleType>>
    SearchPrincipalType& WithRoles(RolesT&& value) { SetRoles(std::forward<RolesT>(value)); return *this;}
    inline SearchPrincipalType& AddRoles(PrincipalRoleType value) { m_rolesHasBeenSet = true; m_roles.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<PrincipalRoleType> m_roles;
    bool m_rolesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
