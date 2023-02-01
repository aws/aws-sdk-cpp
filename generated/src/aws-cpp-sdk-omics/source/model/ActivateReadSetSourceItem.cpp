/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ActivateReadSetSourceItem.h>
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

ActivateReadSetSourceItem::ActivateReadSetSourceItem() : 
    m_readSetIdHasBeenSet(false),
    m_status(ReadSetActivationJobItemStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

ActivateReadSetSourceItem::ActivateReadSetSourceItem(JsonView jsonValue) : 
    m_readSetIdHasBeenSet(false),
    m_status(ReadSetActivationJobItemStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ActivateReadSetSourceItem& ActivateReadSetSourceItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("readSetId"))
  {
    m_readSetId = jsonValue.GetString("readSetId");

    m_readSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReadSetActivationJobItemStatusMapper::GetReadSetActivationJobItemStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivateReadSetSourceItem::Jsonize() const
{
  JsonValue payload;

  if(m_readSetIdHasBeenSet)
  {
   payload.WithString("readSetId", m_readSetId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReadSetActivationJobItemStatusMapper::GetNameForReadSetActivationJobItemStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
