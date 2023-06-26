/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ProfileChoice.h>
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

ProfileChoice::ProfileChoice() : 
    m_choiceIdHasBeenSet(false),
    m_choiceTitleHasBeenSet(false),
    m_choiceDescriptionHasBeenSet(false)
{
}

ProfileChoice::ProfileChoice(JsonView jsonValue) : 
    m_choiceIdHasBeenSet(false),
    m_choiceTitleHasBeenSet(false),
    m_choiceDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ProfileChoice& ProfileChoice::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ChoiceDescription"))
  {
    m_choiceDescription = jsonValue.GetString("ChoiceDescription");

    m_choiceDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ProfileChoice::Jsonize() const
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

  if(m_choiceDescriptionHasBeenSet)
  {
   payload.WithString("ChoiceDescription", m_choiceDescription);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
