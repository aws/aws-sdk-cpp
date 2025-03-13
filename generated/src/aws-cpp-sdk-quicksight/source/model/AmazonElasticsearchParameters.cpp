/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AmazonElasticsearchParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AmazonElasticsearchParameters::AmazonElasticsearchParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

AmazonElasticsearchParameters& AmazonElasticsearchParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");
    m_domainHasBeenSet = true;
  }
  return *this;
}

JsonValue AmazonElasticsearchParameters::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
