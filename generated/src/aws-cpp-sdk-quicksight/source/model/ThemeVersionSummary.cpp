/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ThemeVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ThemeVersionSummary::ThemeVersionSummary() : 
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ThemeVersionSummary::ThemeVersionSummary(JsonView jsonValue) : 
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ThemeVersionSummary& ThemeVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("VersionNumber");

    m_versionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ThemeVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("VersionNumber", m_versionNumber);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
