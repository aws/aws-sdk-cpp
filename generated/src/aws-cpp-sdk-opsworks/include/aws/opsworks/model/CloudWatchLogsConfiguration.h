/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/CloudWatchLogsLogStream.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes the Amazon CloudWatch Logs configuration for a layer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CloudWatchLogsConfiguration">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogsConfiguration
  {
  public:
    AWS_OPSWORKS_API CloudWatchLogsConfiguration();
    AWS_OPSWORKS_API CloudWatchLogsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API CloudWatchLogsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether CloudWatch Logs is enabled for a layer.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CloudWatchLogsConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of configuration options for CloudWatch Logs.</p>
     */
    inline const Aws::Vector<CloudWatchLogsLogStream>& GetLogStreams() const{ return m_logStreams; }
    inline bool LogStreamsHasBeenSet() const { return m_logStreamsHasBeenSet; }
    inline void SetLogStreams(const Aws::Vector<CloudWatchLogsLogStream>& value) { m_logStreamsHasBeenSet = true; m_logStreams = value; }
    inline void SetLogStreams(Aws::Vector<CloudWatchLogsLogStream>&& value) { m_logStreamsHasBeenSet = true; m_logStreams = std::move(value); }
    inline CloudWatchLogsConfiguration& WithLogStreams(const Aws::Vector<CloudWatchLogsLogStream>& value) { SetLogStreams(value); return *this;}
    inline CloudWatchLogsConfiguration& WithLogStreams(Aws::Vector<CloudWatchLogsLogStream>&& value) { SetLogStreams(std::move(value)); return *this;}
    inline CloudWatchLogsConfiguration& AddLogStreams(const CloudWatchLogsLogStream& value) { m_logStreamsHasBeenSet = true; m_logStreams.push_back(value); return *this; }
    inline CloudWatchLogsConfiguration& AddLogStreams(CloudWatchLogsLogStream&& value) { m_logStreamsHasBeenSet = true; m_logStreams.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<CloudWatchLogsLogStream> m_logStreams;
    bool m_logStreamsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
