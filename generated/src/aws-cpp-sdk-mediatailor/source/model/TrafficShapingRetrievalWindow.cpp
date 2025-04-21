/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/TrafficShapingRetrievalWindow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

TrafficShapingRetrievalWindow::TrafficShapingRetrievalWindow(JsonView jsonValue)
{
  *this = jsonValue;
}

TrafficShapingRetrievalWindow& TrafficShapingRetrievalWindow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RetrievalWindowDurationSeconds"))
  {
    m_retrievalWindowDurationSeconds = jsonValue.GetInteger("RetrievalWindowDurationSeconds");
    m_retrievalWindowDurationSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue TrafficShapingRetrievalWindow::Jsonize() const
{
  JsonValue payload;

  if(m_retrievalWindowDurationSecondsHasBeenSet)
  {
   payload.WithInteger("RetrievalWindowDurationSeconds", m_retrievalWindowDurationSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
