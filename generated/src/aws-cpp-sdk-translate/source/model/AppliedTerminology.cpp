/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/AppliedTerminology.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

AppliedTerminology::AppliedTerminology() : 
    m_nameHasBeenSet(false),
    m_termsHasBeenSet(false)
{
}

AppliedTerminology::AppliedTerminology(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_termsHasBeenSet(false)
{
  *this = jsonValue;
}

AppliedTerminology& AppliedTerminology::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Terms"))
  {
    Aws::Utils::Array<JsonView> termsJsonList = jsonValue.GetArray("Terms");
    for(unsigned termsIndex = 0; termsIndex < termsJsonList.GetLength(); ++termsIndex)
    {
      m_terms.push_back(termsJsonList[termsIndex].AsObject());
    }
    m_termsHasBeenSet = true;
  }

  return *this;
}

JsonValue AppliedTerminology::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_termsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> termsJsonList(m_terms.size());
   for(unsigned termsIndex = 0; termsIndex < termsJsonList.GetLength(); ++termsIndex)
   {
     termsJsonList[termsIndex].AsObject(m_terms[termsIndex].Jsonize());
   }
   payload.WithArray("Terms", std::move(termsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
