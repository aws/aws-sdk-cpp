/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterClusterParameterGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRedshiftClusterClusterParameterGroup::AwsRedshiftClusterClusterParameterGroup() : 
    m_clusterParameterStatusListHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_parameterGroupNameHasBeenSet(false)
{
}

AwsRedshiftClusterClusterParameterGroup::AwsRedshiftClusterClusterParameterGroup(JsonView jsonValue) : 
    m_clusterParameterStatusListHasBeenSet(false),
    m_parameterApplyStatusHasBeenSet(false),
    m_parameterGroupNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterClusterParameterGroup& AwsRedshiftClusterClusterParameterGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterParameterStatusList"))
  {
    Aws::Utils::Array<JsonView> clusterParameterStatusListJsonList = jsonValue.GetArray("ClusterParameterStatusList");
    for(unsigned clusterParameterStatusListIndex = 0; clusterParameterStatusListIndex < clusterParameterStatusListJsonList.GetLength(); ++clusterParameterStatusListIndex)
    {
      m_clusterParameterStatusList.push_back(clusterParameterStatusListJsonList[clusterParameterStatusListIndex].AsObject());
    }
    m_clusterParameterStatusListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterApplyStatus"))
  {
    m_parameterApplyStatus = jsonValue.GetString("ParameterApplyStatus");

    m_parameterApplyStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterGroupName"))
  {
    m_parameterGroupName = jsonValue.GetString("ParameterGroupName");

    m_parameterGroupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterClusterParameterGroup::Jsonize() const
{
  JsonValue payload;

  if(m_clusterParameterStatusListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clusterParameterStatusListJsonList(m_clusterParameterStatusList.size());
   for(unsigned clusterParameterStatusListIndex = 0; clusterParameterStatusListIndex < clusterParameterStatusListJsonList.GetLength(); ++clusterParameterStatusListIndex)
   {
     clusterParameterStatusListJsonList[clusterParameterStatusListIndex].AsObject(m_clusterParameterStatusList[clusterParameterStatusListIndex].Jsonize());
   }
   payload.WithArray("ClusterParameterStatusList", std::move(clusterParameterStatusListJsonList));

  }

  if(m_parameterApplyStatusHasBeenSet)
  {
   payload.WithString("ParameterApplyStatus", m_parameterApplyStatus);

  }

  if(m_parameterGroupNameHasBeenSet)
  {
   payload.WithString("ParameterGroupName", m_parameterGroupName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
