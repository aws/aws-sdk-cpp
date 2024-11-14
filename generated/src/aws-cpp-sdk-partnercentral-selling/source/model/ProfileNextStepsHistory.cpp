/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ProfileNextStepsHistory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

ProfileNextStepsHistory::ProfileNextStepsHistory() : 
    m_timeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ProfileNextStepsHistory::ProfileNextStepsHistory(JsonView jsonValue)
  : ProfileNextStepsHistory()
{
  *this = jsonValue;
}

ProfileNextStepsHistory& ProfileNextStepsHistory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetString("Time");

    m_timeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ProfileNextStepsHistory::Jsonize() const
{
  JsonValue payload;

  if(m_timeHasBeenSet)
  {
   payload.WithString("Time", m_time.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
