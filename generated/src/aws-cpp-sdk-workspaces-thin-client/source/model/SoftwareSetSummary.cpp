/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/SoftwareSetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesThinClient
{
namespace Model
{

SoftwareSetSummary::SoftwareSetSummary() : 
    m_idHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_releasedAtHasBeenSet(false),
    m_supportedUntilHasBeenSet(false),
    m_validationStatus(SoftwareSetValidationStatus::NOT_SET),
    m_validationStatusHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

SoftwareSetSummary::SoftwareSetSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_releasedAtHasBeenSet(false),
    m_supportedUntilHasBeenSet(false),
    m_validationStatus(SoftwareSetValidationStatus::NOT_SET),
    m_validationStatusHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

SoftwareSetSummary& SoftwareSetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("releasedAt"))
  {
    m_releasedAt = jsonValue.GetDouble("releasedAt");

    m_releasedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedUntil"))
  {
    m_supportedUntil = jsonValue.GetDouble("supportedUntil");

    m_supportedUntilHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validationStatus"))
  {
    m_validationStatus = SoftwareSetValidationStatusMapper::GetSoftwareSetValidationStatusForName(jsonValue.GetString("validationStatus"));

    m_validationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue SoftwareSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_releasedAtHasBeenSet)
  {
   payload.WithDouble("releasedAt", m_releasedAt.SecondsWithMSPrecision());
  }

  if(m_supportedUntilHasBeenSet)
  {
   payload.WithDouble("supportedUntil", m_supportedUntil.SecondsWithMSPrecision());
  }

  if(m_validationStatusHasBeenSet)
  {
   payload.WithString("validationStatus", SoftwareSetValidationStatusMapper::GetNameForSoftwareSetValidationStatus(m_validationStatus));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
