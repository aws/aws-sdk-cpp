/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/Domain.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VoiceID
{
namespace Model
{

Domain::Domain() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_domainStatus(DomainStatus::NOT_SET),
    m_domainStatusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false),
    m_serverSideEncryptionUpdateDetailsHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_watchlistDetailsHasBeenSet(false)
{
}

Domain::Domain(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_domainStatus(DomainStatus::NOT_SET),
    m_domainStatusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false),
    m_serverSideEncryptionUpdateDetailsHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_watchlistDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

Domain& Domain::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainStatus"))
  {
    m_domainStatus = DomainStatusMapper::GetDomainStatusForName(jsonValue.GetString("DomainStatus"));

    m_domainStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerSideEncryptionConfiguration"))
  {
    m_serverSideEncryptionConfiguration = jsonValue.GetObject("ServerSideEncryptionConfiguration");

    m_serverSideEncryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerSideEncryptionUpdateDetails"))
  {
    m_serverSideEncryptionUpdateDetails = jsonValue.GetObject("ServerSideEncryptionUpdateDetails");

    m_serverSideEncryptionUpdateDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WatchlistDetails"))
  {
    m_watchlistDetails = jsonValue.GetObject("WatchlistDetails");

    m_watchlistDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue Domain::Jsonize() const
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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_domainStatusHasBeenSet)
  {
   payload.WithString("DomainStatus", DomainStatusMapper::GetNameForDomainStatus(m_domainStatus));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_serverSideEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("ServerSideEncryptionConfiguration", m_serverSideEncryptionConfiguration.Jsonize());

  }

  if(m_serverSideEncryptionUpdateDetailsHasBeenSet)
  {
   payload.WithObject("ServerSideEncryptionUpdateDetails", m_serverSideEncryptionUpdateDetails.Jsonize());

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_watchlistDetailsHasBeenSet)
  {
   payload.WithObject("WatchlistDetails", m_watchlistDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
