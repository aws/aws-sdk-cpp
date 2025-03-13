/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/RetrievedTrace.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

RetrievedTrace::RetrievedTrace(JsonView jsonValue)
{
  *this = jsonValue;
}

RetrievedTrace& RetrievedTrace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetDouble("Duration");
    m_durationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Spans"))
  {
    Aws::Utils::Array<JsonView> spansJsonList = jsonValue.GetArray("Spans");
    for(unsigned spansIndex = 0; spansIndex < spansJsonList.GetLength(); ++spansIndex)
    {
      m_spans.push_back(spansJsonList[spansIndex].AsObject());
    }
    m_spansHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrievedTrace::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithDouble("Duration", m_duration);

  }

  if(m_spansHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> spansJsonList(m_spans.size());
   for(unsigned spansIndex = 0; spansIndex < spansJsonList.GetLength(); ++spansIndex)
   {
     spansJsonList[spansIndex].AsObject(m_spans[spansIndex].Jsonize());
   }
   payload.WithArray("Spans", std::move(spansJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
