/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ETag.h>
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

ETag::ETag() : 
    m_algorithm(ETagAlgorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_source1HasBeenSet(false),
    m_source2HasBeenSet(false)
{
}

ETag::ETag(JsonView jsonValue) : 
    m_algorithm(ETagAlgorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_source1HasBeenSet(false),
    m_source2HasBeenSet(false)
{
  *this = jsonValue;
}

ETag& ETag::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("algorithm"))
  {
    m_algorithm = ETagAlgorithmMapper::GetETagAlgorithmForName(jsonValue.GetString("algorithm"));

    m_algorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source1"))
  {
    m_source1 = jsonValue.GetString("source1");

    m_source1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("source2"))
  {
    m_source2 = jsonValue.GetString("source2");

    m_source2HasBeenSet = true;
  }

  return *this;
}

JsonValue ETag::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmHasBeenSet)
  {
   payload.WithString("algorithm", ETagAlgorithmMapper::GetNameForETagAlgorithm(m_algorithm));
  }

  if(m_source1HasBeenSet)
  {
   payload.WithString("source1", m_source1);

  }

  if(m_source2HasBeenSet)
  {
   payload.WithString("source2", m_source2);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
