/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/ParentType.h>
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
   * <p>Contains information about either a root or an organizational unit (OU) that
   * can contain OUs or accounts in an organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Parent">AWS
   * API Reference</a></p>
   */
  class Parent
  {
  public:
    AWS_ORGANIZATIONS_API Parent();
    AWS_ORGANIZATIONS_API Parent(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Parent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) of the parent entity.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a parent ID string
     * requires one of the following:</p> <ul> <li> <p> <b>Root</b> - A string that
     * begins with "r-" followed by from 4 to 32 lowercase letters or digits.</p> </li>
     * <li> <p> <b>Organizational unit (OU)</b> - A string that begins with "ou-"
     * followed by from 4 to 32 lowercase letters or digits (the ID of the root that
     * the OU is in). This string is followed by a second "-" dash and from 8 to 32
     * additional lowercase letters or digits.</p> </li> </ul>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Parent& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Parent& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Parent& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the parent entity.</p>
     */
    inline const ParentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ParentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ParentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Parent& WithType(const ParentType& value) { SetType(value); return *this;}
    inline Parent& WithType(ParentType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ParentType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
