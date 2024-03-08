/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/Principal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

Principal::Principal() : 
    m_groupHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

Principal::Principal(JsonView jsonValue) : 
    m_groupHasBeenSet(false),
    m_userHasBeenSet(false)
{
  *this = jsonValue;
}

Principal& Principal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("group"))
  {
    m_group = jsonValue.GetObject("group");

    m_groupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetObject("user");

    m_userHasBeenSet = true;
  }

  return *this;
}

JsonValue Principal::Jsonize() const
{
  JsonValue payload;

  if(m_groupHasBeenSet)
  {
   payload.WithObject("group", m_group.Jsonize());

  }

  if(m_userHasBeenSet)
  {
   payload.WithObject("user", m_user.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
