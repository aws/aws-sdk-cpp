/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>The dashboard customization summary configuration for an embedded Quick Sight
 * dashboard.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardCustomizationSummaryConfigurations">AWS
 * API Reference</a></p>
 */
class DashboardCustomizationSummaryConfigurations {
 public:
  AWS_QUICKSIGHT_API DashboardCustomizationSummaryConfigurations() = default;
  AWS_QUICKSIGHT_API DashboardCustomizationSummaryConfigurations(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DashboardCustomizationSummaryConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The enabled status of the dashboard customization summary configuration for
   * an embedded Quick Sight dashboard.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline DashboardCustomizationSummaryConfigurations& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
