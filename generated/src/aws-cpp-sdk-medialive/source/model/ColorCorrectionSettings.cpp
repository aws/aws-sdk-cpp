/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ColorCorrectionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

ColorCorrectionSettings::ColorCorrectionSettings() : 
    m_globalColorCorrectionsHasBeenSet(false)
{
}

ColorCorrectionSettings::ColorCorrectionSettings(JsonView jsonValue) : 
    m_globalColorCorrectionsHasBeenSet(false)
{
  *this = jsonValue;
}

ColorCorrectionSettings& ColorCorrectionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("globalColorCorrections"))
  {
    Aws::Utils::Array<JsonView> globalColorCorrectionsJsonList = jsonValue.GetArray("globalColorCorrections");
    for(unsigned globalColorCorrectionsIndex = 0; globalColorCorrectionsIndex < globalColorCorrectionsJsonList.GetLength(); ++globalColorCorrectionsIndex)
    {
      m_globalColorCorrections.push_back(globalColorCorrectionsJsonList[globalColorCorrectionsIndex].AsObject());
    }
    m_globalColorCorrectionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ColorCorrectionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_globalColorCorrectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> globalColorCorrectionsJsonList(m_globalColorCorrections.size());
   for(unsigned globalColorCorrectionsIndex = 0; globalColorCorrectionsIndex < globalColorCorrectionsJsonList.GetLength(); ++globalColorCorrectionsIndex)
   {
     globalColorCorrectionsJsonList[globalColorCorrectionsIndex].AsObject(m_globalColorCorrections[globalColorCorrectionsIndex].Jsonize());
   }
   payload.WithArray("globalColorCorrections", std::move(globalColorCorrectionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
