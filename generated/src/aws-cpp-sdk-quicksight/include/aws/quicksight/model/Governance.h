/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DefaultCategoryEffect.h>

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
 * <p>Contains the governance configuration for a custom permissions profile. When
 * governance controls are defined for a category, any capabilities in that
 * category not explicitly set to <code>ALLOW</code> in <code>Capabilities</code>
 * are denied. Even newly added capabilities in the category are implicitly
 * disabled when Amazon Quick releases them.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Governance">AWS
 * API Reference</a></p>
 */
class Governance {
 public:
  AWS_QUICKSIGHT_API Governance() = default;
  AWS_QUICKSIGHT_API Governance(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Governance& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map of <code>DefaultCategoryEffects</code>.</p>
   */
  inline const Aws::Map<Aws::String, DefaultCategoryEffect>& GetDefaultCategoryEffects() const { return m_defaultCategoryEffects; }
  inline bool DefaultCategoryEffectsHasBeenSet() const { return m_defaultCategoryEffectsHasBeenSet; }
  template <typename DefaultCategoryEffectsT = Aws::Map<Aws::String, DefaultCategoryEffect>>
  void SetDefaultCategoryEffects(DefaultCategoryEffectsT&& value) {
    m_defaultCategoryEffectsHasBeenSet = true;
    m_defaultCategoryEffects = std::forward<DefaultCategoryEffectsT>(value);
  }
  template <typename DefaultCategoryEffectsT = Aws::Map<Aws::String, DefaultCategoryEffect>>
  Governance& WithDefaultCategoryEffects(DefaultCategoryEffectsT&& value) {
    SetDefaultCategoryEffects(std::forward<DefaultCategoryEffectsT>(value));
    return *this;
  }
  inline Governance& AddDefaultCategoryEffects(Aws::String key, DefaultCategoryEffect value) {
    m_defaultCategoryEffectsHasBeenSet = true;
    m_defaultCategoryEffects.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, DefaultCategoryEffect> m_defaultCategoryEffects;
  bool m_defaultCategoryEffectsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
