/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/TagFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

TagFilter::TagFilter() : 
    m_tagHasBeenSet(false)
{
}

TagFilter::TagFilter(JsonView jsonValue) : 
    m_tagHasBeenSet(false)
{
  *this = jsonValue;
}

TagFilter& TagFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tag"))
  {
    m_tag = jsonValue.GetString("tag");

    m_tagHasBeenSet = true;
  }

  return *this;
}

JsonValue TagFilter::Jsonize() const
{
  JsonValue payload;

  if(m_tagHasBeenSet)
  {
   payload.WithString("tag", m_tag);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
