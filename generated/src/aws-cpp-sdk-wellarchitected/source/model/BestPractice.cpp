/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/BestPractice.h>
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

BestPractice::BestPractice() : 
    m_choiceIdHasBeenSet(false),
    m_choiceTitleHasBeenSet(false)
{
}

BestPractice::BestPractice(JsonView jsonValue) : 
    m_choiceIdHasBeenSet(false),
    m_choiceTitleHasBeenSet(false)
{
  *this = jsonValue;
}

BestPractice& BestPractice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChoiceId"))
  {
    m_choiceId = jsonValue.GetString("ChoiceId");

    m_choiceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChoiceTitle"))
  {
    m_choiceTitle = jsonValue.GetString("ChoiceTitle");

    m_choiceTitleHasBeenSet = true;
  }

  return *this;
}

JsonValue BestPractice::Jsonize() const
{
  JsonValue payload;

  if(m_choiceIdHasBeenSet)
  {
   payload.WithString("ChoiceId", m_choiceId);

  }

  if(m_choiceTitleHasBeenSet)
  {
   payload.WithString("ChoiceTitle", m_choiceTitle);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
