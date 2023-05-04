/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicRefreshDetails.h>
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

TopicRefreshDetails::TopicRefreshDetails() : 
    m_refreshArnHasBeenSet(false),
    m_refreshIdHasBeenSet(false),
    m_refreshStatus(TopicRefreshStatus::NOT_SET),
    m_refreshStatusHasBeenSet(false)
{
}

TopicRefreshDetails::TopicRefreshDetails(JsonView jsonValue) : 
    m_refreshArnHasBeenSet(false),
    m_refreshIdHasBeenSet(false),
    m_refreshStatus(TopicRefreshStatus::NOT_SET),
    m_refreshStatusHasBeenSet(false)
{
  *this = jsonValue;
}

TopicRefreshDetails& TopicRefreshDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RefreshArn"))
  {
    m_refreshArn = jsonValue.GetString("RefreshArn");

    m_refreshArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefreshId"))
  {
    m_refreshId = jsonValue.GetString("RefreshId");

    m_refreshIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefreshStatus"))
  {
    m_refreshStatus = TopicRefreshStatusMapper::GetTopicRefreshStatusForName(jsonValue.GetString("RefreshStatus"));

    m_refreshStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicRefreshDetails::Jsonize() const
{
  JsonValue payload;

  if(m_refreshArnHasBeenSet)
  {
   payload.WithString("RefreshArn", m_refreshArn);

  }

  if(m_refreshIdHasBeenSet)
  {
   payload.WithString("RefreshId", m_refreshId);

  }

  if(m_refreshStatusHasBeenSet)
  {
   payload.WithString("RefreshStatus", TopicRefreshStatusMapper::GetNameForTopicRefreshStatus(m_refreshStatus));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
