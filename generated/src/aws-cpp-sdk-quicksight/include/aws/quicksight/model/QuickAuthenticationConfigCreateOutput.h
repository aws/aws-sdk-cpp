/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/QuickAuthenticationConfigurationDetailCreateOutput.h>
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
 * <p>The Quick Sight authentication configuration that is returned when an access
 * control application is created.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/QuickAuthenticationConfigCreateOutput">AWS
 * API Reference</a></p>
 */
class QuickAuthenticationConfigCreateOutput {
 public:
  AWS_QUICKSIGHT_API QuickAuthenticationConfigCreateOutput() = default;
  AWS_QUICKSIGHT_API QuickAuthenticationConfigCreateOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API QuickAuthenticationConfigCreateOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline QuickAuthenticationConfigCreateOutput& WithQuickAuthenticationType(QuickAuthenticationType value) {
    SetQuickAuthenticationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the Quick Sight authentication configuration.</p>
   */
  inline const QuickAuthenticationConfigurationDetailCreateOutput& GetQuickAuthenticationConfigurationDetailCreateOutput() const {
    return m_quickAuthenticationConfigurationDetailCreateOutput;
  }
  inline bool QuickAuthenticationConfigurationDetailCreateOutputHasBeenSet() const {
    return m_quickAuthenticationConfigurationDetailCreateOutputHasBeenSet;
  }
  template <typename QuickAuthenticationConfigurationDetailCreateOutputT = QuickAuthenticationConfigurationDetailCreateOutput>
  void SetQuickAuthenticationConfigurationDetailCreateOutput(QuickAuthenticationConfigurationDetailCreateOutputT&& value) {
    m_quickAuthenticationConfigurationDetailCreateOutputHasBeenSet = true;
    m_quickAuthenticationConfigurationDetailCreateOutput = std::forward<QuickAuthenticationConfigurationDetailCreateOutputT>(value);
  }
  template <typename QuickAuthenticationConfigurationDetailCreateOutputT = QuickAuthenticationConfigurationDetailCreateOutput>
  QuickAuthenticationConfigCreateOutput& WithQuickAuthenticationConfigurationDetailCreateOutput(
      QuickAuthenticationConfigurationDetailCreateOutputT&& value) {
    SetQuickAuthenticationConfigurationDetailCreateOutput(std::forward<QuickAuthenticationConfigurationDetailCreateOutputT>(value));
    return *this;
  }
  ///@}
 private:
  QuickAuthenticationType m_quickAuthenticationType{QuickAuthenticationType::NOT_SET};

  QuickAuthenticationConfigurationDetailCreateOutput m_quickAuthenticationConfigurationDetailCreateOutput;
  bool m_quickAuthenticationTypeHasBeenSet = false;
  bool m_quickAuthenticationConfigurationDetailCreateOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
