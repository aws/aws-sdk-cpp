/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/SsmExternalParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

SsmExternalParameter::SsmExternalParameter() : 
    m_dynamicPathHasBeenSet(false)
{
}

SsmExternalParameter::SsmExternalParameter(JsonView jsonValue) : 
    m_dynamicPathHasBeenSet(false)
{
  *this = jsonValue;
}

SsmExternalParameter& SsmExternalParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dynamicPath"))
  {
    m_dynamicPath = jsonValue.GetString("dynamicPath");

    m_dynamicPathHasBeenSet = true;
  }

  return *this;
}

JsonValue SsmExternalParameter::Jsonize() const
{
  JsonValue payload;

  if(m_dynamicPathHasBeenSet)
  {
   payload.WithString("dynamicPath", m_dynamicPath);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
