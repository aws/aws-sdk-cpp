/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HubInfo.h>
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

HubInfo::HubInfo() : 
    m_hubNameHasBeenSet(false),
    m_hubArnHasBeenSet(false),
    m_hubDisplayNameHasBeenSet(false),
    m_hubDescriptionHasBeenSet(false),
    m_hubSearchKeywordsHasBeenSet(false),
    m_hubStatus(HubStatus::NOT_SET),
    m_hubStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

HubInfo::HubInfo(JsonView jsonValue) : 
    m_hubNameHasBeenSet(false),
    m_hubArnHasBeenSet(false),
    m_hubDisplayNameHasBeenSet(false),
    m_hubDescriptionHasBeenSet(false),
    m_hubSearchKeywordsHasBeenSet(false),
    m_hubStatus(HubStatus::NOT_SET),
    m_hubStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

HubInfo& HubInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HubName"))
  {
    m_hubName = jsonValue.GetString("HubName");

    m_hubNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HubArn"))
  {
    m_hubArn = jsonValue.GetString("HubArn");

    m_hubArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HubDisplayName"))
  {
    m_hubDisplayName = jsonValue.GetString("HubDisplayName");

    m_hubDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HubDescription"))
  {
    m_hubDescription = jsonValue.GetString("HubDescription");

    m_hubDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HubSearchKeywords"))
  {
    Aws::Utils::Array<JsonView> hubSearchKeywordsJsonList = jsonValue.GetArray("HubSearchKeywords");
    for(unsigned hubSearchKeywordsIndex = 0; hubSearchKeywordsIndex < hubSearchKeywordsJsonList.GetLength(); ++hubSearchKeywordsIndex)
    {
      m_hubSearchKeywords.push_back(hubSearchKeywordsJsonList[hubSearchKeywordsIndex].AsString());
    }
    m_hubSearchKeywordsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HubStatus"))
  {
    m_hubStatus = HubStatusMapper::GetHubStatusForName(jsonValue.GetString("HubStatus"));

    m_hubStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue HubInfo::Jsonize() const
{
  JsonValue payload;

  if(m_hubNameHasBeenSet)
  {
   payload.WithString("HubName", m_hubName);

  }

  if(m_hubArnHasBeenSet)
  {
   payload.WithString("HubArn", m_hubArn);

  }

  if(m_hubDisplayNameHasBeenSet)
  {
   payload.WithString("HubDisplayName", m_hubDisplayName);

  }

  if(m_hubDescriptionHasBeenSet)
  {
   payload.WithString("HubDescription", m_hubDescription);

  }

  if(m_hubSearchKeywordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hubSearchKeywordsJsonList(m_hubSearchKeywords.size());
   for(unsigned hubSearchKeywordsIndex = 0; hubSearchKeywordsIndex < hubSearchKeywordsJsonList.GetLength(); ++hubSearchKeywordsIndex)
   {
     hubSearchKeywordsJsonList[hubSearchKeywordsIndex].AsString(m_hubSearchKeywords[hubSearchKeywordsIndex]);
   }
   payload.WithArray("HubSearchKeywords", std::move(hubSearchKeywordsJsonList));

  }

  if(m_hubStatusHasBeenSet)
  {
   payload.WithString("HubStatus", HubStatusMapper::GetNameForHubStatus(m_hubStatus));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
