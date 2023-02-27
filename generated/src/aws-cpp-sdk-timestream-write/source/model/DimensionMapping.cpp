/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/DimensionMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

DimensionMapping::DimensionMapping() : 
    m_sourceColumnHasBeenSet(false),
    m_destinationColumnHasBeenSet(false)
{
}

DimensionMapping::DimensionMapping(JsonView jsonValue) : 
    m_sourceColumnHasBeenSet(false),
    m_destinationColumnHasBeenSet(false)
{
  *this = jsonValue;
}

DimensionMapping& DimensionMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceColumn"))
  {
    m_sourceColumn = jsonValue.GetString("SourceColumn");

    m_sourceColumnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationColumn"))
  {
    m_destinationColumn = jsonValue.GetString("DestinationColumn");

    m_destinationColumnHasBeenSet = true;
  }

  return *this;
}

JsonValue DimensionMapping::Jsonize() const
{
  JsonValue payload;

  if(m_sourceColumnHasBeenSet)
  {
   payload.WithString("SourceColumn", m_sourceColumn);

  }

  if(m_destinationColumnHasBeenSet)
  {
   payload.WithString("DestinationColumn", m_destinationColumn);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
