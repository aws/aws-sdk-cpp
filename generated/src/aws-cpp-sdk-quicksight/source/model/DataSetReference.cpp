/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSetReference.h>
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

DataSetReference::DataSetReference() : 
    m_dataSetPlaceholderHasBeenSet(false),
    m_dataSetArnHasBeenSet(false)
{
}

DataSetReference::DataSetReference(JsonView jsonValue) : 
    m_dataSetPlaceholderHasBeenSet(false),
    m_dataSetArnHasBeenSet(false)
{
  *this = jsonValue;
}

DataSetReference& DataSetReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetPlaceholder"))
  {
    m_dataSetPlaceholder = jsonValue.GetString("DataSetPlaceholder");

    m_dataSetPlaceholderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetArn"))
  {
    m_dataSetArn = jsonValue.GetString("DataSetArn");

    m_dataSetArnHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSetReference::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetPlaceholderHasBeenSet)
  {
   payload.WithString("DataSetPlaceholder", m_dataSetPlaceholder);

  }

  if(m_dataSetArnHasBeenSet)
  {
   payload.WithString("DataSetArn", m_dataSetArn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
