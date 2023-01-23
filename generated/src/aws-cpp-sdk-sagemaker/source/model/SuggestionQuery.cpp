/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SuggestionQuery.h>
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

SuggestionQuery::SuggestionQuery() : 
    m_propertyNameQueryHasBeenSet(false)
{
}

SuggestionQuery::SuggestionQuery(JsonView jsonValue) : 
    m_propertyNameQueryHasBeenSet(false)
{
  *this = jsonValue;
}

SuggestionQuery& SuggestionQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PropertyNameQuery"))
  {
    m_propertyNameQuery = jsonValue.GetObject("PropertyNameQuery");

    m_propertyNameQueryHasBeenSet = true;
  }

  return *this;
}

JsonValue SuggestionQuery::Jsonize() const
{
  JsonValue payload;

  if(m_propertyNameQueryHasBeenSet)
  {
   payload.WithObject("PropertyNameQuery", m_propertyNameQuery.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
