/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AccessConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

AccessConfiguration::AccessConfiguration() : 
    m_accessControlsHasBeenSet(false),
    m_memberRelation(MemberRelation::NOT_SET),
    m_memberRelationHasBeenSet(false)
{
}

AccessConfiguration::AccessConfiguration(JsonView jsonValue) : 
    m_accessControlsHasBeenSet(false),
    m_memberRelation(MemberRelation::NOT_SET),
    m_memberRelationHasBeenSet(false)
{
  *this = jsonValue;
}

AccessConfiguration& AccessConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessControls"))
  {
    Aws::Utils::Array<JsonView> accessControlsJsonList = jsonValue.GetArray("accessControls");
    for(unsigned accessControlsIndex = 0; accessControlsIndex < accessControlsJsonList.GetLength(); ++accessControlsIndex)
    {
      m_accessControls.push_back(accessControlsJsonList[accessControlsIndex].AsObject());
    }
    m_accessControlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memberRelation"))
  {
    m_memberRelation = MemberRelationMapper::GetMemberRelationForName(jsonValue.GetString("memberRelation"));

    m_memberRelationHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accessControlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessControlsJsonList(m_accessControls.size());
   for(unsigned accessControlsIndex = 0; accessControlsIndex < accessControlsJsonList.GetLength(); ++accessControlsIndex)
   {
     accessControlsJsonList[accessControlsIndex].AsObject(m_accessControls[accessControlsIndex].Jsonize());
   }
   payload.WithArray("accessControls", std::move(accessControlsJsonList));

  }

  if(m_memberRelationHasBeenSet)
  {
   payload.WithString("memberRelation", MemberRelationMapper::GetNameForMemberRelation(m_memberRelation));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
