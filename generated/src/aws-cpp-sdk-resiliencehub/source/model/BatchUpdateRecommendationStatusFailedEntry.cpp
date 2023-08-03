/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/BatchUpdateRecommendationStatusFailedEntry.h>
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

BatchUpdateRecommendationStatusFailedEntry::BatchUpdateRecommendationStatusFailedEntry() : 
    m_entryIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

BatchUpdateRecommendationStatusFailedEntry::BatchUpdateRecommendationStatusFailedEntry(JsonView jsonValue) : 
    m_entryIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

BatchUpdateRecommendationStatusFailedEntry& BatchUpdateRecommendationStatusFailedEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entryId"))
  {
    m_entryId = jsonValue.GetString("entryId");

    m_entryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchUpdateRecommendationStatusFailedEntry::Jsonize() const
{
  JsonValue payload;

  if(m_entryIdHasBeenSet)
  {
   payload.WithString("entryId", m_entryId);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
