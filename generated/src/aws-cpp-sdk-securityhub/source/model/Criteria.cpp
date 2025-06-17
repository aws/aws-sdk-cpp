/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Criteria.h>
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

Criteria::Criteria(JsonView jsonValue)
{
  *this = jsonValue;
}

Criteria& Criteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OcsfFindingCriteria"))
  {
    m_ocsfFindingCriteria = jsonValue.GetObject("OcsfFindingCriteria");
    m_ocsfFindingCriteriaHasBeenSet = true;
  }
  return *this;
}

JsonValue Criteria::Jsonize() const
{
  JsonValue payload;

  if(m_ocsfFindingCriteriaHasBeenSet)
  {
   payload.WithObject("OcsfFindingCriteria", m_ocsfFindingCriteria.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
