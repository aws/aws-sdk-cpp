/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/DashboardCustomizationStatus.h>

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
 * <p>The configuration that controls field customization options available to
 * dashboard readers for a visual.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisualCustomizationFieldsConfiguration">AWS
 * API Reference</a></p>
 */
class VisualCustomizationFieldsConfiguration {
 public:
  AWS_QUICKSIGHT_API VisualCustomizationFieldsConfiguration() = default;
  AWS_QUICKSIGHT_API VisualCustomizationFieldsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API VisualCustomizationFieldsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether dashboard readers can customize fields for this visual.
   * This option is <code>ENABLED</code> by default.</p>
   */
  inline DashboardCustomizationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DashboardCustomizationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline VisualCustomizationFieldsConfiguration& WithStatus(DashboardCustomizationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The additional dataset fields available for dashboard readers to customize
   * the visual with, beyond the fields already configured on the visual.</p>
   */
  inline const Aws::Vector<ColumnIdentifier>& GetAdditionalFields() const { return m_additionalFields; }
  inline bool AdditionalFieldsHasBeenSet() const { return m_additionalFieldsHasBeenSet; }
  template <typename AdditionalFieldsT = Aws::Vector<ColumnIdentifier>>
  void SetAdditionalFields(AdditionalFieldsT&& value) {
    m_additionalFieldsHasBeenSet = true;
    m_additionalFields = std::forward<AdditionalFieldsT>(value);
  }
  template <typename AdditionalFieldsT = Aws::Vector<ColumnIdentifier>>
  VisualCustomizationFieldsConfiguration& WithAdditionalFields(AdditionalFieldsT&& value) {
    SetAdditionalFields(std::forward<AdditionalFieldsT>(value));
    return *this;
  }
  template <typename AdditionalFieldsT = ColumnIdentifier>
  VisualCustomizationFieldsConfiguration& AddAdditionalFields(AdditionalFieldsT&& value) {
    m_additionalFieldsHasBeenSet = true;
    m_additionalFields.emplace_back(std::forward<AdditionalFieldsT>(value));
    return *this;
  }
  ///@}
 private:
  DashboardCustomizationStatus m_status{DashboardCustomizationStatus::NOT_SET};

  Aws::Vector<ColumnIdentifier> m_additionalFields;
  bool m_statusHasBeenSet = false;
  bool m_additionalFieldsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
