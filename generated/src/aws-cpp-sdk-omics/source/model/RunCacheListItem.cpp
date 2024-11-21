/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/RunCacheListItem.h>
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

RunCacheListItem::RunCacheListItem() : 
    m_arnHasBeenSet(false),
    m_cacheBehavior(CacheBehavior::NOT_SET),
    m_cacheBehaviorHasBeenSet(false),
    m_cacheS3UriHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(RunCacheStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

RunCacheListItem::RunCacheListItem(JsonView jsonValue)
  : RunCacheListItem()
{
  *this = jsonValue;
}

RunCacheListItem& RunCacheListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cacheBehavior"))
  {
    m_cacheBehavior = CacheBehaviorMapper::GetCacheBehaviorForName(jsonValue.GetString("cacheBehavior"));

    m_cacheBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cacheS3Uri"))
  {
    m_cacheS3Uri = jsonValue.GetString("cacheS3Uri");

    m_cacheS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = RunCacheStatusMapper::GetRunCacheStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue RunCacheListItem::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_cacheBehaviorHasBeenSet)
  {
   payload.WithString("cacheBehavior", CacheBehaviorMapper::GetNameForCacheBehavior(m_cacheBehavior));
  }

  if(m_cacheS3UriHasBeenSet)
  {
   payload.WithString("cacheS3Uri", m_cacheS3Uri);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", RunCacheStatusMapper::GetNameForRunCacheStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
