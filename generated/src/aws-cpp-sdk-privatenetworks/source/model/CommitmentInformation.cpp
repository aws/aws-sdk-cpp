/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/CommitmentInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

CommitmentInformation::CommitmentInformation() : 
    m_commitmentConfigurationHasBeenSet(false),
    m_expiresOnHasBeenSet(false),
    m_startAtHasBeenSet(false)
{
}

CommitmentInformation::CommitmentInformation(JsonView jsonValue) : 
    m_commitmentConfigurationHasBeenSet(false),
    m_expiresOnHasBeenSet(false),
    m_startAtHasBeenSet(false)
{
  *this = jsonValue;
}

CommitmentInformation& CommitmentInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("commitmentConfiguration"))
  {
    m_commitmentConfiguration = jsonValue.GetObject("commitmentConfiguration");

    m_commitmentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expiresOn"))
  {
    m_expiresOn = jsonValue.GetString("expiresOn");

    m_expiresOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startAt"))
  {
    m_startAt = jsonValue.GetString("startAt");

    m_startAtHasBeenSet = true;
  }

  return *this;
}

JsonValue CommitmentInformation::Jsonize() const
{
  JsonValue payload;

  if(m_commitmentConfigurationHasBeenSet)
  {
   payload.WithObject("commitmentConfiguration", m_commitmentConfiguration.Jsonize());

  }

  if(m_expiresOnHasBeenSet)
  {
   payload.WithString("expiresOn", m_expiresOn.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_startAtHasBeenSet)
  {
   payload.WithString("startAt", m_startAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
