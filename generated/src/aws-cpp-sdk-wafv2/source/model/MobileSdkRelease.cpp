/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/MobileSdkRelease.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

MobileSdkRelease::MobileSdkRelease() : 
    m_releaseVersionHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_releaseNotesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

MobileSdkRelease::MobileSdkRelease(JsonView jsonValue) : 
    m_releaseVersionHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_releaseNotesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

MobileSdkRelease& MobileSdkRelease::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReleaseVersion"))
  {
    m_releaseVersion = jsonValue.GetString("ReleaseVersion");

    m_releaseVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReleaseNotes"))
  {
    m_releaseNotes = jsonValue.GetString("ReleaseNotes");

    m_releaseNotesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue MobileSdkRelease::Jsonize() const
{
  JsonValue payload;

  if(m_releaseVersionHasBeenSet)
  {
   payload.WithString("ReleaseVersion", m_releaseVersion);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_releaseNotesHasBeenSet)
  {
   payload.WithString("ReleaseNotes", m_releaseNotes);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
