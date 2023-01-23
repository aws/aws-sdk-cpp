/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RegexPatternSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

RegexPatternSet::RegexPatternSet() : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_regularExpressionListHasBeenSet(false)
{
}

RegexPatternSet::RegexPatternSet(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_regularExpressionListHasBeenSet(false)
{
  *this = jsonValue;
}

RegexPatternSet& RegexPatternSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegularExpressionList"))
  {
    Aws::Utils::Array<JsonView> regularExpressionListJsonList = jsonValue.GetArray("RegularExpressionList");
    for(unsigned regularExpressionListIndex = 0; regularExpressionListIndex < regularExpressionListJsonList.GetLength(); ++regularExpressionListIndex)
    {
      m_regularExpressionList.push_back(regularExpressionListJsonList[regularExpressionListIndex].AsObject());
    }
    m_regularExpressionListHasBeenSet = true;
  }

  return *this;
}

JsonValue RegexPatternSet::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_regularExpressionListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regularExpressionListJsonList(m_regularExpressionList.size());
   for(unsigned regularExpressionListIndex = 0; regularExpressionListIndex < regularExpressionListJsonList.GetLength(); ++regularExpressionListIndex)
   {
     regularExpressionListJsonList[regularExpressionListIndex].AsObject(m_regularExpressionList[regularExpressionListIndex].Jsonize());
   }
   payload.WithArray("RegularExpressionList", std::move(regularExpressionListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
