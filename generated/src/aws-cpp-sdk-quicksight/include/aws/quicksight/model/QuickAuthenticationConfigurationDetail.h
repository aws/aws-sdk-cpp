/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/QuickManagedPublicAuthCodeQuickAuthenticationConfig.h>

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
 * <p>The details of the Quick Sight authentication configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/QuickAuthenticationConfigurationDetail">AWS
 * API Reference</a></p>
 */
class QuickAuthenticationConfigurationDetail {
 public:
  AWS_QUICKSIGHT_API QuickAuthenticationConfigurationDetail() = default;
  AWS_QUICKSIGHT_API QuickAuthenticationConfigurationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API QuickAuthenticationConfigurationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration of a Quick Sight-managed public client.</p>
   */
  inline const QuickManagedPublicAuthCodeQuickAuthenticationConfig& GetQuickManagedPublicAuthCode() const {
    return m_quickManagedPublicAuthCode;
  }
  inline bool QuickManagedPublicAuthCodeHasBeenSet() const { return m_quickManagedPublicAuthCodeHasBeenSet; }
  template <typename QuickManagedPublicAuthCodeT = QuickManagedPublicAuthCodeQuickAuthenticationConfig>
  void SetQuickManagedPublicAuthCode(QuickManagedPublicAuthCodeT&& value) {
    m_quickManagedPublicAuthCodeHasBeenSet = true;
    m_quickManagedPublicAuthCode = std::forward<QuickManagedPublicAuthCodeT>(value);
  }
  template <typename QuickManagedPublicAuthCodeT = QuickManagedPublicAuthCodeQuickAuthenticationConfig>
  QuickAuthenticationConfigurationDetail& WithQuickManagedPublicAuthCode(QuickManagedPublicAuthCodeT&& value) {
    SetQuickManagedPublicAuthCode(std::forward<QuickManagedPublicAuthCodeT>(value));
    return *this;
  }
  ///@}
 private:
  QuickManagedPublicAuthCodeQuickAuthenticationConfig m_quickManagedPublicAuthCode;
  bool m_quickManagedPublicAuthCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
