/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Sequence.h>
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

Sequence::Sequence(JsonView jsonValue)
{
  *this = jsonValue;
}

Sequence& Sequence::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uid"))
  {
    m_uid = jsonValue.GetString("Uid");
    m_uidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Actors"))
  {
    Aws::Utils::Array<JsonView> actorsJsonList = jsonValue.GetArray("Actors");
    for(unsigned actorsIndex = 0; actorsIndex < actorsJsonList.GetLength(); ++actorsIndex)
    {
      m_actors.push_back(actorsJsonList[actorsIndex].AsObject());
    }
    m_actorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Endpoints"))
  {
    Aws::Utils::Array<JsonView> endpointsJsonList = jsonValue.GetArray("Endpoints");
    for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
    {
      m_endpoints.push_back(endpointsJsonList[endpointsIndex].AsObject());
    }
    m_endpointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Signals"))
  {
    Aws::Utils::Array<JsonView> signalsJsonList = jsonValue.GetArray("Signals");
    for(unsigned signalsIndex = 0; signalsIndex < signalsJsonList.GetLength(); ++signalsIndex)
    {
      m_signals.push_back(signalsJsonList[signalsIndex].AsObject());
    }
    m_signalsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SequenceIndicators"))
  {
    Aws::Utils::Array<JsonView> sequenceIndicatorsJsonList = jsonValue.GetArray("SequenceIndicators");
    for(unsigned sequenceIndicatorsIndex = 0; sequenceIndicatorsIndex < sequenceIndicatorsJsonList.GetLength(); ++sequenceIndicatorsIndex)
    {
      m_sequenceIndicators.push_back(sequenceIndicatorsJsonList[sequenceIndicatorsIndex].AsObject());
    }
    m_sequenceIndicatorsHasBeenSet = true;
  }
  return *this;
}

JsonValue Sequence::Jsonize() const
{
  JsonValue payload;

  if(m_uidHasBeenSet)
  {
   payload.WithString("Uid", m_uid);

  }

  if(m_actorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actorsJsonList(m_actors.size());
   for(unsigned actorsIndex = 0; actorsIndex < actorsJsonList.GetLength(); ++actorsIndex)
   {
     actorsJsonList[actorsIndex].AsObject(m_actors[actorsIndex].Jsonize());
   }
   payload.WithArray("Actors", std::move(actorsJsonList));

  }

  if(m_endpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointsJsonList(m_endpoints.size());
   for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
   {
     endpointsJsonList[endpointsIndex].AsObject(m_endpoints[endpointsIndex].Jsonize());
   }
   payload.WithArray("Endpoints", std::move(endpointsJsonList));

  }

  if(m_signalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> signalsJsonList(m_signals.size());
   for(unsigned signalsIndex = 0; signalsIndex < signalsJsonList.GetLength(); ++signalsIndex)
   {
     signalsJsonList[signalsIndex].AsObject(m_signals[signalsIndex].Jsonize());
   }
   payload.WithArray("Signals", std::move(signalsJsonList));

  }

  if(m_sequenceIndicatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sequenceIndicatorsJsonList(m_sequenceIndicators.size());
   for(unsigned sequenceIndicatorsIndex = 0; sequenceIndicatorsIndex < sequenceIndicatorsJsonList.GetLength(); ++sequenceIndicatorsIndex)
   {
     sequenceIndicatorsJsonList[sequenceIndicatorsIndex].AsObject(m_sequenceIndicators[sequenceIndicatorsIndex].Jsonize());
   }
   payload.WithArray("SequenceIndicators", std::move(sequenceIndicatorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
