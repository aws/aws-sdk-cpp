/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/RecordFormat.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Represents a test record structure used for pipeline testing operations to
 * validate data processing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/Record">AWS
 * API Reference</a></p>
 */
class Record {
 public:
  AWS_OBSERVABILITYADMIN_API Record() = default;
  AWS_OBSERVABILITYADMIN_API Record(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Record& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The data content of the test record used for pipeline validation.</p>
   */
  inline const Aws::String& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = Aws::String>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::String>
  Record& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the test record, indicating the format or category of the
   * data.</p>
   */
  inline RecordFormat GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(RecordFormat value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline Record& WithType(RecordFormat value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_data;

  RecordFormat m_type{RecordFormat::NOT_SET};
  bool m_dataHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
