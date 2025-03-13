/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/SelectedPillar.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

SelectedPillar::SelectedPillar(JsonView jsonValue)
{
  *this = jsonValue;
}

SelectedPillar& SelectedPillar::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PillarId"))
  {
    m_pillarId = jsonValue.GetString("PillarId");
    m_pillarIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelectedQuestionIds"))
  {
    Aws::Utils::Array<JsonView> selectedQuestionIdsJsonList = jsonValue.GetArray("SelectedQuestionIds");
    for(unsigned selectedQuestionIdsIndex = 0; selectedQuestionIdsIndex < selectedQuestionIdsJsonList.GetLength(); ++selectedQuestionIdsIndex)
    {
      m_selectedQuestionIds.push_back(selectedQuestionIdsJsonList[selectedQuestionIdsIndex].AsString());
    }
    m_selectedQuestionIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue SelectedPillar::Jsonize() const
{
  JsonValue payload;

  if(m_pillarIdHasBeenSet)
  {
   payload.WithString("PillarId", m_pillarId);

  }

  if(m_selectedQuestionIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedQuestionIdsJsonList(m_selectedQuestionIds.size());
   for(unsigned selectedQuestionIdsIndex = 0; selectedQuestionIdsIndex < selectedQuestionIdsJsonList.GetLength(); ++selectedQuestionIdsIndex)
   {
     selectedQuestionIdsJsonList[selectedQuestionIdsIndex].AsString(m_selectedQuestionIds[selectedQuestionIdsIndex]);
   }
   payload.WithArray("SelectedQuestionIds", std::move(selectedQuestionIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
