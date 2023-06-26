/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VisualCustomActionOperation.h>
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

VisualCustomActionOperation::VisualCustomActionOperation() : 
    m_filterOperationHasBeenSet(false),
    m_navigationOperationHasBeenSet(false),
    m_uRLOperationHasBeenSet(false),
    m_setParametersOperationHasBeenSet(false)
{
}

VisualCustomActionOperation::VisualCustomActionOperation(JsonView jsonValue) : 
    m_filterOperationHasBeenSet(false),
    m_navigationOperationHasBeenSet(false),
    m_uRLOperationHasBeenSet(false),
    m_setParametersOperationHasBeenSet(false)
{
  *this = jsonValue;
}

VisualCustomActionOperation& VisualCustomActionOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterOperation"))
  {
    m_filterOperation = jsonValue.GetObject("FilterOperation");

    m_filterOperationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NavigationOperation"))
  {
    m_navigationOperation = jsonValue.GetObject("NavigationOperation");

    m_navigationOperationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("URLOperation"))
  {
    m_uRLOperation = jsonValue.GetObject("URLOperation");

    m_uRLOperationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SetParametersOperation"))
  {
    m_setParametersOperation = jsonValue.GetObject("SetParametersOperation");

    m_setParametersOperationHasBeenSet = true;
  }

  return *this;
}

JsonValue VisualCustomActionOperation::Jsonize() const
{
  JsonValue payload;

  if(m_filterOperationHasBeenSet)
  {
   payload.WithObject("FilterOperation", m_filterOperation.Jsonize());

  }

  if(m_navigationOperationHasBeenSet)
  {
   payload.WithObject("NavigationOperation", m_navigationOperation.Jsonize());

  }

  if(m_uRLOperationHasBeenSet)
  {
   payload.WithObject("URLOperation", m_uRLOperation.Jsonize());

  }

  if(m_setParametersOperationHasBeenSet)
  {
   payload.WithObject("SetParametersOperation", m_setParametersOperation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
