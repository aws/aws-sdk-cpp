/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/AnnotationImportItemSource.h>
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

AnnotationImportItemSource::AnnotationImportItemSource() : 
    m_sourceHasBeenSet(false)
{
}

AnnotationImportItemSource::AnnotationImportItemSource(JsonView jsonValue) : 
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

AnnotationImportItemSource& AnnotationImportItemSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue AnnotationImportItemSource::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
