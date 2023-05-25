/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadSetFiles.h>
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

ReadSetFiles::ReadSetFiles() : 
    m_indexHasBeenSet(false),
    m_source1HasBeenSet(false),
    m_source2HasBeenSet(false)
{
}

ReadSetFiles::ReadSetFiles(JsonView jsonValue) : 
    m_indexHasBeenSet(false),
    m_source1HasBeenSet(false),
    m_source2HasBeenSet(false)
{
  *this = jsonValue;
}

ReadSetFiles& ReadSetFiles::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("index"))
  {
    m_index = jsonValue.GetObject("index");

    m_indexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source1"))
  {
    m_source1 = jsonValue.GetObject("source1");

    m_source1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("source2"))
  {
    m_source2 = jsonValue.GetObject("source2");

    m_source2HasBeenSet = true;
  }

  return *this;
}

JsonValue ReadSetFiles::Jsonize() const
{
  JsonValue payload;

  if(m_indexHasBeenSet)
  {
   payload.WithObject("index", m_index.Jsonize());

  }

  if(m_source1HasBeenSet)
  {
   payload.WithObject("source1", m_source1.Jsonize());

  }

  if(m_source2HasBeenSet)
  {
   payload.WithObject("source2", m_source2.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
