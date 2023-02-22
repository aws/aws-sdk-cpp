/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/OffPeakWindow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

OffPeakWindow::OffPeakWindow() : 
    m_windowStartTimeHasBeenSet(false)
{
}

OffPeakWindow::OffPeakWindow(JsonView jsonValue) : 
    m_windowStartTimeHasBeenSet(false)
{
  *this = jsonValue;
}

OffPeakWindow& OffPeakWindow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WindowStartTime"))
  {
    m_windowStartTime = jsonValue.GetObject("WindowStartTime");

    m_windowStartTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue OffPeakWindow::Jsonize() const
{
  JsonValue payload;

  if(m_windowStartTimeHasBeenSet)
  {
   payload.WithObject("WindowStartTime", m_windowStartTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
