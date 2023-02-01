/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TemplateSummary.h>
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

TemplateSummary::TemplateSummary() : 
    m_arnHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_latestVersionNumber(0),
    m_latestVersionNumberHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

TemplateSummary::TemplateSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_latestVersionNumber(0),
    m_latestVersionNumberHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateSummary& TemplateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateId"))
  {
    m_templateId = jsonValue.GetString("TemplateId");

    m_templateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestVersionNumber"))
  {
    m_latestVersionNumber = jsonValue.GetInt64("LatestVersionNumber");

    m_latestVersionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("TemplateId", m_templateId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_latestVersionNumberHasBeenSet)
  {
   payload.WithInt64("LatestVersionNumber", m_latestVersionNumber);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
