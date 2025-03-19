/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/FormInputCard.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QApps
{
namespace Model
{

FormInputCard::FormInputCard(JsonView jsonValue)
{
  *this = jsonValue;
}

FormInputCard& FormInputCard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dependencies"))
  {
    Aws::Utils::Array<JsonView> dependenciesJsonList = jsonValue.GetArray("dependencies");
    for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
    {
      m_dependencies.push_back(dependenciesJsonList[dependenciesIndex].AsString());
    }
    m_dependenciesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = CardTypeMapper::GetCardTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeMode"))
  {
    m_computeMode = InputCardComputeModeMapper::GetInputCardComputeModeForName(jsonValue.GetString("computeMode"));
    m_computeModeHasBeenSet = true;
  }
  return *this;
}

JsonValue FormInputCard::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_dependenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependenciesJsonList(m_dependencies.size());
   for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
   {
     dependenciesJsonList[dependenciesIndex].AsString(m_dependencies[dependenciesIndex]);
   }
   payload.WithArray("dependencies", std::move(dependenciesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CardTypeMapper::GetNameForCardType(m_type));
  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  if(m_computeModeHasBeenSet)
  {
   payload.WithString("computeMode", InputCardComputeModeMapper::GetNameForInputCardComputeMode(m_computeMode));
  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
