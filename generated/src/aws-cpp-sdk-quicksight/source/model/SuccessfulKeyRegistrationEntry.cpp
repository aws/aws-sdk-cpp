/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SuccessfulKeyRegistrationEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

SuccessfulKeyRegistrationEntry::SuccessfulKeyRegistrationEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

SuccessfulKeyRegistrationEntry& SuccessfulKeyRegistrationEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyArn"))
  {
    m_keyArn = jsonValue.GetString("KeyArn");
    m_keyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = jsonValue.GetInteger("StatusCode");
    m_statusCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue SuccessfulKeyRegistrationEntry::Jsonize() const
{
  JsonValue payload;

  if(m_keyArnHasBeenSet)
  {
   payload.WithString("KeyArn", m_keyArn);

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithInteger("StatusCode", m_statusCode);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
