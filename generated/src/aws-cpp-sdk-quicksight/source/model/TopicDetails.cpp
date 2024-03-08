/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TopicDetails::TopicDetails() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_userExperienceVersion(TopicUserExperienceVersion::NOT_SET),
    m_userExperienceVersionHasBeenSet(false),
    m_dataSetsHasBeenSet(false)
{
}

TopicDetails::TopicDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_userExperienceVersion(TopicUserExperienceVersion::NOT_SET),
    m_userExperienceVersionHasBeenSet(false),
    m_dataSetsHasBeenSet(false)
{
  *this = jsonValue;
}

TopicDetails& TopicDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserExperienceVersion"))
  {
    m_userExperienceVersion = TopicUserExperienceVersionMapper::GetTopicUserExperienceVersionForName(jsonValue.GetString("UserExperienceVersion"));

    m_userExperienceVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSets"))
  {
    Aws::Utils::Array<JsonView> dataSetsJsonList = jsonValue.GetArray("DataSets");
    for(unsigned dataSetsIndex = 0; dataSetsIndex < dataSetsJsonList.GetLength(); ++dataSetsIndex)
    {
      m_dataSets.push_back(dataSetsJsonList[dataSetsIndex].AsObject());
    }
    m_dataSetsHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_userExperienceVersionHasBeenSet)
  {
   payload.WithString("UserExperienceVersion", TopicUserExperienceVersionMapper::GetNameForTopicUserExperienceVersion(m_userExperienceVersion));
  }

  if(m_dataSetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSetsJsonList(m_dataSets.size());
   for(unsigned dataSetsIndex = 0; dataSetsIndex < dataSetsJsonList.GetLength(); ++dataSetsIndex)
   {
     dataSetsJsonList[dataSetsIndex].AsObject(m_dataSets[dataSetsIndex].Jsonize());
   }
   payload.WithArray("DataSets", std::move(dataSetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
