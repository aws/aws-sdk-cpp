/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HubContentInfo.h>
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

HubContentInfo::HubContentInfo() : 
    m_hubContentNameHasBeenSet(false),
    m_hubContentArnHasBeenSet(false),
    m_hubContentVersionHasBeenSet(false),
    m_hubContentType(HubContentType::NOT_SET),
    m_hubContentTypeHasBeenSet(false),
    m_documentSchemaVersionHasBeenSet(false),
    m_hubContentDisplayNameHasBeenSet(false),
    m_hubContentDescriptionHasBeenSet(false),
    m_hubContentSearchKeywordsHasBeenSet(false),
    m_hubContentStatus(HubContentStatus::NOT_SET),
    m_hubContentStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

HubContentInfo::HubContentInfo(JsonView jsonValue) : 
    m_hubContentNameHasBeenSet(false),
    m_hubContentArnHasBeenSet(false),
    m_hubContentVersionHasBeenSet(false),
    m_hubContentType(HubContentType::NOT_SET),
    m_hubContentTypeHasBeenSet(false),
    m_documentSchemaVersionHasBeenSet(false),
    m_hubContentDisplayNameHasBeenSet(false),
    m_hubContentDescriptionHasBeenSet(false),
    m_hubContentSearchKeywordsHasBeenSet(false),
    m_hubContentStatus(HubContentStatus::NOT_SET),
    m_hubContentStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

HubContentInfo& HubContentInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HubContentName"))
  {
    m_hubContentName = jsonValue.GetString("HubContentName");

    m_hubContentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HubContentArn"))
  {
    m_hubContentArn = jsonValue.GetString("HubContentArn");

    m_hubContentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HubContentVersion"))
  {
    m_hubContentVersion = jsonValue.GetString("HubContentVersion");

    m_hubContentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HubContentType"))
  {
    m_hubContentType = HubContentTypeMapper::GetHubContentTypeForName(jsonValue.GetString("HubContentType"));

    m_hubContentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentSchemaVersion"))
  {
    m_documentSchemaVersion = jsonValue.GetString("DocumentSchemaVersion");

    m_documentSchemaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HubContentDisplayName"))
  {
    m_hubContentDisplayName = jsonValue.GetString("HubContentDisplayName");

    m_hubContentDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HubContentDescription"))
  {
    m_hubContentDescription = jsonValue.GetString("HubContentDescription");

    m_hubContentDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HubContentSearchKeywords"))
  {
    Aws::Utils::Array<JsonView> hubContentSearchKeywordsJsonList = jsonValue.GetArray("HubContentSearchKeywords");
    for(unsigned hubContentSearchKeywordsIndex = 0; hubContentSearchKeywordsIndex < hubContentSearchKeywordsJsonList.GetLength(); ++hubContentSearchKeywordsIndex)
    {
      m_hubContentSearchKeywords.push_back(hubContentSearchKeywordsJsonList[hubContentSearchKeywordsIndex].AsString());
    }
    m_hubContentSearchKeywordsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HubContentStatus"))
  {
    m_hubContentStatus = HubContentStatusMapper::GetHubContentStatusForName(jsonValue.GetString("HubContentStatus"));

    m_hubContentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue HubContentInfo::Jsonize() const
{
  JsonValue payload;

  if(m_hubContentNameHasBeenSet)
  {
   payload.WithString("HubContentName", m_hubContentName);

  }

  if(m_hubContentArnHasBeenSet)
  {
   payload.WithString("HubContentArn", m_hubContentArn);

  }

  if(m_hubContentVersionHasBeenSet)
  {
   payload.WithString("HubContentVersion", m_hubContentVersion);

  }

  if(m_hubContentTypeHasBeenSet)
  {
   payload.WithString("HubContentType", HubContentTypeMapper::GetNameForHubContentType(m_hubContentType));
  }

  if(m_documentSchemaVersionHasBeenSet)
  {
   payload.WithString("DocumentSchemaVersion", m_documentSchemaVersion);

  }

  if(m_hubContentDisplayNameHasBeenSet)
  {
   payload.WithString("HubContentDisplayName", m_hubContentDisplayName);

  }

  if(m_hubContentDescriptionHasBeenSet)
  {
   payload.WithString("HubContentDescription", m_hubContentDescription);

  }

  if(m_hubContentSearchKeywordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hubContentSearchKeywordsJsonList(m_hubContentSearchKeywords.size());
   for(unsigned hubContentSearchKeywordsIndex = 0; hubContentSearchKeywordsIndex < hubContentSearchKeywordsJsonList.GetLength(); ++hubContentSearchKeywordsIndex)
   {
     hubContentSearchKeywordsJsonList[hubContentSearchKeywordsIndex].AsString(m_hubContentSearchKeywords[hubContentSearchKeywordsIndex]);
   }
   payload.WithArray("HubContentSearchKeywords", std::move(hubContentSearchKeywordsJsonList));

  }

  if(m_hubContentStatusHasBeenSet)
  {
   payload.WithString("HubContentStatus", HubContentStatusMapper::GetNameForHubContentStatus(m_hubContentStatus));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
