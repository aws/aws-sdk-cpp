/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AggregatorV2.h>
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

AggregatorV2::AggregatorV2(JsonView jsonValue)
{
  *this = jsonValue;
}

AggregatorV2& AggregatorV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AggregatorV2Arn"))
  {
    m_aggregatorV2Arn = jsonValue.GetString("AggregatorV2Arn");
    m_aggregatorV2ArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AggregatorV2::Jsonize() const
{
  JsonValue payload;

  if(m_aggregatorV2ArnHasBeenSet)
  {
   payload.WithString("AggregatorV2Arn", m_aggregatorV2Arn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
