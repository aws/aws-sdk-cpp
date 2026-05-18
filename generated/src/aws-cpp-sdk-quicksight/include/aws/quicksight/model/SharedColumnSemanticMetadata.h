/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnSemanticProperty.h>

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
 * <p>Semantic metadata shared across one or more columns.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SharedColumnSemanticMetadata">AWS
 * API Reference</a></p>
 */
class SharedColumnSemanticMetadata {
 public:
  AWS_QUICKSIGHT_API SharedColumnSemanticMetadata() = default;
  AWS_QUICKSIGHT_API SharedColumnSemanticMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SharedColumnSemanticMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The names of the columns this metadata applies to.</p>
   */
  inline const Aws::Vector<Aws::String>& GetColumnNames() const { return m_columnNames; }
  inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }
  template <typename ColumnNamesT = Aws::Vector<Aws::String>>
  void SetColumnNames(ColumnNamesT&& value) {
    m_columnNamesHasBeenSet = true;
    m_columnNames = std::forward<ColumnNamesT>(value);
  }
  template <typename ColumnNamesT = Aws::Vector<Aws::String>>
  SharedColumnSemanticMetadata& WithColumnNames(ColumnNamesT&& value) {
    SetColumnNames(std::forward<ColumnNamesT>(value));
    return *this;
  }
  template <typename ColumnNamesT = Aws::String>
  SharedColumnSemanticMetadata& AddColumnNames(ColumnNamesT&& value) {
    m_columnNamesHasBeenSet = true;
    m_columnNames.emplace_back(std::forward<ColumnNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The semantic properties for the specified columns.</p>
   */
  inline const Aws::Vector<ColumnSemanticProperty>& GetColumnProperties() const { return m_columnProperties; }
  inline bool ColumnPropertiesHasBeenSet() const { return m_columnPropertiesHasBeenSet; }
  template <typename ColumnPropertiesT = Aws::Vector<ColumnSemanticProperty>>
  void SetColumnProperties(ColumnPropertiesT&& value) {
    m_columnPropertiesHasBeenSet = true;
    m_columnProperties = std::forward<ColumnPropertiesT>(value);
  }
  template <typename ColumnPropertiesT = Aws::Vector<ColumnSemanticProperty>>
  SharedColumnSemanticMetadata& WithColumnProperties(ColumnPropertiesT&& value) {
    SetColumnProperties(std::forward<ColumnPropertiesT>(value));
    return *this;
  }
  template <typename ColumnPropertiesT = ColumnSemanticProperty>
  SharedColumnSemanticMetadata& AddColumnProperties(ColumnPropertiesT&& value) {
    m_columnPropertiesHasBeenSet = true;
    m_columnProperties.emplace_back(std::forward<ColumnPropertiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_columnNames;

  Aws::Vector<ColumnSemanticProperty> m_columnProperties;
  bool m_columnNamesHasBeenSet = false;
  bool m_columnPropertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
