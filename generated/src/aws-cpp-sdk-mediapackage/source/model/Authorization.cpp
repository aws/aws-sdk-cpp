/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/Authorization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

Authorization::Authorization() : 
    m_cdnIdentifierSecretHasBeenSet(false),
    m_secretsRoleArnHasBeenSet(false)
{
}

Authorization::Authorization(JsonView jsonValue) : 
    m_cdnIdentifierSecretHasBeenSet(false),
    m_secretsRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

Authorization& Authorization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cdnIdentifierSecret"))
  {
    m_cdnIdentifierSecret = jsonValue.GetString("cdnIdentifierSecret");

    m_cdnIdentifierSecretHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretsRoleArn"))
  {
    m_secretsRoleArn = jsonValue.GetString("secretsRoleArn");

    m_secretsRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Authorization::Jsonize() const
{
  JsonValue payload;

  if(m_cdnIdentifierSecretHasBeenSet)
  {
   payload.WithString("cdnIdentifierSecret", m_cdnIdentifierSecret);

  }

  if(m_secretsRoleArnHasBeenSet)
  {
   payload.WithString("secretsRoleArn", m_secretsRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
