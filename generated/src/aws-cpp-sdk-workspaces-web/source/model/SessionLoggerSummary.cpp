/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/SessionLoggerSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

SessionLoggerSummary::SessionLoggerSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

SessionLoggerSummary& SessionLoggerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionLoggerArn"))
  {
    m_sessionLoggerArn = jsonValue.GetString("sessionLoggerArn");
    m_sessionLoggerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("logConfiguration");
    m_logConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");
    m_creationDateHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionLoggerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_sessionLoggerArnHasBeenSet)
  {
   payload.WithString("sessionLoggerArn", m_sessionLoggerArn);

  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("logConfiguration", m_logConfiguration.Jsonize());

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
