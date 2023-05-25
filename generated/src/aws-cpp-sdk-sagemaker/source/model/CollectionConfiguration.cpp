/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CollectionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

CollectionConfiguration::CollectionConfiguration() : 
    m_collectionNameHasBeenSet(false),
    m_collectionParametersHasBeenSet(false)
{
}

CollectionConfiguration::CollectionConfiguration(JsonView jsonValue) : 
    m_collectionNameHasBeenSet(false),
    m_collectionParametersHasBeenSet(false)
{
  *this = jsonValue;
}

CollectionConfiguration& CollectionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CollectionName"))
  {
    m_collectionName = jsonValue.GetString("CollectionName");

    m_collectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CollectionParameters"))
  {
    Aws::Map<Aws::String, JsonView> collectionParametersJsonMap = jsonValue.GetObject("CollectionParameters").GetAllObjects();
    for(auto& collectionParametersItem : collectionParametersJsonMap)
    {
      m_collectionParameters[collectionParametersItem.first] = collectionParametersItem.second.AsString();
    }
    m_collectionParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue CollectionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_collectionNameHasBeenSet)
  {
   payload.WithString("CollectionName", m_collectionName);

  }

  if(m_collectionParametersHasBeenSet)
  {
   JsonValue collectionParametersJsonMap;
   for(auto& collectionParametersItem : m_collectionParameters)
   {
     collectionParametersJsonMap.WithString(collectionParametersItem.first, collectionParametersItem.second);
   }
   payload.WithObject("CollectionParameters", std::move(collectionParametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
