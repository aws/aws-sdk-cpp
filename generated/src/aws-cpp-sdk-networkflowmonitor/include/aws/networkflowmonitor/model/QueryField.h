/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFlowMonitor {
namespace Model {

/**
 * <p>A column that a query returns, with its name and data type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/QueryField">AWS
 * API Reference</a></p>
 */
class QueryField {
 public:
  AWS_NETWORKFLOWMONITOR_API QueryField() = default;
  AWS_NETWORKFLOWMONITOR_API QueryField(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API QueryField& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the column.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  QueryField& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the values in the column.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  QueryField& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_type;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
