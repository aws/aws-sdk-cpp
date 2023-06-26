/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SignupResponse.h>
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

SignupResponse::SignupResponse() : 
    m_iAMUser(false),
    m_iAMUserHasBeenSet(false),
    m_userLoginNameHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_directoryTypeHasBeenSet(false)
{
}

SignupResponse::SignupResponse(JsonView jsonValue) : 
    m_iAMUser(false),
    m_iAMUserHasBeenSet(false),
    m_userLoginNameHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_directoryTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SignupResponse& SignupResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IAMUser"))
  {
    m_iAMUser = jsonValue.GetBool("IAMUser");

    m_iAMUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userLoginName"))
  {
    m_userLoginName = jsonValue.GetString("userLoginName");

    m_userLoginNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountName"))
  {
    m_accountName = jsonValue.GetString("accountName");

    m_accountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("directoryType"))
  {
    m_directoryType = jsonValue.GetString("directoryType");

    m_directoryTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SignupResponse::Jsonize() const
{
  JsonValue payload;

  if(m_iAMUserHasBeenSet)
  {
   payload.WithBool("IAMUser", m_iAMUser);

  }

  if(m_userLoginNameHasBeenSet)
  {
   payload.WithString("userLoginName", m_userLoginName);

  }

  if(m_accountNameHasBeenSet)
  {
   payload.WithString("accountName", m_accountName);

  }

  if(m_directoryTypeHasBeenSet)
  {
   payload.WithString("directoryType", m_directoryType);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
