/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/DirectoryRegistrationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

DirectoryRegistrationSummary::DirectoryRegistrationSummary() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_status(DirectoryRegistrationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReason(DirectoryRegistrationStatusReason::NOT_SET),
    m_statusReasonHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

DirectoryRegistrationSummary::DirectoryRegistrationSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_status(DirectoryRegistrationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReason(DirectoryRegistrationStatusReason::NOT_SET),
    m_statusReasonHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

DirectoryRegistrationSummary& DirectoryRegistrationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DirectoryRegistrationStatusMapper::GetDirectoryRegistrationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = DirectoryRegistrationStatusReasonMapper::GetDirectoryRegistrationStatusReasonForName(jsonValue.GetString("StatusReason"));

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue DirectoryRegistrationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DirectoryRegistrationStatusMapper::GetNameForDirectoryRegistrationStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", DirectoryRegistrationStatusReasonMapper::GetNameForDirectoryRegistrationStatusReason(m_statusReason));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
