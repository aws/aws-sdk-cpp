/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/FindingHistoryRecord.h>
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

FindingHistoryRecord::FindingHistoryRecord() : 
    m_findingIdentifierHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_findingCreated(false),
    m_findingCreatedHasBeenSet(false),
    m_updateSourceHasBeenSet(false),
    m_updatesHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

FindingHistoryRecord::FindingHistoryRecord(JsonView jsonValue) : 
    m_findingIdentifierHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_findingCreated(false),
    m_findingCreatedHasBeenSet(false),
    m_updateSourceHasBeenSet(false),
    m_updatesHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

FindingHistoryRecord& FindingHistoryRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FindingIdentifier"))
  {
    m_findingIdentifier = jsonValue.GetObject("FindingIdentifier");

    m_findingIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetString("UpdateTime");

    m_updateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindingCreated"))
  {
    m_findingCreated = jsonValue.GetBool("FindingCreated");

    m_findingCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateSource"))
  {
    m_updateSource = jsonValue.GetObject("UpdateSource");

    m_updateSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Updates"))
  {
    Aws::Utils::Array<JsonView> updatesJsonList = jsonValue.GetArray("Updates");
    for(unsigned updatesIndex = 0; updatesIndex < updatesJsonList.GetLength(); ++updatesIndex)
    {
      m_updates.push_back(updatesJsonList[updatesIndex].AsObject());
    }
    m_updatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingHistoryRecord::Jsonize() const
{
  JsonValue payload;

  if(m_findingIdentifierHasBeenSet)
  {
   payload.WithObject("FindingIdentifier", m_findingIdentifier.Jsonize());

  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithString("UpdateTime", m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_findingCreatedHasBeenSet)
  {
   payload.WithBool("FindingCreated", m_findingCreated);

  }

  if(m_updateSourceHasBeenSet)
  {
   payload.WithObject("UpdateSource", m_updateSource.Jsonize());

  }

  if(m_updatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updatesJsonList(m_updates.size());
   for(unsigned updatesIndex = 0; updatesIndex < updatesJsonList.GetLength(); ++updatesIndex)
   {
     updatesJsonList[updatesIndex].AsObject(m_updates[updatesIndex].Jsonize());
   }
   payload.WithArray("Updates", std::move(updatesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
