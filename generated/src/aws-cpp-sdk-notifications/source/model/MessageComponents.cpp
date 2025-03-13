/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/MessageComponents.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Notifications
{
namespace Model
{

MessageComponents::MessageComponents(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageComponents& MessageComponents::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("headline"))
  {
    m_headline = jsonValue.GetString("headline");
    m_headlineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("paragraphSummary"))
  {
    m_paragraphSummary = jsonValue.GetString("paragraphSummary");
    m_paragraphSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("completeDescription"))
  {
    m_completeDescription = jsonValue.GetString("completeDescription");
    m_completeDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dimensions"))
  {
    Aws::Utils::Array<JsonView> dimensionsJsonList = jsonValue.GetArray("dimensions");
    for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
    {
      m_dimensions.push_back(dimensionsJsonList[dimensionsIndex].AsObject());
    }
    m_dimensionsHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageComponents::Jsonize() const
{
  JsonValue payload;

  if(m_headlineHasBeenSet)
  {
   payload.WithString("headline", m_headline);

  }

  if(m_paragraphSummaryHasBeenSet)
  {
   payload.WithString("paragraphSummary", m_paragraphSummary);

  }

  if(m_completeDescriptionHasBeenSet)
  {
   payload.WithString("completeDescription", m_completeDescription);

  }

  if(m_dimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionsJsonList(m_dimensions.size());
   for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
   {
     dimensionsJsonList[dimensionsIndex].AsObject(m_dimensions[dimensionsIndex].Jsonize());
   }
   payload.WithArray("dimensions", std::move(dimensionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
