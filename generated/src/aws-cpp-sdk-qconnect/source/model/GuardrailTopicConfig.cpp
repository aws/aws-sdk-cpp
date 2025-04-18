/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GuardrailTopicConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

GuardrailTopicConfig::GuardrailTopicConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailTopicConfig& GuardrailTopicConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetString("definition");
    m_definitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("examples"))
  {
    Aws::Utils::Array<JsonView> examplesJsonList = jsonValue.GetArray("examples");
    for(unsigned examplesIndex = 0; examplesIndex < examplesJsonList.GetLength(); ++examplesIndex)
    {
      m_examples.push_back(examplesJsonList[examplesIndex].AsString());
    }
    m_examplesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = GuardrailTopicTypeMapper::GetGuardrailTopicTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailTopicConfig::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithString("definition", m_definition);

  }

  if(m_examplesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> examplesJsonList(m_examples.size());
   for(unsigned examplesIndex = 0; examplesIndex < examplesJsonList.GetLength(); ++examplesIndex)
   {
     examplesJsonList[examplesIndex].AsString(m_examples[examplesIndex]);
   }
   payload.WithArray("examples", std::move(examplesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailTopicTypeMapper::GetNameForGuardrailTopicType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
