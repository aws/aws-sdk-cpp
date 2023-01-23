/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p>Information about the server configured for source code
   * analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/RemoteSourceCodeAnalysisServerInfo">AWS
   * API Reference</a></p>
   */
  class RemoteSourceCodeAnalysisServerInfo
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RemoteSourceCodeAnalysisServerInfo();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RemoteSourceCodeAnalysisServerInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API RemoteSourceCodeAnalysisServerInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time when the remote source code server was configured.</p>
     */
    inline const Aws::String& GetRemoteSourceCodeAnalysisServerConfigurationTimestamp() const{ return m_remoteSourceCodeAnalysisServerConfigurationTimestamp; }

    /**
     * <p>The time when the remote source code server was configured.</p>
     */
    inline bool RemoteSourceCodeAnalysisServerConfigurationTimestampHasBeenSet() const { return m_remoteSourceCodeAnalysisServerConfigurationTimestampHasBeenSet; }

    /**
     * <p>The time when the remote source code server was configured.</p>
     */
    inline void SetRemoteSourceCodeAnalysisServerConfigurationTimestamp(const Aws::String& value) { m_remoteSourceCodeAnalysisServerConfigurationTimestampHasBeenSet = true; m_remoteSourceCodeAnalysisServerConfigurationTimestamp = value; }

    /**
     * <p>The time when the remote source code server was configured.</p>
     */
    inline void SetRemoteSourceCodeAnalysisServerConfigurationTimestamp(Aws::String&& value) { m_remoteSourceCodeAnalysisServerConfigurationTimestampHasBeenSet = true; m_remoteSourceCodeAnalysisServerConfigurationTimestamp = std::move(value); }

    /**
     * <p>The time when the remote source code server was configured.</p>
     */
    inline void SetRemoteSourceCodeAnalysisServerConfigurationTimestamp(const char* value) { m_remoteSourceCodeAnalysisServerConfigurationTimestampHasBeenSet = true; m_remoteSourceCodeAnalysisServerConfigurationTimestamp.assign(value); }

    /**
     * <p>The time when the remote source code server was configured.</p>
     */
    inline RemoteSourceCodeAnalysisServerInfo& WithRemoteSourceCodeAnalysisServerConfigurationTimestamp(const Aws::String& value) { SetRemoteSourceCodeAnalysisServerConfigurationTimestamp(value); return *this;}

    /**
     * <p>The time when the remote source code server was configured.</p>
     */
    inline RemoteSourceCodeAnalysisServerInfo& WithRemoteSourceCodeAnalysisServerConfigurationTimestamp(Aws::String&& value) { SetRemoteSourceCodeAnalysisServerConfigurationTimestamp(std::move(value)); return *this;}

    /**
     * <p>The time when the remote source code server was configured.</p>
     */
    inline RemoteSourceCodeAnalysisServerInfo& WithRemoteSourceCodeAnalysisServerConfigurationTimestamp(const char* value) { SetRemoteSourceCodeAnalysisServerConfigurationTimestamp(value); return *this;}

  private:

    Aws::String m_remoteSourceCodeAnalysisServerConfigurationTimestamp;
    bool m_remoteSourceCodeAnalysisServerConfigurationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
