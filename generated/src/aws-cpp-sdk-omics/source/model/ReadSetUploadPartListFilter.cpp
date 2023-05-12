/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadSetUploadPartListFilter.h>
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

ReadSetUploadPartListFilter::ReadSetUploadPartListFilter() : 
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false)
{
}

ReadSetUploadPartListFilter::ReadSetUploadPartListFilter(JsonView jsonValue) : 
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false)
{
  *this = jsonValue;
}

ReadSetUploadPartListFilter& ReadSetUploadPartListFilter::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue ReadSetUploadPartListFilter::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
