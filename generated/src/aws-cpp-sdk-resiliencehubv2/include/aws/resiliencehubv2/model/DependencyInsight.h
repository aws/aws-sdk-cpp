/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/InsightsCategory.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Contains a single insight about a service's dependencies.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DependencyInsight">AWS
 * API Reference</a></p>
 */
class DependencyInsight {
 public:
  AWS_RESILIENCEHUBV2_API DependencyInsight() = default;
  AWS_RESILIENCEHUBV2_API DependencyInsight(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API DependencyInsight& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The category of the insight. Valid values:</p> <ul> <li> <p>CROSS_REGION -
   * The insight relates to dependencies used across multiple Regions.</p> </li> <li>
   * <p>NEW_DEPENDENCY - The insight relates to a recently detected dependency.</p>
   * </li> <li> <p>THIRD_PARTY - The insight relates to a third-party dependency.</p>
   * </li> <li> <p>UNEVEN_USAGE - The insight relates to a dependency with uneven
   * usage across the service.</p> </li> <li> <p>AWS_SERVICE - The insight relates to
   * a dependency on an Amazon Web Services service.</p> </li> </ul>
   */
  inline InsightsCategory GetCategory() const { return m_category; }
  inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
  inline void SetCategory(InsightsCategory value) {
    m_categoryHasBeenSet = true;
    m_category = value;
  }
  inline DependencyInsight& WithCategory(InsightsCategory value) {
    SetCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation of the insight, describing the dependency
   * behavior or condition that was detected.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DependencyInsight& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  InsightsCategory m_category{InsightsCategory::NOT_SET};

  Aws::String m_description;
  bool m_categoryHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
