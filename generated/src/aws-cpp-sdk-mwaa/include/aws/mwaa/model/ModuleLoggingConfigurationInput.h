/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/model/LoggingLevel.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MWAA
{
namespace Model
{

  /**
   * <p>Enables the Apache Airflow log type (e.g. <code>DagProcessingLogs</code>) and
   * defines the log level to send to CloudWatch Logs (e.g.
   * <code>INFO</code>).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/ModuleLoggingConfigurationInput">AWS
   * API Reference</a></p>
   */
  class ModuleLoggingConfigurationInput
  {
  public:
    AWS_MWAA_API ModuleLoggingConfigurationInput() = default;
    AWS_MWAA_API ModuleLoggingConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API ModuleLoggingConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether to enable the Apache Airflow log type (e.g.
     * <code>DagProcessingLogs</code>).</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ModuleLoggingConfigurationInput& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the Apache Airflow log level (e.g. <code>INFO</code>) to send to
     * CloudWatch Logs.</p>
     */
    inline LoggingLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LoggingLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline ModuleLoggingConfigurationInput& WithLogLevel(LoggingLevel value) { SetLogLevel(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    LoggingLevel m_logLevel{LoggingLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
