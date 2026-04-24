/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>Specifies the source of data for a destination table, including the transform
 * operation and column mappings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DestinationTableSource">AWS
 * API Reference</a></p>
 */
class DestinationTableSource {
 public:
  AWS_QUICKSIGHT_API DestinationTableSource() = default;
  AWS_QUICKSIGHT_API DestinationTableSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DestinationTableSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the transform operation that provides data to the
   * destination table.</p>
   */
  inline const Aws::String& GetTransformOperationId() const { return m_transformOperationId; }
  inline bool TransformOperationIdHasBeenSet() const { return m_transformOperationIdHasBeenSet; }
  template <typename TransformOperationIdT = Aws::String>
  void SetTransformOperationId(TransformOperationIdT&& value) {
    m_transformOperationIdHasBeenSet = true;
    m_transformOperationId = std::forward<TransformOperationIdT>(value);
  }
  template <typename TransformOperationIdT = Aws::String>
  DestinationTableSource& WithTransformOperationId(TransformOperationIdT&& value) {
    SetTransformOperationId(std::forward<TransformOperationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_transformOperationId;
  bool m_transformOperationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
