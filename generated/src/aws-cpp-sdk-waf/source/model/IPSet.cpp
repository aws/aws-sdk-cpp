/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/IPSet.h>
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

IPSet::IPSet() : 
    m_iPSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_iPSetDescriptorsHasBeenSet(false)
{
}

IPSet::IPSet(JsonView jsonValue) : 
    m_iPSetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_iPSetDescriptorsHasBeenSet(false)
{
  *this = jsonValue;
}

IPSet& IPSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IPSetId"))
  {
    m_iPSetId = jsonValue.GetString("IPSetId");

    m_iPSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IPSetDescriptors"))
  {
    Aws::Utils::Array<JsonView> iPSetDescriptorsJsonList = jsonValue.GetArray("IPSetDescriptors");
    for(unsigned iPSetDescriptorsIndex = 0; iPSetDescriptorsIndex < iPSetDescriptorsJsonList.GetLength(); ++iPSetDescriptorsIndex)
    {
      m_iPSetDescriptors.push_back(iPSetDescriptorsJsonList[iPSetDescriptorsIndex].AsObject());
    }
    m_iPSetDescriptorsHasBeenSet = true;
  }

  return *this;
}

JsonValue IPSet::Jsonize() const
{
  JsonValue payload;

  if(m_iPSetIdHasBeenSet)
  {
   payload.WithString("IPSetId", m_iPSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_iPSetDescriptorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> iPSetDescriptorsJsonList(m_iPSetDescriptors.size());
   for(unsigned iPSetDescriptorsIndex = 0; iPSetDescriptorsIndex < iPSetDescriptorsJsonList.GetLength(); ++iPSetDescriptorsIndex)
   {
     iPSetDescriptorsJsonList[iPSetDescriptorsIndex].AsObject(m_iPSetDescriptors[iPSetDescriptorsIndex].Jsonize());
   }
   payload.WithArray("IPSetDescriptors", std::move(iPSetDescriptorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
