/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ResponderErrorMaskingAction.h>
#include <aws/rtbfabric/model/ResponderErrorMaskingLoggingType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>Describes the masking for HTTP error codes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/ResponderErrorMaskingForHttpCode">AWS
 * API Reference</a></p>
 */
class ResponderErrorMaskingForHttpCode {
 public:
  AWS_RTBFABRIC_API ResponderErrorMaskingForHttpCode() = default;
  AWS_RTBFABRIC_API ResponderErrorMaskingForHttpCode(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API ResponderErrorMaskingForHttpCode& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTP error code.</p>
   */
  inline const Aws::String& GetHttpCode() const { return m_httpCode; }
  inline bool HttpCodeHasBeenSet() const { return m_httpCodeHasBeenSet; }
  template <typename HttpCodeT = Aws::String>
  void SetHttpCode(HttpCodeT&& value) {
    m_httpCodeHasBeenSet = true;
    m_httpCode = std::forward<HttpCodeT>(value);
  }
  template <typename HttpCodeT = Aws::String>
  ResponderErrorMaskingForHttpCode& WithHttpCode(HttpCodeT&& value) {
    SetHttpCode(std::forward<HttpCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action for the error..</p>
   */
  inline ResponderErrorMaskingAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(ResponderErrorMaskingAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline ResponderErrorMaskingForHttpCode& WithAction(ResponderErrorMaskingAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error log type.</p>
   */
  inline const Aws::Vector<ResponderErrorMaskingLoggingType>& GetLoggingTypes() const { return m_loggingTypes; }
  inline bool LoggingTypesHasBeenSet() const { return m_loggingTypesHasBeenSet; }
  template <typename LoggingTypesT = Aws::Vector<ResponderErrorMaskingLoggingType>>
  void SetLoggingTypes(LoggingTypesT&& value) {
    m_loggingTypesHasBeenSet = true;
    m_loggingTypes = std::forward<LoggingTypesT>(value);
  }
  template <typename LoggingTypesT = Aws::Vector<ResponderErrorMaskingLoggingType>>
  ResponderErrorMaskingForHttpCode& WithLoggingTypes(LoggingTypesT&& value) {
    SetLoggingTypes(std::forward<LoggingTypesT>(value));
    return *this;
  }
  inline ResponderErrorMaskingForHttpCode& AddLoggingTypes(ResponderErrorMaskingLoggingType value) {
    m_loggingTypesHasBeenSet = true;
    m_loggingTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of response logging.</p>
   */
  inline double GetResponseLoggingPercentage() const { return m_responseLoggingPercentage; }
  inline bool ResponseLoggingPercentageHasBeenSet() const { return m_responseLoggingPercentageHasBeenSet; }
  inline void SetResponseLoggingPercentage(double value) {
    m_responseLoggingPercentageHasBeenSet = true;
    m_responseLoggingPercentage = value;
  }
  inline ResponderErrorMaskingForHttpCode& WithResponseLoggingPercentage(double value) {
    SetResponseLoggingPercentage(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_httpCode;
  bool m_httpCodeHasBeenSet = false;

  ResponderErrorMaskingAction m_action{ResponderErrorMaskingAction::NOT_SET};
  bool m_actionHasBeenSet = false;

  Aws::Vector<ResponderErrorMaskingLoggingType> m_loggingTypes;
  bool m_loggingTypesHasBeenSet = false;

  double m_responseLoggingPercentage{0.0};
  bool m_responseLoggingPercentageHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
