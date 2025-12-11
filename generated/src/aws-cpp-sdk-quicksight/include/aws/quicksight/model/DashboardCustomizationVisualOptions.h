/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/VisualCustomizationFieldsConfiguration.h>

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
 * <p>The options that define customizations available to dashboard readers for a
 * specific visual</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardCustomizationVisualOptions">AWS
 * API Reference</a></p>
 */
class DashboardCustomizationVisualOptions {
 public:
  AWS_QUICKSIGHT_API DashboardCustomizationVisualOptions() = default;
  AWS_QUICKSIGHT_API DashboardCustomizationVisualOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DashboardCustomizationVisualOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration that controls field customization options available to
   * dashboard readers for a visual.</p>
   */
  inline const VisualCustomizationFieldsConfiguration& GetFieldsConfiguration() const { return m_fieldsConfiguration; }
  inline bool FieldsConfigurationHasBeenSet() const { return m_fieldsConfigurationHasBeenSet; }
  template <typename FieldsConfigurationT = VisualCustomizationFieldsConfiguration>
  void SetFieldsConfiguration(FieldsConfigurationT&& value) {
    m_fieldsConfigurationHasBeenSet = true;
    m_fieldsConfiguration = std::forward<FieldsConfigurationT>(value);
  }
  template <typename FieldsConfigurationT = VisualCustomizationFieldsConfiguration>
  DashboardCustomizationVisualOptions& WithFieldsConfiguration(FieldsConfigurationT&& value) {
    SetFieldsConfiguration(std::forward<FieldsConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  VisualCustomizationFieldsConfiguration m_fieldsConfiguration;
  bool m_fieldsConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
