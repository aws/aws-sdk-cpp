/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ShiftDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

ShiftDetails::ShiftDetails() : 
    m_overriddenContactIdsHasBeenSet(false)
{
}

ShiftDetails::ShiftDetails(JsonView jsonValue) : 
    m_overriddenContactIdsHasBeenSet(false)
{
  *this = jsonValue;
}

ShiftDetails& ShiftDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OverriddenContactIds"))
  {
    Aws::Utils::Array<JsonView> overriddenContactIdsJsonList = jsonValue.GetArray("OverriddenContactIds");
    for(unsigned overriddenContactIdsIndex = 0; overriddenContactIdsIndex < overriddenContactIdsJsonList.GetLength(); ++overriddenContactIdsIndex)
    {
      m_overriddenContactIds.push_back(overriddenContactIdsJsonList[overriddenContactIdsIndex].AsString());
    }
    m_overriddenContactIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue ShiftDetails::Jsonize() const
{
  JsonValue payload;

  if(m_overriddenContactIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> overriddenContactIdsJsonList(m_overriddenContactIds.size());
   for(unsigned overriddenContactIdsIndex = 0; overriddenContactIdsIndex < overriddenContactIdsJsonList.GetLength(); ++overriddenContactIdsIndex)
   {
     overriddenContactIdsJsonList[overriddenContactIdsIndex].AsString(m_overriddenContactIds[overriddenContactIdsIndex]);
   }
   payload.WithArray("OverriddenContactIds", std::move(overriddenContactIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
