/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/QuickAuthenticationConfigurationDetail.h>
#include <aws/quicksight/model/QuickAuthenticationType.h>

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
 * <p>The Quick Sight authentication configuration of an access control
 * application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/QuickAuthenticationConfig">AWS
 * API Reference</a></p>
 */
class QuickAuthenticationConfig {
 public:
  AWS_QUICKSIGHT_API QuickAuthenticationConfig() = default;
  AWS_QUICKSIGHT_API QuickAuthenticationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API QuickAuthenticationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>How the external client authenticates to Quick Sight.</p>
   */
  inline QuickAuthenticationType GetQuickAuthenticationType() const { return m_quickAuthenticationType; }
  inline bool QuickAuthenticationTypeHasBeenSet() const { return m_quickAuthenticationTypeHasBeenSet; }
  inline void SetQuickAuthenticationType(QuickAuthenticationType value) {
    m_quickAuthenticationTypeHasBeenSet = true;
    m_quickAuthenticationType = value;
  }
  inline QuickAuthenticationConfig& WithQuickAuthenticationType(QuickAuthenticationType value) {
    SetQuickAuthenticationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the Quick Sight authentication configuration.</p>
   */
  inline const QuickAuthenticationConfigurationDetail& GetQuickAuthenticationConfigurationDetail() const {
    return m_quickAuthenticationConfigurationDetail;
  }
  inline bool QuickAuthenticationConfigurationDetailHasBeenSet() const { return m_quickAuthenticationConfigurationDetailHasBeenSet; }
  template <typename QuickAuthenticationConfigurationDetailT = QuickAuthenticationConfigurationDetail>
  void SetQuickAuthenticationConfigurationDetail(QuickAuthenticationConfigurationDetailT&& value) {
    m_quickAuthenticationConfigurationDetailHasBeenSet = true;
    m_quickAuthenticationConfigurationDetail = std::forward<QuickAuthenticationConfigurationDetailT>(value);
  }
  template <typename QuickAuthenticationConfigurationDetailT = QuickAuthenticationConfigurationDetail>
  QuickAuthenticationConfig& WithQuickAuthenticationConfigurationDetail(QuickAuthenticationConfigurationDetailT&& value) {
    SetQuickAuthenticationConfigurationDetail(std::forward<QuickAuthenticationConfigurationDetailT>(value));
    return *this;
  }
  ///@}
 private:
  QuickAuthenticationType m_quickAuthenticationType{QuickAuthenticationType::NOT_SET};

  QuickAuthenticationConfigurationDetail m_quickAuthenticationConfigurationDetail;
  bool m_quickAuthenticationTypeHasBeenSet = false;
  bool m_quickAuthenticationConfigurationDetailHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
