/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

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
 * <p>Describes a change from one string value to another.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/StringChange">AWS
 * API Reference</a></p>
 */
class StringChange {
 public:
  AWS_RESILIENCEHUBV2_API StringChange() = default;
  AWS_RESILIENCEHUBV2_API StringChange(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API StringChange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The old value.</p>
   */
  inline const Aws::String& GetOldValue() const { return m_oldValue; }
  inline bool OldValueHasBeenSet() const { return m_oldValueHasBeenSet; }
  template <typename OldValueT = Aws::String>
  void SetOldValue(OldValueT&& value) {
    m_oldValueHasBeenSet = true;
    m_oldValue = std::forward<OldValueT>(value);
  }
  template <typename OldValueT = Aws::String>
  StringChange& WithOldValue(OldValueT&& value) {
    SetOldValue(std::forward<OldValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new value.</p>
   */
  inline const Aws::String& GetNewValue() const { return m_newValue; }
  inline bool NewValueHasBeenSet() const { return m_newValueHasBeenSet; }
  template <typename NewValueT = Aws::String>
  void SetNewValue(NewValueT&& value) {
    m_newValueHasBeenSet = true;
    m_newValue = std::forward<NewValueT>(value);
  }
  template <typename NewValueT = Aws::String>
  StringChange& WithNewValue(NewValueT&& value) {
    SetNewValue(std::forward<NewValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_oldValue;

  Aws::String m_newValue;
  bool m_oldValueHasBeenSet = false;
  bool m_newValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
