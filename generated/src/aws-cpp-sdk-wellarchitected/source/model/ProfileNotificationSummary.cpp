/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ProfileNotificationSummary.h>
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

ProfileNotificationSummary::ProfileNotificationSummary() : 
    m_currentProfileVersionHasBeenSet(false),
    m_latestProfileVersionHasBeenSet(false),
    m_type(ProfileNotificationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_profileArnHasBeenSet(false),
    m_profileNameHasBeenSet(false),
    m_workloadIdHasBeenSet(false),
    m_workloadNameHasBeenSet(false)
{
}

ProfileNotificationSummary::ProfileNotificationSummary(JsonView jsonValue) : 
    m_currentProfileVersionHasBeenSet(false),
    m_latestProfileVersionHasBeenSet(false),
    m_type(ProfileNotificationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_profileArnHasBeenSet(false),
    m_profileNameHasBeenSet(false),
    m_workloadIdHasBeenSet(false),
    m_workloadNameHasBeenSet(false)
{
  *this = jsonValue;
}

ProfileNotificationSummary& ProfileNotificationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CurrentProfileVersion"))
  {
    m_currentProfileVersion = jsonValue.GetString("CurrentProfileVersion");

    m_currentProfileVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestProfileVersion"))
  {
    m_latestProfileVersion = jsonValue.GetString("LatestProfileVersion");

    m_latestProfileVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ProfileNotificationTypeMapper::GetProfileNotificationTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfileArn"))
  {
    m_profileArn = jsonValue.GetString("ProfileArn");

    m_profileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfileName"))
  {
    m_profileName = jsonValue.GetString("ProfileName");

    m_profileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkloadId"))
  {
    m_workloadId = jsonValue.GetString("WorkloadId");

    m_workloadIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkloadName"))
  {
    m_workloadName = jsonValue.GetString("WorkloadName");

    m_workloadNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ProfileNotificationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_currentProfileVersionHasBeenSet)
  {
   payload.WithString("CurrentProfileVersion", m_currentProfileVersion);

  }

  if(m_latestProfileVersionHasBeenSet)
  {
   payload.WithString("LatestProfileVersion", m_latestProfileVersion);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ProfileNotificationTypeMapper::GetNameForProfileNotificationType(m_type));
  }

  if(m_profileArnHasBeenSet)
  {
   payload.WithString("ProfileArn", m_profileArn);

  }

  if(m_profileNameHasBeenSet)
  {
   payload.WithString("ProfileName", m_profileName);

  }

  if(m_workloadIdHasBeenSet)
  {
   payload.WithString("WorkloadId", m_workloadId);

  }

  if(m_workloadNameHasBeenSet)
  {
   payload.WithString("WorkloadName", m_workloadName);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
