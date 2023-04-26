/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/ChangeProgressStage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OSIS
{
namespace Model
{

ChangeProgressStage::ChangeProgressStage() : 
    m_nameHasBeenSet(false),
    m_status(ChangeProgressStageStatuses::NOT_SET),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
}

ChangeProgressStage::ChangeProgressStage(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_status(ChangeProgressStageStatuses::NOT_SET),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

ChangeProgressStage& ChangeProgressStage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ChangeProgressStageStatusesMapper::GetChangeProgressStageStatusesForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ChangeProgressStage::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ChangeProgressStageStatusesMapper::GetNameForChangeProgressStageStatuses(m_status));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
