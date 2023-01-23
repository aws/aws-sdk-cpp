/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/CollectionFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

CollectionFilters::CollectionFilters() : 
    m_nameHasBeenSet(false),
    m_status(CollectionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

CollectionFilters::CollectionFilters(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_status(CollectionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

CollectionFilters& CollectionFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = CollectionStatusMapper::GetCollectionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue CollectionFilters::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CollectionStatusMapper::GetNameForCollectionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
