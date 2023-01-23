/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsBackupBackupPlanLifecycleDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsBackupBackupPlanLifecycleDetails::AwsBackupBackupPlanLifecycleDetails() : 
    m_deleteAfterDays(0),
    m_deleteAfterDaysHasBeenSet(false),
    m_moveToColdStorageAfterDays(0),
    m_moveToColdStorageAfterDaysHasBeenSet(false)
{
}

AwsBackupBackupPlanLifecycleDetails::AwsBackupBackupPlanLifecycleDetails(JsonView jsonValue) : 
    m_deleteAfterDays(0),
    m_deleteAfterDaysHasBeenSet(false),
    m_moveToColdStorageAfterDays(0),
    m_moveToColdStorageAfterDaysHasBeenSet(false)
{
  *this = jsonValue;
}

AwsBackupBackupPlanLifecycleDetails& AwsBackupBackupPlanLifecycleDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeleteAfterDays"))
  {
    m_deleteAfterDays = jsonValue.GetInt64("DeleteAfterDays");

    m_deleteAfterDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MoveToColdStorageAfterDays"))
  {
    m_moveToColdStorageAfterDays = jsonValue.GetInt64("MoveToColdStorageAfterDays");

    m_moveToColdStorageAfterDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsBackupBackupPlanLifecycleDetails::Jsonize() const
{
  JsonValue payload;

  if(m_deleteAfterDaysHasBeenSet)
  {
   payload.WithInt64("DeleteAfterDays", m_deleteAfterDays);

  }

  if(m_moveToColdStorageAfterDaysHasBeenSet)
  {
   payload.WithInt64("MoveToColdStorageAfterDays", m_moveToColdStorageAfterDays);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
