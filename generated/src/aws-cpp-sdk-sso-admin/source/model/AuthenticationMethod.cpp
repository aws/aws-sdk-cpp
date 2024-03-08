/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/AuthenticationMethod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

AuthenticationMethod::AuthenticationMethod() : 
    m_iamHasBeenSet(false)
{
}

AuthenticationMethod::AuthenticationMethod(JsonView jsonValue) : 
    m_iamHasBeenSet(false)
{
  *this = jsonValue;
}

AuthenticationMethod& AuthenticationMethod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Iam"))
  {
    m_iam = jsonValue.GetObject("Iam");

    m_iamHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthenticationMethod::Jsonize() const
{
  JsonValue payload;

  if(m_iamHasBeenSet)
  {
   payload.WithObject("Iam", m_iam.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
