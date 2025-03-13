/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/RetrievedService.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

RetrievedService::RetrievedService(JsonView jsonValue)
{
  *this = jsonValue;
}

RetrievedService& RetrievedService::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Service"))
  {
    m_service = jsonValue.GetObject("Service");
    m_serviceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Links"))
  {
    Aws::Utils::Array<JsonView> linksJsonList = jsonValue.GetArray("Links");
    for(unsigned linksIndex = 0; linksIndex < linksJsonList.GetLength(); ++linksIndex)
    {
      m_links.push_back(linksJsonList[linksIndex].AsObject());
    }
    m_linksHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrievedService::Jsonize() const
{
  JsonValue payload;

  if(m_serviceHasBeenSet)
  {
   payload.WithObject("Service", m_service.Jsonize());

  }

  if(m_linksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> linksJsonList(m_links.size());
   for(unsigned linksIndex = 0; linksIndex < linksJsonList.GetLength(); ++linksIndex)
   {
     linksJsonList[linksIndex].AsObject(m_links[linksIndex].Jsonize());
   }
   payload.WithArray("Links", std::move(linksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
