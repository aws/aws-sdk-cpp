/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/LogType.h>

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
 * <p>Configuration parameters for Amazon Bedrock AgentCore logging, including
 * <code>logType</code> settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/LogDeliveryParameters">AWS
 * API Reference</a></p>
 */
class LogDeliveryParameters {
 public:
  AWS_OBSERVABILITYADMIN_API LogDeliveryParameters() = default;
  AWS_OBSERVABILITYADMIN_API LogDeliveryParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API LogDeliveryParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of log that the source is sending.</p>
   */
  inline const Aws::Vector<LogType>& GetLogTypes() const { return m_logTypes; }
  inline bool LogTypesHasBeenSet() const { return m_logTypesHasBeenSet; }
  template <typename LogTypesT = Aws::Vector<LogType>>
  void SetLogTypes(LogTypesT&& value) {
    m_logTypesHasBeenSet = true;
    m_logTypes = std::forward<LogTypesT>(value);
  }
  template <typename LogTypesT = Aws::Vector<LogType>>
  LogDeliveryParameters& WithLogTypes(LogTypesT&& value) {
    SetLogTypes(std::forward<LogTypesT>(value));
    return *this;
  }
  inline LogDeliveryParameters& AddLogTypes(LogType value) {
    m_logTypesHasBeenSet = true;
    m_logTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<LogType> m_logTypes;
  bool m_logTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
