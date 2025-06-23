/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/InstanceNetworkPerformanceOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

InstanceNetworkPerformanceOptionsRequest::InstanceNetworkPerformanceOptionsRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceNetworkPerformanceOptionsRequest& InstanceNetworkPerformanceOptionsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BandwidthWeighting"))
  {
    m_bandwidthWeighting = BandwidthWeightingEnumMapper::GetBandwidthWeightingEnumForName(jsonValue.GetString("BandwidthWeighting"));
    m_bandwidthWeightingHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceNetworkPerformanceOptionsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_bandwidthWeightingHasBeenSet)
  {
   payload.WithString("BandwidthWeighting", BandwidthWeightingEnumMapper::GetNameForBandwidthWeightingEnum(m_bandwidthWeighting));
  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
