/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/QAppSessionData.h>
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

QAppSessionData::QAppSessionData(JsonView jsonValue)
{
  *this = jsonValue;
}

QAppSessionData& QAppSessionData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cardId"))
  {
    m_cardId = jsonValue.GetString("cardId");
    m_cardIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetObject("user");
    m_userHasBeenSet = true;
  }
  if(jsonValue.ValueExists("submissionId"))
  {
    m_submissionId = jsonValue.GetString("submissionId");
    m_submissionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetString("timestamp");
    m_timestampHasBeenSet = true;
  }
  return *this;
}

JsonValue QAppSessionData::Jsonize() const
{
  JsonValue payload;

  if(m_cardIdHasBeenSet)
  {
   payload.WithString("cardId", m_cardId);

  }

  if(m_valueHasBeenSet)
  {
    if(!m_value.View().IsNull())
    {
       payload.WithObject("value", JsonValue(m_value.View()));
    }
  }

  if(m_userHasBeenSet)
  {
   payload.WithObject("user", m_user.Jsonize());

  }

  if(m_submissionIdHasBeenSet)
  {
   payload.WithString("submissionId", m_submissionId);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithString("timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
