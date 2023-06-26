/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ServiceTemplateVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

ServiceTemplateVersionSummary::ServiceTemplateVersionSummary() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_majorVersionHasBeenSet(false),
    m_minorVersionHasBeenSet(false),
    m_recommendedMinorVersionHasBeenSet(false),
    m_status(TemplateVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

ServiceTemplateVersionSummary::ServiceTemplateVersionSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_majorVersionHasBeenSet(false),
    m_minorVersionHasBeenSet(false),
    m_recommendedMinorVersionHasBeenSet(false),
    m_status(TemplateVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceTemplateVersionSummary& ServiceTemplateVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetDouble("lastModifiedAt");

    m_lastModifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("majorVersion"))
  {
    m_majorVersion = jsonValue.GetString("majorVersion");

    m_majorVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minorVersion"))
  {
    m_minorVersion = jsonValue.GetString("minorVersion");

    m_minorVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendedMinorVersion"))
  {
    m_recommendedMinorVersion = jsonValue.GetString("recommendedMinorVersion");

    m_recommendedMinorVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TemplateVersionStatusMapper::GetTemplateVersionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");

    m_templateNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceTemplateVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_lastModifiedAtHasBeenSet)
  {
   payload.WithDouble("lastModifiedAt", m_lastModifiedAt.SecondsWithMSPrecision());
  }

  if(m_majorVersionHasBeenSet)
  {
   payload.WithString("majorVersion", m_majorVersion);

  }

  if(m_minorVersionHasBeenSet)
  {
   payload.WithString("minorVersion", m_minorVersion);

  }

  if(m_recommendedMinorVersionHasBeenSet)
  {
   payload.WithString("recommendedMinorVersion", m_recommendedMinorVersion);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TemplateVersionStatusMapper::GetNameForTemplateVersionStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
