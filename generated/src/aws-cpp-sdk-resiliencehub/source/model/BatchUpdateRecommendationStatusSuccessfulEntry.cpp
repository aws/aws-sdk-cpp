/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/BatchUpdateRecommendationStatusSuccessfulEntry.h>
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

BatchUpdateRecommendationStatusSuccessfulEntry::BatchUpdateRecommendationStatusSuccessfulEntry() : 
    m_entryIdHasBeenSet(false),
    m_excludeReason(ExcludeRecommendationReason::NOT_SET),
    m_excludeReasonHasBeenSet(false),
    m_excluded(false),
    m_excludedHasBeenSet(false),
    m_itemHasBeenSet(false),
    m_referenceIdHasBeenSet(false)
{
}

BatchUpdateRecommendationStatusSuccessfulEntry::BatchUpdateRecommendationStatusSuccessfulEntry(JsonView jsonValue) : 
    m_entryIdHasBeenSet(false),
    m_excludeReason(ExcludeRecommendationReason::NOT_SET),
    m_excludeReasonHasBeenSet(false),
    m_excluded(false),
    m_excludedHasBeenSet(false),
    m_itemHasBeenSet(false),
    m_referenceIdHasBeenSet(false)
{
  *this = jsonValue;
}

BatchUpdateRecommendationStatusSuccessfulEntry& BatchUpdateRecommendationStatusSuccessfulEntry::operator =(JsonView jsonValue)
{
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

JsonValue BatchUpdateRecommendationStatusSuccessfulEntry::Jsonize() const
{
  JsonValue payload;

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
