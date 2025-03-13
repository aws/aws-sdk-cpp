/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/SlurmAuthKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PCS
{
namespace Model
{

SlurmAuthKey::SlurmAuthKey(JsonView jsonValue)
{
  *this = jsonValue;
}

SlurmAuthKey& SlurmAuthKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("secretArn"))
  {
    m_secretArn = jsonValue.GetString("secretArn");
    m_secretArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("secretVersion"))
  {
    m_secretVersion = jsonValue.GetString("secretVersion");
    m_secretVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue SlurmAuthKey::Jsonize() const
{
  JsonValue payload;

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  if(m_secretVersionHasBeenSet)
  {
   payload.WithString("secretVersion", m_secretVersion);

  }

  return payload;
}

} // namespace Model
} // namespace PCS
} // namespace Aws
