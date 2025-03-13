/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/QueryComputeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

QueryComputeRequest::QueryComputeRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryComputeRequest& QueryComputeRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComputeMode"))
  {
    m_computeMode = ComputeModeMapper::GetComputeModeForName(jsonValue.GetString("ComputeMode"));
    m_computeModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisionedCapacity"))
  {
    m_provisionedCapacity = jsonValue.GetObject("ProvisionedCapacity");
    m_provisionedCapacityHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryComputeRequest::Jsonize() const
{
  JsonValue payload;

  if(m_computeModeHasBeenSet)
  {
   payload.WithString("ComputeMode", ComputeModeMapper::GetNameForComputeMode(m_computeMode));
  }

  if(m_provisionedCapacityHasBeenSet)
  {
   payload.WithObject("ProvisionedCapacity", m_provisionedCapacity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
