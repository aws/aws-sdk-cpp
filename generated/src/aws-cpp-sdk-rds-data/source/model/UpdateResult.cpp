/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/UpdateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

UpdateResult::UpdateResult() : 
    m_generatedFieldsHasBeenSet(false)
{
}

UpdateResult::UpdateResult(JsonView jsonValue) : 
    m_generatedFieldsHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateResult& UpdateResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("generatedFields"))
  {
    Aws::Utils::Array<JsonView> generatedFieldsJsonList = jsonValue.GetArray("generatedFields");
    for(unsigned generatedFieldsIndex = 0; generatedFieldsIndex < generatedFieldsJsonList.GetLength(); ++generatedFieldsIndex)
    {
      m_generatedFields.push_back(generatedFieldsJsonList[generatedFieldsIndex].AsObject());
    }
    m_generatedFieldsHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateResult::Jsonize() const
{
  JsonValue payload;

  if(m_generatedFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> generatedFieldsJsonList(m_generatedFields.size());
   for(unsigned generatedFieldsIndex = 0; generatedFieldsIndex < generatedFieldsJsonList.GetLength(); ++generatedFieldsIndex)
   {
     generatedFieldsJsonList[generatedFieldsIndex].AsObject(m_generatedFields[generatedFieldsIndex].Jsonize());
   }
   payload.WithArray("generatedFields", std::move(generatedFieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
