/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/AdditionalInfoResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

AdditionalInfoResponse::AdditionalInfoResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

AdditionalInfoResponse& AdditionalInfoResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("brazilAdditionalInfo"))
  {
    m_brazilAdditionalInfo = jsonValue.GetObject("brazilAdditionalInfo");
    m_brazilAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("canadaAdditionalInfo"))
  {
    m_canadaAdditionalInfo = jsonValue.GetObject("canadaAdditionalInfo");
    m_canadaAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("egyptAdditionalInfo"))
  {
    m_egyptAdditionalInfo = jsonValue.GetObject("egyptAdditionalInfo");
    m_egyptAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("estoniaAdditionalInfo"))
  {
    m_estoniaAdditionalInfo = jsonValue.GetObject("estoniaAdditionalInfo");
    m_estoniaAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("georgiaAdditionalInfo"))
  {
    m_georgiaAdditionalInfo = jsonValue.GetObject("georgiaAdditionalInfo");
    m_georgiaAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("greeceAdditionalInfo"))
  {
    m_greeceAdditionalInfo = jsonValue.GetObject("greeceAdditionalInfo");
    m_greeceAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("indiaAdditionalInfo"))
  {
    m_indiaAdditionalInfo = jsonValue.GetObject("indiaAdditionalInfo");
    m_indiaAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("indonesiaAdditionalInfo"))
  {
    m_indonesiaAdditionalInfo = jsonValue.GetObject("indonesiaAdditionalInfo");
    m_indonesiaAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("israelAdditionalInfo"))
  {
    m_israelAdditionalInfo = jsonValue.GetObject("israelAdditionalInfo");
    m_israelAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("italyAdditionalInfo"))
  {
    m_italyAdditionalInfo = jsonValue.GetObject("italyAdditionalInfo");
    m_italyAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kenyaAdditionalInfo"))
  {
    m_kenyaAdditionalInfo = jsonValue.GetObject("kenyaAdditionalInfo");
    m_kenyaAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("malaysiaAdditionalInfo"))
  {
    m_malaysiaAdditionalInfo = jsonValue.GetObject("malaysiaAdditionalInfo");
    m_malaysiaAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("polandAdditionalInfo"))
  {
    m_polandAdditionalInfo = jsonValue.GetObject("polandAdditionalInfo");
    m_polandAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("romaniaAdditionalInfo"))
  {
    m_romaniaAdditionalInfo = jsonValue.GetObject("romaniaAdditionalInfo");
    m_romaniaAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("saudiArabiaAdditionalInfo"))
  {
    m_saudiArabiaAdditionalInfo = jsonValue.GetObject("saudiArabiaAdditionalInfo");
    m_saudiArabiaAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("southKoreaAdditionalInfo"))
  {
    m_southKoreaAdditionalInfo = jsonValue.GetObject("southKoreaAdditionalInfo");
    m_southKoreaAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("spainAdditionalInfo"))
  {
    m_spainAdditionalInfo = jsonValue.GetObject("spainAdditionalInfo");
    m_spainAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("turkeyAdditionalInfo"))
  {
    m_turkeyAdditionalInfo = jsonValue.GetObject("turkeyAdditionalInfo");
    m_turkeyAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ukraineAdditionalInfo"))
  {
    m_ukraineAdditionalInfo = jsonValue.GetObject("ukraineAdditionalInfo");
    m_ukraineAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uzbekistanAdditionalInfo"))
  {
    m_uzbekistanAdditionalInfo = jsonValue.GetObject("uzbekistanAdditionalInfo");
    m_uzbekistanAdditionalInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vietnamAdditionalInfo"))
  {
    m_vietnamAdditionalInfo = jsonValue.GetObject("vietnamAdditionalInfo");
    m_vietnamAdditionalInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue AdditionalInfoResponse::Jsonize() const
{
  JsonValue payload;

  if(m_brazilAdditionalInfoHasBeenSet)
  {
   payload.WithObject("brazilAdditionalInfo", m_brazilAdditionalInfo.Jsonize());

  }

  if(m_canadaAdditionalInfoHasBeenSet)
  {
   payload.WithObject("canadaAdditionalInfo", m_canadaAdditionalInfo.Jsonize());

  }

  if(m_egyptAdditionalInfoHasBeenSet)
  {
   payload.WithObject("egyptAdditionalInfo", m_egyptAdditionalInfo.Jsonize());

  }

  if(m_estoniaAdditionalInfoHasBeenSet)
  {
   payload.WithObject("estoniaAdditionalInfo", m_estoniaAdditionalInfo.Jsonize());

  }

  if(m_georgiaAdditionalInfoHasBeenSet)
  {
   payload.WithObject("georgiaAdditionalInfo", m_georgiaAdditionalInfo.Jsonize());

  }

  if(m_greeceAdditionalInfoHasBeenSet)
  {
   payload.WithObject("greeceAdditionalInfo", m_greeceAdditionalInfo.Jsonize());

  }

  if(m_indiaAdditionalInfoHasBeenSet)
  {
   payload.WithObject("indiaAdditionalInfo", m_indiaAdditionalInfo.Jsonize());

  }

  if(m_indonesiaAdditionalInfoHasBeenSet)
  {
   payload.WithObject("indonesiaAdditionalInfo", m_indonesiaAdditionalInfo.Jsonize());

  }

  if(m_israelAdditionalInfoHasBeenSet)
  {
   payload.WithObject("israelAdditionalInfo", m_israelAdditionalInfo.Jsonize());

  }

  if(m_italyAdditionalInfoHasBeenSet)
  {
   payload.WithObject("italyAdditionalInfo", m_italyAdditionalInfo.Jsonize());

  }

  if(m_kenyaAdditionalInfoHasBeenSet)
  {
   payload.WithObject("kenyaAdditionalInfo", m_kenyaAdditionalInfo.Jsonize());

  }

  if(m_malaysiaAdditionalInfoHasBeenSet)
  {
   payload.WithObject("malaysiaAdditionalInfo", m_malaysiaAdditionalInfo.Jsonize());

  }

  if(m_polandAdditionalInfoHasBeenSet)
  {
   payload.WithObject("polandAdditionalInfo", m_polandAdditionalInfo.Jsonize());

  }

  if(m_romaniaAdditionalInfoHasBeenSet)
  {
   payload.WithObject("romaniaAdditionalInfo", m_romaniaAdditionalInfo.Jsonize());

  }

  if(m_saudiArabiaAdditionalInfoHasBeenSet)
  {
   payload.WithObject("saudiArabiaAdditionalInfo", m_saudiArabiaAdditionalInfo.Jsonize());

  }

  if(m_southKoreaAdditionalInfoHasBeenSet)
  {
   payload.WithObject("southKoreaAdditionalInfo", m_southKoreaAdditionalInfo.Jsonize());

  }

  if(m_spainAdditionalInfoHasBeenSet)
  {
   payload.WithObject("spainAdditionalInfo", m_spainAdditionalInfo.Jsonize());

  }

  if(m_turkeyAdditionalInfoHasBeenSet)
  {
   payload.WithObject("turkeyAdditionalInfo", m_turkeyAdditionalInfo.Jsonize());

  }

  if(m_ukraineAdditionalInfoHasBeenSet)
  {
   payload.WithObject("ukraineAdditionalInfo", m_ukraineAdditionalInfo.Jsonize());

  }

  if(m_uzbekistanAdditionalInfoHasBeenSet)
  {
   payload.WithObject("uzbekistanAdditionalInfo", m_uzbekistanAdditionalInfo.Jsonize());

  }

  if(m_vietnamAdditionalInfoHasBeenSet)
  {
   payload.WithObject("vietnamAdditionalInfo", m_vietnamAdditionalInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
