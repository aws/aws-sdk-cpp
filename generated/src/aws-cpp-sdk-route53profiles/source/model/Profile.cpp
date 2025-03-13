/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53profiles/model/Profile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Profiles
{
namespace Model
{

Profile::Profile(JsonView jsonValue)
{
  *this = jsonValue;
}

Profile& Profile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClientToken"))
  {
    m_clientToken = jsonValue.GetString("ClientToken");
    m_clientTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModificationTime"))
  {
    m_modificationTime = jsonValue.GetDouble("ModificationTime");
    m_modificationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");
    m_ownerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ShareStatus"))
  {
    m_shareStatus = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("ShareStatus"));
    m_shareStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ProfileStatusMapper::GetProfileStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue Profile::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_modificationTimeHasBeenSet)
  {
   payload.WithDouble("ModificationTime", m_modificationTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_shareStatusHasBeenSet)
  {
   payload.WithString("ShareStatus", ShareStatusMapper::GetNameForShareStatus(m_shareStatus));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ProfileStatusMapper::GetNameForProfileStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Profiles
} // namespace Aws
