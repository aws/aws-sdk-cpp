/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
  UpdateOperation m_update;
  bool m_updateHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
