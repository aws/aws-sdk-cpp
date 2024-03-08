/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AuthorizedTargetsByService.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AuthorizedTargetsByService::AuthorizedTargetsByService() : 
    m_service(ServiceType::NOT_SET),
    m_serviceHasBeenSet(false),
    m_authorizedTargetsHasBeenSet(false)
{
}

AuthorizedTargetsByService::AuthorizedTargetsByService(JsonView jsonValue) : 
    m_service(ServiceType::NOT_SET),
    m_serviceHasBeenSet(false),
    m_authorizedTargetsHasBeenSet(false)
{
  *this = jsonValue;
}

AuthorizedTargetsByService& AuthorizedTargetsByService::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Service"))
  {
    m_service = ServiceTypeMapper::GetServiceTypeForName(jsonValue.GetString("Service"));

    m_serviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthorizedTargets"))
  {
    Aws::Utils::Array<JsonView> authorizedTargetsJsonList = jsonValue.GetArray("AuthorizedTargets");
    for(unsigned authorizedTargetsIndex = 0; authorizedTargetsIndex < authorizedTargetsJsonList.GetLength(); ++authorizedTargetsIndex)
    {
      m_authorizedTargets.push_back(authorizedTargetsJsonList[authorizedTargetsIndex].AsString());
    }
    m_authorizedTargetsHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthorizedTargetsByService::Jsonize() const
{
  JsonValue payload;

  if(m_serviceHasBeenSet)
  {
   payload.WithString("Service", ServiceTypeMapper::GetNameForServiceType(m_service));
  }

  if(m_authorizedTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorizedTargetsJsonList(m_authorizedTargets.size());
   for(unsigned authorizedTargetsIndex = 0; authorizedTargetsIndex < authorizedTargetsJsonList.GetLength(); ++authorizedTargetsIndex)
   {
     authorizedTargetsJsonList[authorizedTargetsIndex].AsString(m_authorizedTargets[authorizedTargetsIndex]);
   }
   payload.WithArray("AuthorizedTargets", std::move(authorizedTargetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
