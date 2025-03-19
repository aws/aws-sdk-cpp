/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/ChildType.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains a list of child entities, either OUs or accounts.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Child">AWS
   * API Reference</a></p>
   */
  class Child
  {
  public:
    AWS_ORGANIZATIONS_API Child() = default;
    AWS_ORGANIZATIONS_API Child(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Child& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) of this child entity.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a child ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Account</b> - A string that
     * consists of exactly 12 digits.</p> </li> <li> <p> <b>Organizational unit
     * (OU)</b> - A string that begins with "ou-" followed by from 4 to 32 lowercase
     * letters or digits (the ID of the root that contains the OU). This string is
     * followed by a second "-" dash and from 8 to 32 additional lowercase letters or
     * digits.</p> </li> </ul>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Child& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of this child entity.</p>
     */
    inline ChildType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChildType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Child& WithType(ChildType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ChildType m_type{ChildType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
