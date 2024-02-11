/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ProfileShareSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

ProfileShareSummary::ProfileShareSummary() : 
    m_shareIdHasBeenSet(false),
    m_sharedWithHasBeenSet(false),
    m_status(ShareStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

ProfileShareSummary::ProfileShareSummary(JsonView jsonValue) : 
    m_shareIdHasBeenSet(false),
    m_sharedWithHasBeenSet(false),
    m_status(ShareStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ProfileShareSummary& ProfileShareSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ShareId"))
  {
    m_shareId = jsonValue.GetString("ShareId");

    m_shareIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SharedWith"))
  {
    m_sharedWith = jsonValue.GetString("SharedWith");

    m_sharedWithHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ProfileShareSummary::Jsonize() const
{
  JsonValue payload;

  if(m_shareIdHasBeenSet)
  {
   payload.WithString("ShareId", m_shareId);

  }

  if(m_sharedWithHasBeenSet)
  {
   payload.WithString("SharedWith", m_sharedWith);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ShareStatusMapper::GetNameForShareStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
