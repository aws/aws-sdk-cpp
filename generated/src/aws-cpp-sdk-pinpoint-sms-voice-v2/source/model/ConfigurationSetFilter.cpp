/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ConfigurationSetFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

ConfigurationSetFilter::ConfigurationSetFilter() : 
    m_name(ConfigurationSetFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

ConfigurationSetFilter::ConfigurationSetFilter(JsonView jsonValue) : 
    m_name(ConfigurationSetFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationSetFilter& ConfigurationSetFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = ConfigurationSetFilterNameMapper::GetConfigurationSetFilterNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationSetFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", ConfigurationSetFilterNameMapper::GetNameForConfigurationSetFilterName(m_name));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
