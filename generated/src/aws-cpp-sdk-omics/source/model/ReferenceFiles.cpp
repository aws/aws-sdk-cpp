/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReferenceFiles.h>
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

ReferenceFiles::ReferenceFiles() : 
    m_sourceHasBeenSet(false),
    m_indexHasBeenSet(false)
{
}

ReferenceFiles::ReferenceFiles(JsonView jsonValue) : 
    m_sourceHasBeenSet(false),
    m_indexHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceFiles& ReferenceFiles::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("index"))
  {
    m_index = jsonValue.GetObject("index");

    m_indexHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceFiles::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_indexHasBeenSet)
  {
   payload.WithObject("index", m_index.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
