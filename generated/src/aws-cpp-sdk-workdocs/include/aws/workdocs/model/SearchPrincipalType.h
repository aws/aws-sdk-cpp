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
    AWS_WORKDOCS_API SearchPrincipalType();
    AWS_WORKDOCS_API SearchPrincipalType(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API SearchPrincipalType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>UserIds or GroupIds.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>UserIds or GroupIds.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>UserIds or GroupIds.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>UserIds or GroupIds.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>UserIds or GroupIds.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>UserIds or GroupIds.</p>
     */
    inline SearchPrincipalType& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>UserIds or GroupIds.</p>
     */
    inline SearchPrincipalType& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>UserIds or GroupIds.</p>
     */
    inline SearchPrincipalType& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Role of a User or Group.</p>
     */
    inline const Aws::Vector<PrincipalRoleType>& GetRoles() const{ return m_roles; }

    /**
     * <p>The Role of a User or Group.</p>
     */
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }

    /**
     * <p>The Role of a User or Group.</p>
     */
    inline void SetRoles(const Aws::Vector<PrincipalRoleType>& value) { m_rolesHasBeenSet = true; m_roles = value; }

    /**
     * <p>The Role of a User or Group.</p>
     */
    inline void SetRoles(Aws::Vector<PrincipalRoleType>&& value) { m_rolesHasBeenSet = true; m_roles = std::move(value); }

    /**
     * <p>The Role of a User or Group.</p>
     */
    inline SearchPrincipalType& WithRoles(const Aws::Vector<PrincipalRoleType>& value) { SetRoles(value); return *this;}

    /**
     * <p>The Role of a User or Group.</p>
     */
    inline SearchPrincipalType& WithRoles(Aws::Vector<PrincipalRoleType>&& value) { SetRoles(std::move(value)); return *this;}

    /**
     * <p>The Role of a User or Group.</p>
     */
    inline SearchPrincipalType& AddRoles(const PrincipalRoleType& value) { m_rolesHasBeenSet = true; m_roles.push_back(value); return *this; }

    /**
     * <p>The Role of a User or Group.</p>
     */
    inline SearchPrincipalType& AddRoles(PrincipalRoleType&& value) { m_rolesHasBeenSet = true; m_roles.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<PrincipalRoleType> m_roles;
    bool m_rolesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
