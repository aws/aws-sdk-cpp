/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SheetLayoutGroupMemberType.h>

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
 * <p>A member of a sheet layout group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetLayoutGroupMember">AWS
 * API Reference</a></p>
 */
class SheetLayoutGroupMember {
 public:
  AWS_QUICKSIGHT_API SheetLayoutGroupMember() = default;
  AWS_QUICKSIGHT_API SheetLayoutGroupMember(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SheetLayoutGroupMember& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the group member.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  SheetLayoutGroupMember& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the group member.</p>
   */
  inline SheetLayoutGroupMemberType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(SheetLayoutGroupMemberType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline SheetLayoutGroupMember& WithType(SheetLayoutGroupMemberType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  SheetLayoutGroupMemberType m_type{SheetLayoutGroupMemberType::NOT_SET};
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
