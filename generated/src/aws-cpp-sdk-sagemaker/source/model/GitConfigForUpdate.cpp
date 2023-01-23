/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/GitConfigForUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

GitConfigForUpdate::GitConfigForUpdate() : 
    m_secretArnHasBeenSet(false)
{
}

GitConfigForUpdate::GitConfigForUpdate(JsonView jsonValue) : 
    m_secretArnHasBeenSet(false)
{
  *this = jsonValue;
}

GitConfigForUpdate& GitConfigForUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  return *this;
}

JsonValue GitConfigForUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
