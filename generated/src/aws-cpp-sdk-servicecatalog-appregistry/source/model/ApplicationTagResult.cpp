/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/ApplicationTagResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

ApplicationTagResult::ApplicationTagResult() : 
    m_applicationTagStatus(ApplicationTagStatus::NOT_SET),
    m_applicationTagStatusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

ApplicationTagResult::ApplicationTagResult(JsonView jsonValue) : 
    m_applicationTagStatus(ApplicationTagStatus::NOT_SET),
    m_applicationTagStatusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationTagResult& ApplicationTagResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationTagStatus"))
  {
    m_applicationTagStatus = ApplicationTagStatusMapper::GetApplicationTagStatusForName(jsonValue.GetString("applicationTagStatus"));

    m_applicationTagStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationTagResult::Jsonize() const
{
  JsonValue payload;

  if(m_applicationTagStatusHasBeenSet)
  {
   payload.WithString("applicationTagStatus", ApplicationTagStatusMapper::GetNameForApplicationTagStatus(m_applicationTagStatus));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("resources", std::move(resourcesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload;
}

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
