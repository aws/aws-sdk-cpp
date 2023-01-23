/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ColumnIdentifier::ColumnIdentifier() : 
    m_dataSetIdentifierHasBeenSet(false),
    m_columnNameHasBeenSet(false)
{
}

ColumnIdentifier::ColumnIdentifier(JsonView jsonValue) : 
    m_dataSetIdentifierHasBeenSet(false),
    m_columnNameHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnIdentifier& ColumnIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetIdentifier"))
  {
    m_dataSetIdentifier = jsonValue.GetString("DataSetIdentifier");

    m_dataSetIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnName"))
  {
    m_columnName = jsonValue.GetString("ColumnName");

    m_columnNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetIdentifierHasBeenSet)
  {
   payload.WithString("DataSetIdentifier", m_dataSetIdentifier);

  }

  if(m_columnNameHasBeenSet)
  {
   payload.WithString("ColumnName", m_columnName);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
