/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SupportAuthZ {
namespace Model {

/**
 * <p>A time-window condition that constrains when a support permit is
 * valid.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/Condition">AWS
 * API Reference</a></p>
 */
class Condition {
 public:
  AWS_SUPPORTAUTHZ_API Condition() = default;
  AWS_SUPPORTAUTHZ_API Condition(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The earliest time at which the permit becomes valid.</p>
   */
  inline const Aws::Utils::DateTime& GetAllowAfter() const { return m_allowAfter; }
  inline bool AllowAfterHasBeenSet() const { return m_allowAfterHasBeenSet; }
  template <typename AllowAfterT = Aws::Utils::DateTime>
  void SetAllowAfter(AllowAfterT&& value) {
    m_allowAfterHasBeenSet = true;
    m_allowAfter = std::forward<AllowAfterT>(value);
  }
  template <typename AllowAfterT = Aws::Utils::DateTime>
  Condition& WithAllowAfter(AllowAfterT&& value) {
    SetAllowAfter(std::forward<AllowAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest time at which the permit remains valid.</p>
   */
  inline const Aws::Utils::DateTime& GetAllowBefore() const { return m_allowBefore; }
  inline bool AllowBeforeHasBeenSet() const { return m_allowBeforeHasBeenSet; }
  template <typename AllowBeforeT = Aws::Utils::DateTime>
  void SetAllowBefore(AllowBeforeT&& value) {
    m_allowBeforeHasBeenSet = true;
    m_allowBefore = std::forward<AllowBeforeT>(value);
  }
  template <typename AllowBeforeT = Aws::Utils::DateTime>
  Condition& WithAllowBefore(AllowBeforeT&& value) {
    SetAllowBefore(std::forward<AllowBeforeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_allowAfter{};

  Aws::Utils::DateTime m_allowBefore{};
  bool m_allowAfterHasBeenSet = false;
  bool m_allowBeforeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
