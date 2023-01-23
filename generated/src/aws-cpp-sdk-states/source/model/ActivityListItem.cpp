/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ActivityListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

ActivityListItem::ActivityListItem() : 
    m_activityArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

ActivityListItem::ActivityListItem(JsonView jsonValue) : 
    m_activityArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

ActivityListItem& ActivityListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activityArn"))
  {
    m_activityArn = jsonValue.GetString("activityArn");

    m_activityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivityListItem::Jsonize() const
{
  JsonValue payload;

  if(m_activityArnHasBeenSet)
  {
   payload.WithString("activityArn", m_activityArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
