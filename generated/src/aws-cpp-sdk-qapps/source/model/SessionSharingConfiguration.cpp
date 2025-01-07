/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/SessionSharingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QApps
{
namespace Model
{

SessionSharingConfiguration::SessionSharingConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_acceptResponses(false),
    m_acceptResponsesHasBeenSet(false),
    m_revealCards(false),
    m_revealCardsHasBeenSet(false)
{
}

SessionSharingConfiguration::SessionSharingConfiguration(JsonView jsonValue)
  : SessionSharingConfiguration()
{
  *this = jsonValue;
}

SessionSharingConfiguration& SessionSharingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("acceptResponses"))
  {
    m_acceptResponses = jsonValue.GetBool("acceptResponses");

    m_acceptResponsesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revealCards"))
  {
    m_revealCards = jsonValue.GetBool("revealCards");

    m_revealCardsHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionSharingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_acceptResponsesHasBeenSet)
  {
   payload.WithBool("acceptResponses", m_acceptResponses);

  }

  if(m_revealCardsHasBeenSet)
  {
   payload.WithBool("revealCards", m_revealCards);

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
