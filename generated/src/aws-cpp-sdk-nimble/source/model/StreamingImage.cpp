/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StreamingImage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

StreamingImage::StreamingImage() : 
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ec2ImageIdHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_eulaIdsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_state(StreamingImageState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(StreamingImageStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_streamingImageIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

StreamingImage::StreamingImage(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ec2ImageIdHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_eulaIdsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_state(StreamingImageState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(StreamingImageStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_streamingImageIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

StreamingImage& StreamingImage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2ImageId"))
  {
    m_ec2ImageId = jsonValue.GetString("ec2ImageId");

    m_ec2ImageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eulaIds"))
  {
    Aws::Utils::Array<JsonView> eulaIdsJsonList = jsonValue.GetArray("eulaIds");
    for(unsigned eulaIdsIndex = 0; eulaIdsIndex < eulaIdsJsonList.GetLength(); ++eulaIdsIndex)
    {
      m_eulaIds.push_back(eulaIdsJsonList[eulaIdsIndex].AsString());
    }
    m_eulaIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = jsonValue.GetString("platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = StreamingImageStateMapper::GetStreamingImageStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = StreamingImageStatusCodeMapper::GetStreamingImageStatusCodeForName(jsonValue.GetString("statusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamingImageId"))
  {
    m_streamingImageId = jsonValue.GetString("streamingImageId");

    m_streamingImageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamingImage::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_ec2ImageIdHasBeenSet)
  {
   payload.WithString("ec2ImageId", m_ec2ImageId);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_eulaIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eulaIdsJsonList(m_eulaIds.size());
   for(unsigned eulaIdsIndex = 0; eulaIdsIndex < eulaIdsJsonList.GetLength(); ++eulaIdsIndex)
   {
     eulaIdsJsonList[eulaIdsIndex].AsString(m_eulaIds[eulaIdsIndex]);
   }
   payload.WithArray("eulaIds", std::move(eulaIdsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", m_platform);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StreamingImageStateMapper::GetNameForStreamingImageState(m_state));
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", StreamingImageStatusCodeMapper::GetNameForStreamingImageStatusCode(m_statusCode));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_streamingImageIdHasBeenSet)
  {
   payload.WithString("streamingImageId", m_streamingImageId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
