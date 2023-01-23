/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/SequenceStoreFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

SequenceStoreFilter::SequenceStoreFilter() : 
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

SequenceStoreFilter::SequenceStoreFilter(JsonView jsonValue) : 
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

SequenceStoreFilter& SequenceStoreFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAfter"))
  {
    m_createdAfter = jsonValue.GetString("createdAfter");

    m_createdAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBefore"))
  {
    m_createdBefore = jsonValue.GetString("createdBefore");

    m_createdBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue SequenceStoreFilter::Jsonize() const
{
  JsonValue payload;

  if(m_createdAfterHasBeenSet)
  {
   payload.WithString("createdAfter", m_createdAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdBeforeHasBeenSet)
  {
   payload.WithString("createdBefore", m_createdBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
