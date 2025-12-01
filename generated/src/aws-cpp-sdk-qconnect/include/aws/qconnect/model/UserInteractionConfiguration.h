/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>Configuration for user interaction settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UserInteractionConfiguration">AWS
 * API Reference</a></p>
 */
class UserInteractionConfiguration {
 public:
  AWS_QCONNECT_API UserInteractionConfiguration() = default;
  AWS_QCONNECT_API UserInteractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API UserInteractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether user confirmation is required for the interaction.</p>
   */
  inline bool GetIsUserConfirmationRequired() const { return m_isUserConfirmationRequired; }
  inline bool IsUserConfirmationRequiredHasBeenSet() const { return m_isUserConfirmationRequiredHasBeenSet; }
  inline void SetIsUserConfirmationRequired(bool value) {
    m_isUserConfirmationRequiredHasBeenSet = true;
    m_isUserConfirmationRequired = value;
  }
  inline UserInteractionConfiguration& WithIsUserConfirmationRequired(bool value) {
    SetIsUserConfirmationRequired(value);
    return *this;
  }
  ///@}
 private:
  bool m_isUserConfirmationRequired{false};
  bool m_isUserConfirmationRequiredHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
