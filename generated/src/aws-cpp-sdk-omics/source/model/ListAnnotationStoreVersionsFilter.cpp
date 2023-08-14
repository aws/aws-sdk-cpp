/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListAnnotationStoreVersionsFilter.h>
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

ListAnnotationStoreVersionsFilter::ListAnnotationStoreVersionsFilter() : 
    m_status(VersionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ListAnnotationStoreVersionsFilter::ListAnnotationStoreVersionsFilter(JsonView jsonValue) : 
    m_status(VersionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ListAnnotationStoreVersionsFilter& ListAnnotationStoreVersionsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = VersionStatusMapper::GetVersionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ListAnnotationStoreVersionsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", VersionStatusMapper::GetNameForVersionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
