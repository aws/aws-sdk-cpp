/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/UpdateRecommendationStatusRequestEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

UpdateRecommendationStatusRequestEntry::UpdateRecommendationStatusRequestEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateRecommendationStatusRequestEntry& UpdateRecommendationStatusRequestEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appComponentId"))
  {
    m_appComponentId = jsonValue.GetString("appComponentId");
    m_appComponentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("entryId"))
  {
    m_entryId = jsonValue.GetString("entryId");
    m_entryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("excludeReason"))
  {
    m_excludeReason = ExcludeRecommendationReasonMapper::GetExcludeRecommendationReasonForName(jsonValue.GetString("excludeReason"));
    m_excludeReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("excluded"))
  {
    m_excluded = jsonValue.GetBool("excluded");
    m_excludedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("item"))
  {
    m_item = jsonValue.GetObject("item");
    m_itemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("referenceId"))
  {
    m_referenceId = jsonValue.GetString("referenceId");
    m_referenceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateRecommendationStatusRequestEntry::Jsonize() const
{
  JsonValue payload;

  if(m_appComponentIdHasBeenSet)
  {
   payload.WithString("appComponentId", m_appComponentId);

  }

  if(m_entryIdHasBeenSet)
  {
   payload.WithString("entryId", m_entryId);

  }

  if(m_excludeReasonHasBeenSet)
  {
   payload.WithString("excludeReason", ExcludeRecommendationReasonMapper::GetNameForExcludeRecommendationReason(m_excludeReason));
  }

  if(m_excludedHasBeenSet)
  {
   payload.WithBool("excluded", m_excluded);

  }

  if(m_itemHasBeenSet)
  {
   payload.WithObject("item", m_item.Jsonize());

  }

  if(m_referenceIdHasBeenSet)
  {
   payload.WithString("referenceId", m_referenceId);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
