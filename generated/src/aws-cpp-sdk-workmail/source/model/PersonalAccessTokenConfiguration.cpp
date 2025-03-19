/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/PersonalAccessTokenConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

PersonalAccessTokenConfiguration::PersonalAccessTokenConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PersonalAccessTokenConfiguration& PersonalAccessTokenConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = PersonalAccessTokenConfigurationStatusMapper::GetPersonalAccessTokenConfigurationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LifetimeInDays"))
  {
    m_lifetimeInDays = jsonValue.GetInteger("LifetimeInDays");
    m_lifetimeInDaysHasBeenSet = true;
  }
  return *this;
}

JsonValue PersonalAccessTokenConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PersonalAccessTokenConfigurationStatusMapper::GetNameForPersonalAccessTokenConfigurationStatus(m_status));
  }

  if(m_lifetimeInDaysHasBeenSet)
  {
   payload.WithInteger("LifetimeInDays", m_lifetimeInDays);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
