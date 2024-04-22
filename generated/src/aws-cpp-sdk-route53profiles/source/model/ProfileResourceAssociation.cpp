/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53profiles/model/ProfileResourceAssociation.h>
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

ProfileResourceAssociation::ProfileResourceAssociation() : 
    m_creationTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_modificationTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_profileIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_resourcePropertiesHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_status(ProfileStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

ProfileResourceAssociation::ProfileResourceAssociation(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_modificationTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_profileIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_resourcePropertiesHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_status(ProfileStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ProfileResourceAssociation& ProfileResourceAssociation::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("ProfileId"))
  {
    m_profileId = jsonValue.GetString("ProfileId");

    m_profileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceProperties"))
  {
    m_resourceProperties = jsonValue.GetString("ResourceProperties");

    m_resourcePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
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

JsonValue ProfileResourceAssociation::Jsonize() const
{
  JsonValue payload;

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

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("ProfileId", m_profileId);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_resourcePropertiesHasBeenSet)
  {
   payload.WithString("ResourceProperties", m_resourceProperties);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

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
