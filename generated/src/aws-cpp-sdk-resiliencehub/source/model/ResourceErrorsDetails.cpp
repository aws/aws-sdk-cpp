/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResourceErrorsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

ResourceErrorsDetails::ResourceErrorsDetails() : 
    m_hasMoreErrors(false),
    m_hasMoreErrorsHasBeenSet(false),
    m_resourceErrorsHasBeenSet(false)
{
}

ResourceErrorsDetails::ResourceErrorsDetails(JsonView jsonValue) : 
    m_hasMoreErrors(false),
    m_hasMoreErrorsHasBeenSet(false),
    m_resourceErrorsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceErrorsDetails& ResourceErrorsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hasMoreErrors"))
  {
    m_hasMoreErrors = jsonValue.GetBool("hasMoreErrors");

    m_hasMoreErrorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceErrors"))
  {
    Aws::Utils::Array<JsonView> resourceErrorsJsonList = jsonValue.GetArray("resourceErrors");
    for(unsigned resourceErrorsIndex = 0; resourceErrorsIndex < resourceErrorsJsonList.GetLength(); ++resourceErrorsIndex)
    {
      m_resourceErrors.push_back(resourceErrorsJsonList[resourceErrorsIndex].AsObject());
    }
    m_resourceErrorsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceErrorsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_hasMoreErrorsHasBeenSet)
  {
   payload.WithBool("hasMoreErrors", m_hasMoreErrors);

  }

  if(m_resourceErrorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceErrorsJsonList(m_resourceErrors.size());
   for(unsigned resourceErrorsIndex = 0; resourceErrorsIndex < resourceErrorsJsonList.GetLength(); ++resourceErrorsIndex)
   {
     resourceErrorsJsonList[resourceErrorsIndex].AsObject(m_resourceErrors[resourceErrorsIndex].Jsonize());
   }
   payload.WithArray("resourceErrors", std::move(resourceErrorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
