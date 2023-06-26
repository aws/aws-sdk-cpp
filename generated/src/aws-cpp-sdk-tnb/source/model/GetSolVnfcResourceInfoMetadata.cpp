/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolVnfcResourceInfoMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace tnb
{
namespace Model
{

GetSolVnfcResourceInfoMetadata::GetSolVnfcResourceInfoMetadata() : 
    m_clusterHasBeenSet(false),
    m_helmChartHasBeenSet(false),
    m_nodeGroupHasBeenSet(false)
{
}

GetSolVnfcResourceInfoMetadata::GetSolVnfcResourceInfoMetadata(JsonView jsonValue) : 
    m_clusterHasBeenSet(false),
    m_helmChartHasBeenSet(false),
    m_nodeGroupHasBeenSet(false)
{
  *this = jsonValue;
}

GetSolVnfcResourceInfoMetadata& GetSolVnfcResourceInfoMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cluster"))
  {
    m_cluster = jsonValue.GetString("cluster");

    m_clusterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("helmChart"))
  {
    m_helmChart = jsonValue.GetString("helmChart");

    m_helmChartHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeGroup"))
  {
    m_nodeGroup = jsonValue.GetString("nodeGroup");

    m_nodeGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue GetSolVnfcResourceInfoMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_helmChartHasBeenSet)
  {
   payload.WithString("helmChart", m_helmChart);

  }

  if(m_nodeGroupHasBeenSet)
  {
   payload.WithString("nodeGroup", m_nodeGroup);

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
