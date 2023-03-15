/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/Result.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

Result::Result() : 
    m_analysisStatusHasBeenSet(false),
    m_analysisType(AnalysisType::NOT_SET),
    m_analysisTypeHasBeenSet(false),
    m_antipatternReportResultListHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

Result::Result(JsonView jsonValue) : 
    m_analysisStatusHasBeenSet(false),
    m_analysisType(AnalysisType::NOT_SET),
    m_analysisTypeHasBeenSet(false),
    m_antipatternReportResultListHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

Result& Result::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("analysisStatus"))
  {
    m_analysisStatus = jsonValue.GetObject("analysisStatus");

    m_analysisStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("analysisType"))
  {
    m_analysisType = AnalysisTypeMapper::GetAnalysisTypeForName(jsonValue.GetString("analysisType"));

    m_analysisTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("antipatternReportResultList"))
  {
    Aws::Utils::Array<JsonView> antipatternReportResultListJsonList = jsonValue.GetArray("antipatternReportResultList");
    for(unsigned antipatternReportResultListIndex = 0; antipatternReportResultListIndex < antipatternReportResultListJsonList.GetLength(); ++antipatternReportResultListIndex)
    {
      m_antipatternReportResultList.push_back(antipatternReportResultListJsonList[antipatternReportResultListIndex].AsObject());
    }
    m_antipatternReportResultListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue Result::Jsonize() const
{
  JsonValue payload;

  if(m_analysisStatusHasBeenSet)
  {
   payload.WithObject("analysisStatus", m_analysisStatus.Jsonize());

  }

  if(m_analysisTypeHasBeenSet)
  {
   payload.WithString("analysisType", AnalysisTypeMapper::GetNameForAnalysisType(m_analysisType));
  }

  if(m_antipatternReportResultListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> antipatternReportResultListJsonList(m_antipatternReportResultList.size());
   for(unsigned antipatternReportResultListIndex = 0; antipatternReportResultListIndex < antipatternReportResultListJsonList.GetLength(); ++antipatternReportResultListIndex)
   {
     antipatternReportResultListJsonList[antipatternReportResultListIndex].AsObject(m_antipatternReportResultList[antipatternReportResultListIndex].Jsonize());
   }
   payload.WithArray("antipatternReportResultList", std::move(antipatternReportResultListJsonList));

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
