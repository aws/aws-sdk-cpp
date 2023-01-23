/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/FindingAggregator.h>
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

FindingAggregator::FindingAggregator() : 
    m_findingAggregatorArnHasBeenSet(false)
{
}

FindingAggregator::FindingAggregator(JsonView jsonValue) : 
    m_findingAggregatorArnHasBeenSet(false)
{
  *this = jsonValue;
}

FindingAggregator& FindingAggregator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FindingAggregatorArn"))
  {
    m_findingAggregatorArn = jsonValue.GetString("FindingAggregatorArn");

    m_findingAggregatorArnHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingAggregator::Jsonize() const
{
  JsonValue payload;

  if(m_findingAggregatorArnHasBeenSet)
  {
   payload.WithString("FindingAggregatorArn", m_findingAggregatorArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
