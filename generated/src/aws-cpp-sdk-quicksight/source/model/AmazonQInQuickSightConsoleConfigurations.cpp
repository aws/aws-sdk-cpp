/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AmazonQInQuickSightConsoleConfigurations.h>
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

AmazonQInQuickSightConsoleConfigurations::AmazonQInQuickSightConsoleConfigurations(JsonView jsonValue)
{
  *this = jsonValue;
}

AmazonQInQuickSightConsoleConfigurations& AmazonQInQuickSightConsoleConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataQnA"))
  {
    m_dataQnA = jsonValue.GetObject("DataQnA");
    m_dataQnAHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GenerativeAuthoring"))
  {
    m_generativeAuthoring = jsonValue.GetObject("GenerativeAuthoring");
    m_generativeAuthoringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutiveSummary"))
  {
    m_executiveSummary = jsonValue.GetObject("ExecutiveSummary");
    m_executiveSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataStories"))
  {
    m_dataStories = jsonValue.GetObject("DataStories");
    m_dataStoriesHasBeenSet = true;
  }
  return *this;
}

JsonValue AmazonQInQuickSightConsoleConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_dataQnAHasBeenSet)
  {
   payload.WithObject("DataQnA", m_dataQnA.Jsonize());

  }

  if(m_generativeAuthoringHasBeenSet)
  {
   payload.WithObject("GenerativeAuthoring", m_generativeAuthoring.Jsonize());

  }

  if(m_executiveSummaryHasBeenSet)
  {
   payload.WithObject("ExecutiveSummary", m_executiveSummary.Jsonize());

  }

  if(m_dataStoriesHasBeenSet)
  {
   payload.WithObject("DataStories", m_dataStories.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
