/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/PrincipalOutput.h>
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

PrincipalOutput::PrincipalOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

PrincipalOutput& PrincipalOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userType"))
  {
    m_userType = PrincipalOutputUserTypeEnumMapper::GetPrincipalOutputUserTypeEnumForName(jsonValue.GetString("userType"));
    m_userTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");
    m_emailHasBeenSet = true;
  }
  return *this;
}

JsonValue PrincipalOutput::Jsonize() const
{
  JsonValue payload;

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  if(m_userTypeHasBeenSet)
  {
   payload.WithString("userType", PrincipalOutputUserTypeEnumMapper::GetNameForPrincipalOutputUserTypeEnum(m_userType));
  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
