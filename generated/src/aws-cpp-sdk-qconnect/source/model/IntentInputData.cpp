/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/IntentInputData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

IntentInputData::IntentInputData(JsonView jsonValue)
{
  *this = jsonValue;
}

IntentInputData& IntentInputData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intentId"))
  {
    m_intentId = jsonValue.GetString("intentId");
    m_intentIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IntentInputData::Jsonize() const
{
  JsonValue payload;

  if(m_intentIdHasBeenSet)
  {
   payload.WithString("intentId", m_intentId);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
