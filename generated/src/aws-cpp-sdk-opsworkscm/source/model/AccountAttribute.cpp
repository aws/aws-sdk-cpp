/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/AccountAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

AccountAttribute::AccountAttribute() : 
    m_nameHasBeenSet(false),
    m_maximum(0),
    m_maximumHasBeenSet(false),
    m_used(0),
    m_usedHasBeenSet(false)
{
}

AccountAttribute::AccountAttribute(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_maximum(0),
    m_maximumHasBeenSet(false),
    m_used(0),
    m_usedHasBeenSet(false)
{
  *this = jsonValue;
}

AccountAttribute& AccountAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Maximum"))
  {
    m_maximum = jsonValue.GetInteger("Maximum");

    m_maximumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Used"))
  {
    m_used = jsonValue.GetInteger("Used");

    m_usedHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_maximumHasBeenSet)
  {
   payload.WithInteger("Maximum", m_maximum);

  }

  if(m_usedHasBeenSet)
  {
   payload.WithInteger("Used", m_used);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
