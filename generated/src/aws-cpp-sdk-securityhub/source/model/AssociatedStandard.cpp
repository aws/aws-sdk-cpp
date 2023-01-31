/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AssociatedStandard.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AssociatedStandard::AssociatedStandard() : 
    m_standardsIdHasBeenSet(false)
{
}

AssociatedStandard::AssociatedStandard(JsonView jsonValue) : 
    m_standardsIdHasBeenSet(false)
{
  *this = jsonValue;
}

AssociatedStandard& AssociatedStandard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StandardsId"))
  {
    m_standardsId = jsonValue.GetString("StandardsId");

    m_standardsIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociatedStandard::Jsonize() const
{
  JsonValue payload;

  if(m_standardsIdHasBeenSet)
  {
   payload.WithString("StandardsId", m_standardsId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
