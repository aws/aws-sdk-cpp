/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsMskClusterDetails.h>
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

AwsMskClusterDetails::AwsMskClusterDetails() : 
    m_clusterInfoHasBeenSet(false)
{
}

AwsMskClusterDetails::AwsMskClusterDetails(JsonView jsonValue) : 
    m_clusterInfoHasBeenSet(false)
{
  *this = jsonValue;
}

AwsMskClusterDetails& AwsMskClusterDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterInfo"))
  {
    m_clusterInfo = jsonValue.GetObject("ClusterInfo");

    m_clusterInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsMskClusterDetails::Jsonize() const
{
  JsonValue payload;

  if(m_clusterInfoHasBeenSet)
  {
   payload.WithObject("ClusterInfo", m_clusterInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
