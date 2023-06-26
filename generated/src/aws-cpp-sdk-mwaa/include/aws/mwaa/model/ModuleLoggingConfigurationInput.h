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
    AWS_MWAA_API ModuleLoggingConfigurationInput();
    AWS_MWAA_API ModuleLoggingConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API ModuleLoggingConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether to enable the Apache Airflow log type (e.g.
     * <code>DagProcessingLogs</code>).</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether to enable the Apache Airflow log type (e.g.
     * <code>DagProcessingLogs</code>).</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether to enable the Apache Airflow log type (e.g.
     * <code>DagProcessingLogs</code>).</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether to enable the Apache Airflow log type (e.g.
     * <code>DagProcessingLogs</code>).</p>
     */
    inline ModuleLoggingConfigurationInput& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Defines the Apache Airflow log level (e.g. <code>INFO</code>) to send to
     * CloudWatch Logs.</p>
     */
    inline const LoggingLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * <p>Defines the Apache Airflow log level (e.g. <code>INFO</code>) to send to
     * CloudWatch Logs.</p>
     */
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    /**
     * <p>Defines the Apache Airflow log level (e.g. <code>INFO</code>) to send to
     * CloudWatch Logs.</p>
     */
    inline void SetLogLevel(const LoggingLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    /**
     * <p>Defines the Apache Airflow log level (e.g. <code>INFO</code>) to send to
     * CloudWatch Logs.</p>
     */
    inline void SetLogLevel(LoggingLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    /**
     * <p>Defines the Apache Airflow log level (e.g. <code>INFO</code>) to send to
     * CloudWatch Logs.</p>
     */
    inline ModuleLoggingConfigurationInput& WithLogLevel(const LoggingLevel& value) { SetLogLevel(value); return *this;}

    /**
     * <p>Defines the Apache Airflow log level (e.g. <code>INFO</code>) to send to
     * CloudWatch Logs.</p>
     */
    inline ModuleLoggingConfigurationInput& WithLogLevel(LoggingLevel&& value) { SetLogLevel(std::move(value)); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    LoggingLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
