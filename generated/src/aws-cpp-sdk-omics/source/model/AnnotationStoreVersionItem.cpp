/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/AnnotationStoreVersionItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

AnnotationStoreVersionItem::AnnotationStoreVersionItem() : 
    m_storeIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_status(VersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_versionArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_versionSizeBytes(0),
    m_versionSizeBytesHasBeenSet(false)
{
}

AnnotationStoreVersionItem::AnnotationStoreVersionItem(JsonView jsonValue) : 
    m_storeIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_status(VersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_versionArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_versionSizeBytes(0),
    m_versionSizeBytesHasBeenSet(false)
{
  *this = jsonValue;
}

AnnotationStoreVersionItem& AnnotationStoreVersionItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("storeId"))
  {
    m_storeId = jsonValue.GetString("storeId");

    m_storeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = VersionStatusMapper::GetVersionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionArn"))
  {
    m_versionArn = jsonValue.GetString("versionArn");

    m_versionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionName"))
  {
    m_versionName = jsonValue.GetString("versionName");

    m_versionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionSizeBytes"))
  {
    m_versionSizeBytes = jsonValue.GetInt64("versionSizeBytes");

    m_versionSizeBytesHasBeenSet = true;
  }

  return *this;
}

JsonValue AnnotationStoreVersionItem::Jsonize() const
{
  JsonValue payload;

  if(m_storeIdHasBeenSet)
  {
   payload.WithString("storeId", m_storeId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", VersionStatusMapper::GetNameForVersionStatus(m_status));
  }

  if(m_versionArnHasBeenSet)
  {
   payload.WithString("versionArn", m_versionArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("versionName", m_versionName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithString("updateTime", m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_versionSizeBytesHasBeenSet)
  {
   payload.WithInt64("versionSizeBytes", m_versionSizeBytes);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
