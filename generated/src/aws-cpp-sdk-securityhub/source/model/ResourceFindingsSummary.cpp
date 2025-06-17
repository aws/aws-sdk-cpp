/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ResourceFindingsSummary.h>
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

ResourceFindingsSummary::ResourceFindingsSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceFindingsSummary& ResourceFindingsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FindingType"))
  {
    m_findingType = jsonValue.GetString("FindingType");
    m_findingTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProductName"))
  {
    m_productName = jsonValue.GetString("ProductName");
    m_productNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalFindings"))
  {
    m_totalFindings = jsonValue.GetInteger("TotalFindings");
    m_totalFindingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Severities"))
  {
    m_severities = jsonValue.GetObject("Severities");
    m_severitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceFindingsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_findingTypeHasBeenSet)
  {
   payload.WithString("FindingType", m_findingType);

  }

  if(m_productNameHasBeenSet)
  {
   payload.WithString("ProductName", m_productName);

  }

  if(m_totalFindingsHasBeenSet)
  {
   payload.WithInteger("TotalFindings", m_totalFindings);

  }

  if(m_severitiesHasBeenSet)
  {
   payload.WithObject("Severities", m_severities.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
