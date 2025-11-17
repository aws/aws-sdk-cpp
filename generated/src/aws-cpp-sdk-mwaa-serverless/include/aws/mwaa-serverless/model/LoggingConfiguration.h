/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {

/**
 * <p>Configuration for workflow logging that specifies where you should store your
 * workflow execution logs. Amazon Managed Workflows for Apache Airflow Serverless
 * provides comprehensive logging capabilities that capture workflow execution
 * details, task-level information, and system events. Logs are automatically
 * exported to your specified CloudWatch log group using remote logging
 * functionality, providing centralized observability across the distributed,
 * multi-tenant execution environment. This enables effective debugging,
 * monitoring, and compliance auditing of workflow executions.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/LoggingConfiguration">AWS
 * API Reference</a></p>
 */
class LoggingConfiguration {
 public:
  AWS_MWAASERVERLESS_API LoggingConfiguration() = default;
  AWS_MWAASERVERLESS_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the CloudWatch log group where workflow execution logs are
   * stored.</p>
   */
  inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
  inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
  template <typename LogGroupNameT = Aws::String>
  void SetLogGroupName(LogGroupNameT&& value) {
    m_logGroupNameHasBeenSet = true;
    m_logGroupName = std::forward<LogGroupNameT>(value);
  }
  template <typename LogGroupNameT = Aws::String>
  LoggingConfiguration& WithLogGroupName(LogGroupNameT&& value) {
    SetLogGroupName(std::forward<LogGroupNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroupName;
  bool m_logGroupNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
