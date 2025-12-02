/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/ELBLoadBalancerLoggingParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

ELBLoadBalancerLoggingParameters::ELBLoadBalancerLoggingParameters(JsonView jsonValue) { *this = jsonValue; }

ELBLoadBalancerLoggingParameters& ELBLoadBalancerLoggingParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OutputFormat")) {
    m_outputFormat = OutputFormatMapper::GetOutputFormatForName(jsonValue.GetString("OutputFormat"));
    m_outputFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FieldDelimiter")) {
    m_fieldDelimiter = jsonValue.GetString("FieldDelimiter");
    m_fieldDelimiterHasBeenSet = true;
  }
  return *this;
}

JsonValue ELBLoadBalancerLoggingParameters::Jsonize() const {
  JsonValue payload;

  if (m_outputFormatHasBeenSet) {
    payload.WithString("OutputFormat", OutputFormatMapper::GetNameForOutputFormat(m_outputFormat));
  }

  if (m_fieldDelimiterHasBeenSet) {
    payload.WithString("FieldDelimiter", m_fieldDelimiter);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
