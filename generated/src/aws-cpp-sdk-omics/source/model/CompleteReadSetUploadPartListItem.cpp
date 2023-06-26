/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CompleteReadSetUploadPartListItem.h>
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

CompleteReadSetUploadPartListItem::CompleteReadSetUploadPartListItem() : 
    m_partNumber(0),
    m_partNumberHasBeenSet(false),
    m_partSource(ReadSetPartSource::NOT_SET),
    m_partSourceHasBeenSet(false),
    m_checksumHasBeenSet(false)
{
}

CompleteReadSetUploadPartListItem::CompleteReadSetUploadPartListItem(JsonView jsonValue) : 
    m_partNumber(0),
    m_partNumberHasBeenSet(false),
    m_partSource(ReadSetPartSource::NOT_SET),
    m_partSourceHasBeenSet(false),
    m_checksumHasBeenSet(false)
{
  *this = jsonValue;
}

CompleteReadSetUploadPartListItem& CompleteReadSetUploadPartListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("partNumber"))
  {
    m_partNumber = jsonValue.GetInteger("partNumber");

    m_partNumberHasBeenSet = true;
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

  return *this;
}

JsonValue CompleteReadSetUploadPartListItem::Jsonize() const
{
  JsonValue payload;

  if(m_partNumberHasBeenSet)
  {
   payload.WithInteger("partNumber", m_partNumber);

  }

  if(m_partSourceHasBeenSet)
  {
   payload.WithString("partSource", ReadSetPartSourceMapper::GetNameForReadSetPartSource(m_partSource));
  }

  if(m_checksumHasBeenSet)
  {
   payload.WithString("checksum", m_checksum);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
