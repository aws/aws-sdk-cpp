/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/CardValue.h>
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

CardValue::CardValue(JsonView jsonValue)
{
  *this = jsonValue;
}

CardValue& CardValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cardId"))
  {
    m_cardId = jsonValue.GetString("cardId");
    m_cardIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("submissionMutation"))
  {
    m_submissionMutation = jsonValue.GetObject("submissionMutation");
    m_submissionMutationHasBeenSet = true;
  }
  return *this;
}

JsonValue CardValue::Jsonize() const
{
  JsonValue payload;

  if(m_cardIdHasBeenSet)
  {
   payload.WithString("cardId", m_cardId);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_submissionMutationHasBeenSet)
  {
   payload.WithObject("submissionMutation", m_submissionMutation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
