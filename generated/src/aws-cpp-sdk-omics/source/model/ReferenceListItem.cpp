/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReferenceListItem.h>
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

ReferenceListItem::ReferenceListItem() : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_nameHasBeenSet(false),
    m_referenceStoreIdHasBeenSet(false),
    m_status(ReferenceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

ReferenceListItem::ReferenceListItem(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_nameHasBeenSet(false),
    m_referenceStoreIdHasBeenSet(false),
    m_status(ReferenceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceListItem& ReferenceListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("md5"))
  {
    m_md5 = jsonValue.GetString("md5");

    m_md5HasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("referenceStoreId"))
  {
    m_referenceStoreId = jsonValue.GetString("referenceStoreId");

    m_referenceStoreIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReferenceStatusMapper::GetReferenceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceListItem::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

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

  if(m_md5HasBeenSet)
  {
   payload.WithString("md5", m_md5);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_referenceStoreIdHasBeenSet)
  {
   payload.WithString("referenceStoreId", m_referenceStoreId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReferenceStatusMapper::GetNameForReferenceStatus(m_status));
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
