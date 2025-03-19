/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/PrincipalType.h>
#include <aws/workdocs/model/RoleType.h>
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
   * <p>Describes the recipient type and ID, if available.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/SharePrincipal">AWS
   * API Reference</a></p>
   */
  class SharePrincipal
  {
  public:
    AWS_WORKDOCS_API SharePrincipal() = default;
    AWS_WORKDOCS_API SharePrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API SharePrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the recipient.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SharePrincipal& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the recipient.</p>
     */
    inline PrincipalType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PrincipalType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SharePrincipal& WithType(PrincipalType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the recipient.</p>
     */
    inline RoleType GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(RoleType value) { m_roleHasBeenSet = true; m_role = value; }
    inline SharePrincipal& WithRole(RoleType value) { SetRole(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    PrincipalType m_type{PrincipalType::NOT_SET};
    bool m_typeHasBeenSet = false;

    RoleType m_role{RoleType::NOT_SET};
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
