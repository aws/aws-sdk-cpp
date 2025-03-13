/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/MembershipType.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The sub groups that belong to a group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/MemberGroup">AWS
   * API Reference</a></p>
   */
  class MemberGroup
  {
  public:
    AWS_QBUSINESS_API MemberGroup() = default;
    AWS_QBUSINESS_API MemberGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API MemberGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the sub group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    MemberGroup& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the sub group.</p>
     */
    inline MembershipType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MembershipType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MemberGroup& WithType(MembershipType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    MembershipType m_type{MembershipType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
