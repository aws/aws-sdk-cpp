/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ParameterGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

ParameterGroup::ParameterGroup() : 
    m_nameHasBeenSet(false),
    m_familyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_aRNHasBeenSet(false)
{
}

ParameterGroup::ParameterGroup(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_familyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_aRNHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterGroup& ParameterGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Family"))
  {
    m_family = jsonValue.GetString("Family");

    m_familyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterGroup::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_familyHasBeenSet)
  {
   payload.WithString("Family", m_family);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
