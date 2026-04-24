/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

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
 * <p>Reference to logs stored in CloudWatch</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CloudWatchLog">AWS
 * API Reference</a></p>
 */
class CloudWatchLog {
 public:
  AWS_SECURITYAGENT_API CloudWatchLog() = default;
  AWS_SECURITYAGENT_API CloudWatchLog(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API CloudWatchLog& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Name of the CloudWatch log group</p>
   */
  inline const Aws::String& GetLogGroup() const { return m_logGroup; }
  inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
  template <typename LogGroupT = Aws::String>
  void SetLogGroup(LogGroupT&& value) {
    m_logGroupHasBeenSet = true;
    m_logGroup = std::forward<LogGroupT>(value);
  }
  template <typename LogGroupT = Aws::String>
  CloudWatchLog& WithLogGroup(LogGroupT&& value) {
    SetLogGroup(std::forward<LogGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the CloudWatch log stream</p>
   */
  inline const Aws::String& GetLogStream() const { return m_logStream; }
  inline bool LogStreamHasBeenSet() const { return m_logStreamHasBeenSet; }
  template <typename LogStreamT = Aws::String>
  void SetLogStream(LogStreamT&& value) {
    m_logStreamHasBeenSet = true;
    m_logStream = std::forward<LogStreamT>(value);
  }
  template <typename LogStreamT = Aws::String>
  CloudWatchLog& WithLogStream(LogStreamT&& value) {
    SetLogStream(std::forward<LogStreamT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroup;

  Aws::String m_logStream;
  bool m_logGroupHasBeenSet = false;
  bool m_logStreamHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
