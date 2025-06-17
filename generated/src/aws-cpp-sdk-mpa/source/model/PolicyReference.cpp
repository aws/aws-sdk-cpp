/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/PolicyReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MPA
{
namespace Model
{

PolicyReference::PolicyReference(JsonView jsonValue)
{
  *this = jsonValue;
}

PolicyReference& PolicyReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyArn"))
  {
    m_policyArn = jsonValue.GetString("PolicyArn");
    m_policyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyReference::Jsonize() const
{
  JsonValue payload;

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("PolicyArn", m_policyArn);

  }

  return payload;
}

} // namespace Model
} // namespace MPA
} // namespace Aws
