/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/OutputFormat.h>

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
 * <p> Configuration parameters for ELB load balancer logging, including output
 * format and field delimiter settings. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ELBLoadBalancerLoggingParameters">AWS
 * API Reference</a></p>
 */
class ELBLoadBalancerLoggingParameters {
 public:
  AWS_OBSERVABILITYADMIN_API ELBLoadBalancerLoggingParameters() = default;
  AWS_OBSERVABILITYADMIN_API ELBLoadBalancerLoggingParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API ELBLoadBalancerLoggingParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The format for ELB access log entries (plain text or JSON format). </p>
   */
  inline OutputFormat GetOutputFormat() const { return m_outputFormat; }
  inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
  inline void SetOutputFormat(OutputFormat value) {
    m_outputFormatHasBeenSet = true;
    m_outputFormat = value;
  }
  inline ELBLoadBalancerLoggingParameters& WithOutputFormat(OutputFormat value) {
    SetOutputFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The delimiter character used to separate fields in ELB access log entries
   * when using plain text format. </p>
   */
  inline const Aws::String& GetFieldDelimiter() const { return m_fieldDelimiter; }
  inline bool FieldDelimiterHasBeenSet() const { return m_fieldDelimiterHasBeenSet; }
  template <typename FieldDelimiterT = Aws::String>
  void SetFieldDelimiter(FieldDelimiterT&& value) {
    m_fieldDelimiterHasBeenSet = true;
    m_fieldDelimiter = std::forward<FieldDelimiterT>(value);
  }
  template <typename FieldDelimiterT = Aws::String>
  ELBLoadBalancerLoggingParameters& WithFieldDelimiter(FieldDelimiterT&& value) {
    SetFieldDelimiter(std::forward<FieldDelimiterT>(value));
    return *this;
  }
  ///@}
 private:
  OutputFormat m_outputFormat{OutputFormat::NOT_SET};
  bool m_outputFormatHasBeenSet = false;

  Aws::String m_fieldDelimiter;
  bool m_fieldDelimiterHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
