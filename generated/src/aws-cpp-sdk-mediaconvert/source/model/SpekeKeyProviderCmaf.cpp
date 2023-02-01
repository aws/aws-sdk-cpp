/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/SpekeKeyProviderCmaf.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

SpekeKeyProviderCmaf::SpekeKeyProviderCmaf() : 
    m_certificateArnHasBeenSet(false),
    m_dashSignaledSystemIdsHasBeenSet(false),
    m_hlsSignaledSystemIdsHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

SpekeKeyProviderCmaf::SpekeKeyProviderCmaf(JsonView jsonValue) : 
    m_certificateArnHasBeenSet(false),
    m_dashSignaledSystemIdsHasBeenSet(false),
    m_hlsSignaledSystemIdsHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

SpekeKeyProviderCmaf& SpekeKeyProviderCmaf::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dashSignaledSystemIds"))
  {
    Aws::Utils::Array<JsonView> dashSignaledSystemIdsJsonList = jsonValue.GetArray("dashSignaledSystemIds");
    for(unsigned dashSignaledSystemIdsIndex = 0; dashSignaledSystemIdsIndex < dashSignaledSystemIdsJsonList.GetLength(); ++dashSignaledSystemIdsIndex)
    {
      m_dashSignaledSystemIds.push_back(dashSignaledSystemIdsJsonList[dashSignaledSystemIdsIndex].AsString());
    }
    m_dashSignaledSystemIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsSignaledSystemIds"))
  {
    Aws::Utils::Array<JsonView> hlsSignaledSystemIdsJsonList = jsonValue.GetArray("hlsSignaledSystemIds");
    for(unsigned hlsSignaledSystemIdsIndex = 0; hlsSignaledSystemIdsIndex < hlsSignaledSystemIdsJsonList.GetLength(); ++hlsSignaledSystemIdsIndex)
    {
      m_hlsSignaledSystemIds.push_back(hlsSignaledSystemIdsJsonList[hlsSignaledSystemIdsIndex].AsString());
    }
    m_hlsSignaledSystemIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue SpekeKeyProviderCmaf::Jsonize() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  if(m_dashSignaledSystemIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dashSignaledSystemIdsJsonList(m_dashSignaledSystemIds.size());
   for(unsigned dashSignaledSystemIdsIndex = 0; dashSignaledSystemIdsIndex < dashSignaledSystemIdsJsonList.GetLength(); ++dashSignaledSystemIdsIndex)
   {
     dashSignaledSystemIdsJsonList[dashSignaledSystemIdsIndex].AsString(m_dashSignaledSystemIds[dashSignaledSystemIdsIndex]);
   }
   payload.WithArray("dashSignaledSystemIds", std::move(dashSignaledSystemIdsJsonList));

  }

  if(m_hlsSignaledSystemIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hlsSignaledSystemIdsJsonList(m_hlsSignaledSystemIds.size());
   for(unsigned hlsSignaledSystemIdsIndex = 0; hlsSignaledSystemIdsIndex < hlsSignaledSystemIdsJsonList.GetLength(); ++hlsSignaledSystemIdsIndex)
   {
     hlsSignaledSystemIdsJsonList[hlsSignaledSystemIdsIndex].AsString(m_hlsSignaledSystemIds[hlsSignaledSystemIdsIndex]);
   }
   payload.WithArray("hlsSignaledSystemIds", std::move(hlsSignaledSystemIdsJsonList));

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
