/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ImportOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

ImportOptions::ImportOptions() : 
    m_neptuneHasBeenSet(false)
{
}

ImportOptions::ImportOptions(JsonView jsonValue) : 
    m_neptuneHasBeenSet(false)
{
  *this = jsonValue;
}

ImportOptions& ImportOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("neptune"))
  {
    m_neptune = jsonValue.GetObject("neptune");

    m_neptuneHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportOptions::Jsonize() const
{
  JsonValue payload;

  if(m_neptuneHasBeenSet)
  {
   payload.WithObject("neptune", m_neptune.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
