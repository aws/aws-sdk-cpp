/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/ImpactedAwsRegion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

ImpactedAwsRegion::ImpactedAwsRegion(JsonView jsonValue)
{
  *this = jsonValue;
}

ImpactedAwsRegion& ImpactedAwsRegion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("region"))
  {
    m_region = AwsRegionMapper::GetAwsRegionForName(jsonValue.GetString("region"));
    m_regionHasBeenSet = true;
  }
  return *this;
}

JsonValue ImpactedAwsRegion::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", AwsRegionMapper::GetNameForAwsRegion(m_region));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
