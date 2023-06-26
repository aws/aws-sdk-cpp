/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/SigningMaterial.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

SigningMaterial::SigningMaterial() : 
    m_certificateArnHasBeenSet(false)
{
}

SigningMaterial::SigningMaterial(JsonView jsonValue) : 
    m_certificateArnHasBeenSet(false)
{
  *this = jsonValue;
}

SigningMaterial& SigningMaterial::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");

    m_certificateArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SigningMaterial::Jsonize() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
