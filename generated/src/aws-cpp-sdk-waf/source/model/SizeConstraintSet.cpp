/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/SizeConstraintSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

SizeConstraintSet::SizeConstraintSet() : 
    m_sizeConstraintSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sizeConstraintsHasBeenSet(false)
{
}

SizeConstraintSet::SizeConstraintSet(JsonView jsonValue) : 
    m_sizeConstraintSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sizeConstraintsHasBeenSet(false)
{
  *this = jsonValue;
}

SizeConstraintSet& SizeConstraintSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SizeConstraintSetId"))
  {
    m_sizeConstraintSetId = jsonValue.GetString("SizeConstraintSetId");

    m_sizeConstraintSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeConstraints"))
  {
    Aws::Utils::Array<JsonView> sizeConstraintsJsonList = jsonValue.GetArray("SizeConstraints");
    for(unsigned sizeConstraintsIndex = 0; sizeConstraintsIndex < sizeConstraintsJsonList.GetLength(); ++sizeConstraintsIndex)
    {
      m_sizeConstraints.push_back(sizeConstraintsJsonList[sizeConstraintsIndex].AsObject());
    }
    m_sizeConstraintsHasBeenSet = true;
  }

  return *this;
}

JsonValue SizeConstraintSet::Jsonize() const
{
  JsonValue payload;

  if(m_sizeConstraintSetIdHasBeenSet)
  {
   payload.WithString("SizeConstraintSetId", m_sizeConstraintSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_sizeConstraintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sizeConstraintsJsonList(m_sizeConstraints.size());
   for(unsigned sizeConstraintsIndex = 0; sizeConstraintsIndex < sizeConstraintsJsonList.GetLength(); ++sizeConstraintsIndex)
   {
     sizeConstraintsJsonList[sizeConstraintsIndex].AsObject(m_sizeConstraints[sizeConstraintsIndex].Jsonize());
   }
   payload.WithArray("SizeConstraints", std::move(sizeConstraintsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
