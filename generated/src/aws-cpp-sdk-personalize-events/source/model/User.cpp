/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-events/model/User.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PersonalizeEvents
{
namespace Model
{

User::User() : 
    m_userIdHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

User::User(JsonView jsonValue) : 
    m_userIdHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

User& User::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("properties"))
  {
    m_properties = jsonValue.GetString("properties");

    m_propertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue User::Jsonize() const
{
  JsonValue payload;

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  if(m_propertiesHasBeenSet)
  {
   payload.WithString("properties", m_properties);

  }

  return payload;
}

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
