/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/FieldToMatch.h>
#include <aws/observabilityadmin/model/LoggingFilter.h>
#include <aws/observabilityadmin/model/WAFLogType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p> Configuration parameters for WAF logging, including redacted fields and
 * logging filters. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/WAFLoggingParameters">AWS
 * API Reference</a></p>
 */
class WAFLoggingParameters {
 public:
  AWS_OBSERVABILITYADMIN_API WAFLoggingParameters() = default;
  AWS_OBSERVABILITYADMIN_API WAFLoggingParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API WAFLoggingParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The fields to redact from WAF logs to protect sensitive information. </p>
   */
  inline const Aws::Vector<FieldToMatch>& GetRedactedFields() const { return m_redactedFields; }
  inline bool RedactedFieldsHasBeenSet() const { return m_redactedFieldsHasBeenSet; }
  template <typename RedactedFieldsT = Aws::Vector<FieldToMatch>>
  void SetRedactedFields(RedactedFieldsT&& value) {
    m_redactedFieldsHasBeenSet = true;
    m_redactedFields = std::forward<RedactedFieldsT>(value);
  }
  template <typename RedactedFieldsT = Aws::Vector<FieldToMatch>>
  WAFLoggingParameters& WithRedactedFields(RedactedFieldsT&& value) {
    SetRedactedFields(std::forward<RedactedFieldsT>(value));
    return *this;
  }
  template <typename RedactedFieldsT = FieldToMatch>
  WAFLoggingParameters& AddRedactedFields(RedactedFieldsT&& value) {
    m_redactedFieldsHasBeenSet = true;
    m_redactedFields.emplace_back(std::forward<RedactedFieldsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A filter configuration that determines which WAF log records to include or
   * exclude. </p>
   */
  inline const LoggingFilter& GetLoggingFilter() const { return m_loggingFilter; }
  inline bool LoggingFilterHasBeenSet() const { return m_loggingFilterHasBeenSet; }
  template <typename LoggingFilterT = LoggingFilter>
  void SetLoggingFilter(LoggingFilterT&& value) {
    m_loggingFilterHasBeenSet = true;
    m_loggingFilter = std::forward<LoggingFilterT>(value);
  }
  template <typename LoggingFilterT = LoggingFilter>
  WAFLoggingParameters& WithLoggingFilter(LoggingFilterT&& value) {
    SetLoggingFilter(std::forward<LoggingFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The type of WAF logs to collect (currently supports WAF_LOGS). </p>
   */
  inline WAFLogType GetLogType() const { return m_logType; }
  inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }
  inline void SetLogType(WAFLogType value) {
    m_logTypeHasBeenSet = true;
    m_logType = value;
  }
  inline WAFLoggingParameters& WithLogType(WAFLogType value) {
    SetLogType(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FieldToMatch> m_redactedFields;

  LoggingFilter m_loggingFilter;

  WAFLogType m_logType{WAFLogType::NOT_SET};
  bool m_redactedFieldsHasBeenSet = false;
  bool m_loggingFilterHasBeenSet = false;
  bool m_logTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
