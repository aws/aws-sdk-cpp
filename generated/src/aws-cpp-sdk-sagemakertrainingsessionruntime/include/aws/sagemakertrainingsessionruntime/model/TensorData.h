/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerTrainingSessionRuntime {
namespace Model {

/**
 * <p>A tensor with data, data type, and shape metadata.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/TensorData">AWS
 * API Reference</a></p>
 */
class TensorData {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API TensorData() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API TensorData(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API TensorData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The raw tensor data as JSON. The format is determined by the
   * <code>dtype</code> field: integer arrays for <code>int64</code>, floating-point
   * arrays for <code>float32</code>.</p>
   */
  inline Aws::Utils::DocumentView GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = Aws::Utils::Document>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::Utils::Document>
  TensorData& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the tensor elements, such as <code>int64</code> or
   * <code>float32</code>.</p>
   */
  inline const Aws::String& GetDtype() const { return m_dtype; }
  inline bool DtypeHasBeenSet() const { return m_dtypeHasBeenSet; }
  template <typename DtypeT = Aws::String>
  void SetDtype(DtypeT&& value) {
    m_dtypeHasBeenSet = true;
    m_dtype = std::forward<DtypeT>(value);
  }
  template <typename DtypeT = Aws::String>
  TensorData& WithDtype(DtypeT&& value) {
    SetDtype(std::forward<DtypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dimensions of the tensor, such as [batch_size, seq_length].</p>
   */
  inline const Aws::Vector<int>& GetShape() const { return m_shape; }
  inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
  template <typename ShapeT = Aws::Vector<int>>
  void SetShape(ShapeT&& value) {
    m_shapeHasBeenSet = true;
    m_shape = std::forward<ShapeT>(value);
  }
  template <typename ShapeT = Aws::Vector<int>>
  TensorData& WithShape(ShapeT&& value) {
    SetShape(std::forward<ShapeT>(value));
    return *this;
  }
  inline TensorData& AddShape(int value) {
    m_shapeHasBeenSet = true;
    m_shape.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::Document m_data;

  Aws::String m_dtype;

  Aws::Vector<int> m_shape;
  bool m_dataHasBeenSet = false;
  bool m_dtypeHasBeenSet = false;
  bool m_shapeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
