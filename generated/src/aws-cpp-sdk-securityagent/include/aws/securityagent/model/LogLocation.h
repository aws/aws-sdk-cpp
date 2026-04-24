/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/CloudWatchLog.h>
#include <aws/securityagent/model/LogType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Location information for execution logs</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/LogLocation">AWS
 * API Reference</a></p>
 */
class LogLocation {
 public:
  AWS_SECURITYAGENT_API LogLocation() = default;
  AWS_SECURITYAGENT_API LogLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API LogLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Type of log storage</p>
   */
  inline LogType GetLogType() const { return m_logType; }
  inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }
  inline void SetLogType(LogType value) {
    m_logTypeHasBeenSet = true;
    m_logType = value;
  }
  inline LogLocation& WithLogType(LogType value) {
    SetLogType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>CloudWatch log information if logs are stored in CloudWatch</p>
   */
  inline const CloudWatchLog& GetCloudWatchLog() const { return m_cloudWatchLog; }
  inline bool CloudWatchLogHasBeenSet() const { return m_cloudWatchLogHasBeenSet; }
  template <typename CloudWatchLogT = CloudWatchLog>
  void SetCloudWatchLog(CloudWatchLogT&& value) {
    m_cloudWatchLogHasBeenSet = true;
    m_cloudWatchLog = std::forward<CloudWatchLogT>(value);
  }
  template <typename CloudWatchLogT = CloudWatchLog>
  LogLocation& WithCloudWatchLog(CloudWatchLogT&& value) {
    SetCloudWatchLog(std::forward<CloudWatchLogT>(value));
    return *this;
  }
  ///@}
 private:
  LogType m_logType{LogType::NOT_SET};

  CloudWatchLog m_cloudWatchLog;
  bool m_logTypeHasBeenSet = false;
  bool m_cloudWatchLogHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
