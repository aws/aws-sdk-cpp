/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/SubCheckResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

SubCheckResult::SubCheckResult(JsonView jsonValue)
{
  *this = jsonValue;
}

SubCheckResult& SubCheckResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("References"))
  {
    Aws::Utils::Array<JsonView> referencesJsonList = jsonValue.GetArray("References");
    for(unsigned referencesIndex = 0; referencesIndex < referencesJsonList.GetLength(); ++referencesIndex)
    {
      m_references.push_back(referencesJsonList[referencesIndex].AsString());
    }
    m_referencesHasBeenSet = true;
  }
  return *this;
}

JsonValue SubCheckResult::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_referencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> referencesJsonList(m_references.size());
   for(unsigned referencesIndex = 0; referencesIndex < referencesJsonList.GetLength(); ++referencesIndex)
   {
     referencesJsonList[referencesIndex].AsString(m_references[referencesIndex]);
   }
   payload.WithArray("References", std::move(referencesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
