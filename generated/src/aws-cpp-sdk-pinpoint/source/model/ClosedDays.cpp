/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ClosedDays.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

ClosedDays::ClosedDays() : 
    m_eMAILHasBeenSet(false),
    m_sMSHasBeenSet(false),
    m_pUSHHasBeenSet(false),
    m_vOICEHasBeenSet(false),
    m_cUSTOMHasBeenSet(false)
{
}

ClosedDays::ClosedDays(JsonView jsonValue) : 
    m_eMAILHasBeenSet(false),
    m_sMSHasBeenSet(false),
    m_pUSHHasBeenSet(false),
    m_vOICEHasBeenSet(false),
    m_cUSTOMHasBeenSet(false)
{
  *this = jsonValue;
}

ClosedDays& ClosedDays::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EMAIL"))
  {
    Aws::Utils::Array<JsonView> eMAILJsonList = jsonValue.GetArray("EMAIL");
    for(unsigned eMAILIndex = 0; eMAILIndex < eMAILJsonList.GetLength(); ++eMAILIndex)
    {
      m_eMAIL.push_back(eMAILJsonList[eMAILIndex].AsObject());
    }
    m_eMAILHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SMS"))
  {
    Aws::Utils::Array<JsonView> sMSJsonList = jsonValue.GetArray("SMS");
    for(unsigned sMSIndex = 0; sMSIndex < sMSJsonList.GetLength(); ++sMSIndex)
    {
      m_sMS.push_back(sMSJsonList[sMSIndex].AsObject());
    }
    m_sMSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PUSH"))
  {
    Aws::Utils::Array<JsonView> pUSHJsonList = jsonValue.GetArray("PUSH");
    for(unsigned pUSHIndex = 0; pUSHIndex < pUSHJsonList.GetLength(); ++pUSHIndex)
    {
      m_pUSH.push_back(pUSHJsonList[pUSHIndex].AsObject());
    }
    m_pUSHHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VOICE"))
  {
    Aws::Utils::Array<JsonView> vOICEJsonList = jsonValue.GetArray("VOICE");
    for(unsigned vOICEIndex = 0; vOICEIndex < vOICEJsonList.GetLength(); ++vOICEIndex)
    {
      m_vOICE.push_back(vOICEJsonList[vOICEIndex].AsObject());
    }
    m_vOICEHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CUSTOM"))
  {
    Aws::Utils::Array<JsonView> cUSTOMJsonList = jsonValue.GetArray("CUSTOM");
    for(unsigned cUSTOMIndex = 0; cUSTOMIndex < cUSTOMJsonList.GetLength(); ++cUSTOMIndex)
    {
      m_cUSTOM.push_back(cUSTOMJsonList[cUSTOMIndex].AsObject());
    }
    m_cUSTOMHasBeenSet = true;
  }

  return *this;
}

JsonValue ClosedDays::Jsonize() const
{
  JsonValue payload;

  if(m_eMAILHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eMAILJsonList(m_eMAIL.size());
   for(unsigned eMAILIndex = 0; eMAILIndex < eMAILJsonList.GetLength(); ++eMAILIndex)
   {
     eMAILJsonList[eMAILIndex].AsObject(m_eMAIL[eMAILIndex].Jsonize());
   }
   payload.WithArray("EMAIL", std::move(eMAILJsonList));

  }

  if(m_sMSHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sMSJsonList(m_sMS.size());
   for(unsigned sMSIndex = 0; sMSIndex < sMSJsonList.GetLength(); ++sMSIndex)
   {
     sMSJsonList[sMSIndex].AsObject(m_sMS[sMSIndex].Jsonize());
   }
   payload.WithArray("SMS", std::move(sMSJsonList));

  }

  if(m_pUSHHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pUSHJsonList(m_pUSH.size());
   for(unsigned pUSHIndex = 0; pUSHIndex < pUSHJsonList.GetLength(); ++pUSHIndex)
   {
     pUSHJsonList[pUSHIndex].AsObject(m_pUSH[pUSHIndex].Jsonize());
   }
   payload.WithArray("PUSH", std::move(pUSHJsonList));

  }

  if(m_vOICEHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vOICEJsonList(m_vOICE.size());
   for(unsigned vOICEIndex = 0; vOICEIndex < vOICEJsonList.GetLength(); ++vOICEIndex)
   {
     vOICEJsonList[vOICEIndex].AsObject(m_vOICE[vOICEIndex].Jsonize());
   }
   payload.WithArray("VOICE", std::move(vOICEJsonList));

  }

  if(m_cUSTOMHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cUSTOMJsonList(m_cUSTOM.size());
   for(unsigned cUSTOMIndex = 0; cUSTOMIndex < cUSTOMJsonList.GetLength(); ++cUSTOMIndex)
   {
     cUSTOMJsonList[cUSTOMIndex].AsObject(m_cUSTOM[cUSTOMIndex].Jsonize());
   }
   payload.WithArray("CUSTOM", std::move(cUSTOMJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
