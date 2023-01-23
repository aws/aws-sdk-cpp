/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/Root.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

Root::Root() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_policyTypesHasBeenSet(false)
{
}

Root::Root(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_policyTypesHasBeenSet(false)
{
  *this = jsonValue;
}

Root& Root::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyTypes"))
  {
    Aws::Utils::Array<JsonView> policyTypesJsonList = jsonValue.GetArray("PolicyTypes");
    for(unsigned policyTypesIndex = 0; policyTypesIndex < policyTypesJsonList.GetLength(); ++policyTypesIndex)
    {
      m_policyTypes.push_back(policyTypesJsonList[policyTypesIndex].AsObject());
    }
    m_policyTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue Root::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_policyTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policyTypesJsonList(m_policyTypes.size());
   for(unsigned policyTypesIndex = 0; policyTypesIndex < policyTypesJsonList.GetLength(); ++policyTypesIndex)
   {
     policyTypesJsonList[policyTypesIndex].AsObject(m_policyTypes[policyTypesIndex].Jsonize());
   }
   payload.WithArray("PolicyTypes", std::move(policyTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
