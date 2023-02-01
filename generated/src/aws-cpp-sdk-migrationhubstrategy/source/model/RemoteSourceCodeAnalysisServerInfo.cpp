/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/RemoteSourceCodeAnalysisServerInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

RemoteSourceCodeAnalysisServerInfo::RemoteSourceCodeAnalysisServerInfo() : 
    m_remoteSourceCodeAnalysisServerConfigurationTimestampHasBeenSet(false)
{
}

RemoteSourceCodeAnalysisServerInfo::RemoteSourceCodeAnalysisServerInfo(JsonView jsonValue) : 
    m_remoteSourceCodeAnalysisServerConfigurationTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

RemoteSourceCodeAnalysisServerInfo& RemoteSourceCodeAnalysisServerInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("remoteSourceCodeAnalysisServerConfigurationTimestamp"))
  {
    m_remoteSourceCodeAnalysisServerConfigurationTimestamp = jsonValue.GetString("remoteSourceCodeAnalysisServerConfigurationTimestamp");

    m_remoteSourceCodeAnalysisServerConfigurationTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue RemoteSourceCodeAnalysisServerInfo::Jsonize() const
{
  JsonValue payload;

  if(m_remoteSourceCodeAnalysisServerConfigurationTimestampHasBeenSet)
  {
   payload.WithString("remoteSourceCodeAnalysisServerConfigurationTimestamp", m_remoteSourceCodeAnalysisServerConfigurationTimestamp);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
