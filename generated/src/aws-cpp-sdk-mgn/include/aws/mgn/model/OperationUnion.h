/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/DeleteOperation.h>
#include <aws/mgn/model/MergeOperation.h>
#include <aws/mgn/model/SplitOperation.h>
#include <aws/mgn/model/UpdateOperation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>A union type representing the operation to perform on a construct during a
 * mapping update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/OperationUnion">AWS
 * API Reference</a></p>
 */
class OperationUnion {
 public:
  AWS_MGN_API OperationUnion() = default;
  AWS_MGN_API OperationUnion(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API OperationUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A merge operation to combine constructs from different segments.</p>
   */
  inline const MergeOperation& GetMerge() const { return m_merge; }
  inline bool MergeHasBeenSet() const { return m_mergeHasBeenSet; }
  template <typename MergeT = MergeOperation>
  void SetMerge(MergeT&& value) {
    m_mergeHasBeenSet = true;
    m_merge = std::forward<MergeT>(value);
  }
  template <typename MergeT = MergeOperation>
  OperationUnion& WithMerge(MergeT&& value) {
    SetMerge(std::forward<MergeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A split operation to divide a construct into multiple constructs with
   * specified CIDR blocks.</p>
   */
  inline const SplitOperation& GetSplit() const { return m_split; }
  inline bool SplitHasBeenSet() const { return m_splitHasBeenSet; }
  template <typename SplitT = SplitOperation>
  void SetSplit(SplitT&& value) {
    m_splitHasBeenSet = true;
    m_split = std::forward<SplitT>(value);
  }
  template <typename SplitT = SplitOperation>
  OperationUnion& WithSplit(SplitT&& value) {
    SetSplit(std::forward<SplitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A delete operation to remove a construct from the mapping.</p>
   */
  inline const DeleteOperation& GetDelete() const { return m_delete; }
  inline bool DeleteHasBeenSet() const { return m_deleteHasBeenSet; }
  template <typename DeleteT = DeleteOperation>
  void SetDelete(DeleteT&& value) {
    m_deleteHasBeenSet = true;
    m_delete = std::forward<DeleteT>(value);
  }
  template <typename DeleteT = DeleteOperation>
  OperationUnion& WithDelete(DeleteT&& value) {
    SetDelete(std::forward<DeleteT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An update operation to modify construct properties.</p>
   */
  inline const UpdateOperation& GetUpdate() const { return m_update; }
  inline bool UpdateHasBeenSet() const { return m_updateHasBeenSet; }
  template <typename UpdateT = UpdateOperation>
  void SetUpdate(UpdateT&& value) {
    m_updateHasBeenSet = true;
    m_update = std::forward<UpdateT>(value);
  }
  template <typename UpdateT = UpdateOperation>
  OperationUnion& WithUpdate(UpdateT&& value) {
    SetUpdate(std::forward<UpdateT>(value));
    return *this;
  }
  ///@}
 private:
  MergeOperation m_merge;

  SplitOperation m_split;

  DeleteOperation m_delete;

  UpdateOperation m_update;
  bool m_mergeHasBeenSet = false;
  bool m_splitHasBeenSet = false;
  bool m_deleteHasBeenSet = false;
  bool m_updateHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
