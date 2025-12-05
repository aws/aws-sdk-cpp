/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralBenefits {
namespace Model {

/**
 * <p>Represents a specific change to be made to a benefit application
 * field.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/Amendment">AWS
 * API Reference</a></p>
 */
class Amendment {
 public:
  AWS_PARTNERCENTRALBENEFITS_API Amendment() = default;
  AWS_PARTNERCENTRALBENEFITS_API Amendment(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Amendment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The JSON path or field identifier specifying which field in the benefit
   * application to modify.</p>
   */
  inline const Aws::String& GetFieldPath() const { return m_fieldPath; }
  inline bool FieldPathHasBeenSet() const { return m_fieldPathHasBeenSet; }
  template <typename FieldPathT = Aws::String>
  void SetFieldPath(FieldPathT&& value) {
    m_fieldPathHasBeenSet = true;
    m_fieldPath = std::forward<FieldPathT>(value);
  }
  template <typename FieldPathT = Aws::String>
  Amendment& WithFieldPath(FieldPathT&& value) {
    SetFieldPath(std::forward<FieldPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new value to set for the specified field in the benefit application.</p>
   */
  inline const Aws::String& GetNewValue() const { return m_newValue; }
  inline bool NewValueHasBeenSet() const { return m_newValueHasBeenSet; }
  template <typename NewValueT = Aws::String>
  void SetNewValue(NewValueT&& value) {
    m_newValueHasBeenSet = true;
    m_newValue = std::forward<NewValueT>(value);
  }
  template <typename NewValueT = Aws::String>
  Amendment& WithNewValue(NewValueT&& value) {
    SetNewValue(std::forward<NewValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fieldPath;

  Aws::String m_newValue;
  bool m_fieldPathHasBeenSet = false;
  bool m_newValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
