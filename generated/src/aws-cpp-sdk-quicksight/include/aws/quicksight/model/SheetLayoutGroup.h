/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SheetLayoutGroupMember.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A group of elements within a sheet layout.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetLayoutGroup">AWS
 * API Reference</a></p>
 */
class SheetLayoutGroup {
 public:
  AWS_QUICKSIGHT_API SheetLayoutGroup() = default;
  AWS_QUICKSIGHT_API SheetLayoutGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SheetLayoutGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique identifier for the group.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  SheetLayoutGroup& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The members of the group.</p>
   */
  inline const Aws::Vector<SheetLayoutGroupMember>& GetMembers() const { return m_members; }
  inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }
  template <typename MembersT = Aws::Vector<SheetLayoutGroupMember>>
  void SetMembers(MembersT&& value) {
    m_membersHasBeenSet = true;
    m_members = std::forward<MembersT>(value);
  }
  template <typename MembersT = Aws::Vector<SheetLayoutGroupMember>>
  SheetLayoutGroup& WithMembers(MembersT&& value) {
    SetMembers(std::forward<MembersT>(value));
    return *this;
  }
  template <typename MembersT = SheetLayoutGroupMember>
  SheetLayoutGroup& AddMembers(MembersT&& value) {
    m_membersHasBeenSet = true;
    m_members.emplace_back(std::forward<MembersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::Vector<SheetLayoutGroupMember> m_members;
  bool m_idHasBeenSet = false;
  bool m_membersHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
