﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicSummary.h>
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

TopicSummary::TopicSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicSummary& TopicSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TopicId"))
  {
    m_topicId = jsonValue.GetString("TopicId");
    m_topicIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserExperienceVersion"))
  {
    m_userExperienceVersion = TopicUserExperienceVersionMapper::GetTopicUserExperienceVersionForName(jsonValue.GetString("UserExperienceVersion"));
    m_userExperienceVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_topicIdHasBeenSet)
  {
   payload.WithString("TopicId", m_topicId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_userExperienceVersionHasBeenSet)
  {
   payload.WithString("UserExperienceVersion", TopicUserExperienceVersionMapper::GetNameForTopicUserExperienceVersion(m_userExperienceVersion));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
