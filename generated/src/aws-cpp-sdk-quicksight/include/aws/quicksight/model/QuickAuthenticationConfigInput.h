/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/QuickAuthenticationConfigurationDetailInput.h>
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
 * <p>The Quick Sight authentication configuration for an access control
 * application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/QuickAuthenticationConfigInput">AWS
 * API Reference</a></p>
 */
class QuickAuthenticationConfigInput {
 public:
  AWS_QUICKSIGHT_API QuickAuthenticationConfigInput() = default;
  AWS_QUICKSIGHT_API QuickAuthenticationConfigInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API QuickAuthenticationConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline QuickAuthenticationConfigInput& WithQuickAuthenticationType(QuickAuthenticationType value) {
    SetQuickAuthenticationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the Quick Sight authentication configuration.</p>
   */
  inline const QuickAuthenticationConfigurationDetailInput& GetQuickAuthenticationConfigurationDetailInput() const {
    return m_quickAuthenticationConfigurationDetailInput;
  }
  inline bool QuickAuthenticationConfigurationDetailInputHasBeenSet() const {
    return m_quickAuthenticationConfigurationDetailInputHasBeenSet;
  }
  template <typename QuickAuthenticationConfigurationDetailInputT = QuickAuthenticationConfigurationDetailInput>
  void SetQuickAuthenticationConfigurationDetailInput(QuickAuthenticationConfigurationDetailInputT&& value) {
    m_quickAuthenticationConfigurationDetailInputHasBeenSet = true;
    m_quickAuthenticationConfigurationDetailInput = std::forward<QuickAuthenticationConfigurationDetailInputT>(value);
  }
  template <typename QuickAuthenticationConfigurationDetailInputT = QuickAuthenticationConfigurationDetailInput>
  QuickAuthenticationConfigInput& WithQuickAuthenticationConfigurationDetailInput(QuickAuthenticationConfigurationDetailInputT&& value) {
    SetQuickAuthenticationConfigurationDetailInput(std::forward<QuickAuthenticationConfigurationDetailInputT>(value));
    return *this;
  }
  ///@}
 private:
  QuickAuthenticationType m_quickAuthenticationType{QuickAuthenticationType::NOT_SET};

  QuickAuthenticationConfigurationDetailInput m_quickAuthenticationConfigurationDetailInput;
  bool m_quickAuthenticationTypeHasBeenSet = false;
  bool m_quickAuthenticationConfigurationDetailInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
