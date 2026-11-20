/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Payments {
namespace Model {

/**
 * <p>The details of a Unified Payments Interface (UPI) instrument.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/Upi">AWS API
 * Reference</a></p>
 */
class Upi {
 public:
  AWS_PAYMENTS_API Upi() = default;
  AWS_PAYMENTS_API Upi(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Upi& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the UPI app that the instrument is registered with.</p>
   */
  inline const Aws::String& GetAppName() const { return m_appName; }
  inline bool AppNameHasBeenSet() const { return m_appNameHasBeenSet; }
  template <typename AppNameT = Aws::String>
  void SetAppName(AppNameT&& value) {
    m_appNameHasBeenSet = true;
    m_appName = std::forward<AppNameT>(value);
  }
  template <typename AppNameT = Aws::String>
  Upi& WithAppName(AppNameT&& value) {
    SetAppName(std::forward<AppNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_appName;
  bool m_appNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
