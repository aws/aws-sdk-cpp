/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/FastResetToken.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

FastResetToken::FastResetToken() : 
    m_tokenHasBeenSet(false)
{
}

FastResetToken::FastResetToken(JsonView jsonValue) : 
    m_tokenHasBeenSet(false)
{
  *this = jsonValue;
}

FastResetToken& FastResetToken::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("token"))
  {
    m_token = jsonValue.GetString("token");

    m_tokenHasBeenSet = true;
  }

  return *this;
}

JsonValue FastResetToken::Jsonize() const
{
  JsonValue payload;

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
