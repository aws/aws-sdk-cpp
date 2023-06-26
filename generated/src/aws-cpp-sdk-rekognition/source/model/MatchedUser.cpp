/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/MatchedUser.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

MatchedUser::MatchedUser() : 
    m_userIdHasBeenSet(false),
    m_userStatus(UserStatus::NOT_SET),
    m_userStatusHasBeenSet(false)
{
}

MatchedUser::MatchedUser(JsonView jsonValue) : 
    m_userIdHasBeenSet(false),
    m_userStatus(UserStatus::NOT_SET),
    m_userStatusHasBeenSet(false)
{
  *this = jsonValue;
}

MatchedUser& MatchedUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserStatus"))
  {
    m_userStatus = UserStatusMapper::GetUserStatusForName(jsonValue.GetString("UserStatus"));

    m_userStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue MatchedUser::Jsonize() const
{
  JsonValue payload;

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_userStatusHasBeenSet)
  {
   payload.WithString("UserStatus", UserStatusMapper::GetNameForUserStatus(m_userStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
