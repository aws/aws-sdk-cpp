/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadSetUploadPartListItem.h>
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

ReadSetUploadPartListItem::ReadSetUploadPartListItem() : 
    m_partNumber(0),
    m_partNumberHasBeenSet(false),
    m_partSize(0),
    m_partSizeHasBeenSet(false),
    m_partSource(ReadSetPartSource::NOT_SET),
    m_partSourceHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

ReadSetUploadPartListItem::ReadSetUploadPartListItem(JsonView jsonValue) : 
    m_partNumber(0),
    m_partNumberHasBeenSet(false),
    m_partSize(0),
    m_partSizeHasBeenSet(false),
    m_partSource(ReadSetPartSource::NOT_SET),
    m_partSourceHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ReadSetUploadPartListItem& ReadSetUploadPartListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("partNumber"))
  {
    m_partNumber = jsonValue.GetInteger("partNumber");

    m_partNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("partSize"))
  {
    m_partSize = jsonValue.GetInt64("partSize");

    m_partSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("partSource"))
  {
    m_partSource = ReadSetPartSourceMapper::GetReadSetPartSourceForName(jsonValue.GetString("partSource"));

    m_partSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("checksum"))
  {
    m_checksum = jsonValue.GetString("checksum");

    m_checksumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReadSetUploadPartListItem::Jsonize() const
{
  JsonValue payload;

  if(m_partNumberHasBeenSet)
  {
   payload.WithInteger("partNumber", m_partNumber);

  }

  if(m_partSizeHasBeenSet)
  {
   payload.WithInt64("partSize", m_partSize);

  }

  if(m_partSourceHasBeenSet)
  {
   payload.WithString("partSource", ReadSetPartSourceMapper::GetNameForReadSetPartSource(m_partSource));
  }

  if(m_checksumHasBeenSet)
  {
   payload.WithString("checksum", m_checksum);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithString("lastUpdatedTime", m_lastUpdatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
