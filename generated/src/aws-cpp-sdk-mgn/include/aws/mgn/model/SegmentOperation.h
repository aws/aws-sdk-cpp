/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/SegmentCreateOperation.h>
#include <aws/mgn/model/SegmentDeleteOperation.h>
#include <aws/mgn/model/SegmentUpdateOperation.h>

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
 * <p>Specifies the operation to perform on a segment during a mapping update.
 * Specify one of a create, update, or delete operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SegmentOperation">AWS
 * API Reference</a></p>
 */
class SegmentOperation {
 public:
  AWS_MGN_API SegmentOperation() = default;
  AWS_MGN_API SegmentOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API SegmentOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A create operation to add a new segment.</p>
   */
  inline const SegmentCreateOperation& GetCreate() const { return m_create; }
  inline bool CreateHasBeenSet() const { return m_createHasBeenSet; }
  template <typename CreateT = SegmentCreateOperation>
  void SetCreate(CreateT&& value) {
    m_createHasBeenSet = true;
    m_create = std::forward<CreateT>(value);
  }
  template <typename CreateT = SegmentCreateOperation>
  SegmentOperation& WithCreate(CreateT&& value) {
    SetCreate(std::forward<CreateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An update operation to modify segment properties.</p>
   */
  inline const SegmentUpdateOperation& GetUpdate() const { return m_update; }
  inline bool UpdateHasBeenSet() const { return m_updateHasBeenSet; }
  template <typename UpdateT = SegmentUpdateOperation>
  void SetUpdate(UpdateT&& value) {
    m_updateHasBeenSet = true;
    m_update = std::forward<UpdateT>(value);
  }
  template <typename UpdateT = SegmentUpdateOperation>
  SegmentOperation& WithUpdate(UpdateT&& value) {
    SetUpdate(std::forward<UpdateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A delete operation to remove a segment from the mapping.</p>
   */
  inline const SegmentDeleteOperation& GetDelete() const { return m_delete; }
  inline bool DeleteHasBeenSet() const { return m_deleteHasBeenSet; }
  template <typename DeleteT = SegmentDeleteOperation>
  void SetDelete(DeleteT&& value) {
    m_deleteHasBeenSet = true;
    m_delete = std::forward<DeleteT>(value);
  }
  template <typename DeleteT = SegmentDeleteOperation>
  SegmentOperation& WithDelete(DeleteT&& value) {
    SetDelete(std::forward<DeleteT>(value));
    return *this;
  }
  ///@}
 private:
  SegmentCreateOperation m_create;

  SegmentUpdateOperation m_update;

  SegmentDeleteOperation m_delete;
  bool m_createHasBeenSet = false;
  bool m_updateHasBeenSet = false;
  bool m_deleteHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
