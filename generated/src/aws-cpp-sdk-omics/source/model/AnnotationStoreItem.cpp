/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/AnnotationStoreItem.h>
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

AnnotationStoreItem::AnnotationStoreItem() : 
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_referenceHasBeenSet(false),
    m_sseConfigHasBeenSet(false),
    m_status(StoreStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_storeArnHasBeenSet(false),
    m_storeFormat(StoreFormat::NOT_SET),
    m_storeFormatHasBeenSet(false),
    m_storeSizeBytes(0),
    m_storeSizeBytesHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

AnnotationStoreItem::AnnotationStoreItem(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_referenceHasBeenSet(false),
    m_sseConfigHasBeenSet(false),
    m_status(StoreStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_storeArnHasBeenSet(false),
    m_storeFormat(StoreFormat::NOT_SET),
    m_storeFormatHasBeenSet(false),
    m_storeSizeBytes(0),
    m_storeSizeBytesHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AnnotationStoreItem& AnnotationStoreItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reference"))
  {
    m_reference = jsonValue.GetObject("reference");

    m_referenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sseConfig"))
  {
    m_sseConfig = jsonValue.GetObject("sseConfig");

    m_sseConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StoreStatusMapper::GetStoreStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storeArn"))
  {
    m_storeArn = jsonValue.GetString("storeArn");

    m_storeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storeFormat"))
  {
    m_storeFormat = StoreFormatMapper::GetStoreFormatForName(jsonValue.GetString("storeFormat"));

    m_storeFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storeSizeBytes"))
  {
    m_storeSizeBytes = jsonValue.GetInt64("storeSizeBytes");

    m_storeSizeBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AnnotationStoreItem::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_referenceHasBeenSet)
  {
   payload.WithObject("reference", m_reference.Jsonize());

  }

  if(m_sseConfigHasBeenSet)
  {
   payload.WithObject("sseConfig", m_sseConfig.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StoreStatusMapper::GetNameForStoreStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_storeArnHasBeenSet)
  {
   payload.WithString("storeArn", m_storeArn);

  }

  if(m_storeFormatHasBeenSet)
  {
   payload.WithString("storeFormat", StoreFormatMapper::GetNameForStoreFormat(m_storeFormat));
  }

  if(m_storeSizeBytesHasBeenSet)
  {
   payload.WithInt64("storeSizeBytes", m_storeSizeBytes);

  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithString("updateTime", m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
