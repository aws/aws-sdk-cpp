/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/CheckSummary.h>
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

CheckSummary::CheckSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provider(CheckProvider::NOT_SET),
    m_providerHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_lensArnHasBeenSet(false),
    m_pillarIdHasBeenSet(false),
    m_questionIdHasBeenSet(false),
    m_choiceIdHasBeenSet(false),
    m_status(CheckStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_accountSummaryHasBeenSet(false)
{
}

CheckSummary::CheckSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_provider(CheckProvider::NOT_SET),
    m_providerHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_lensArnHasBeenSet(false),
    m_pillarIdHasBeenSet(false),
    m_questionIdHasBeenSet(false),
    m_choiceIdHasBeenSet(false),
    m_status(CheckStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_accountSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

CheckSummary& CheckSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Provider"))
  {
    m_provider = CheckProviderMapper::GetCheckProviderForName(jsonValue.GetString("Provider"));

    m_providerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensArn"))
  {
    m_lensArn = jsonValue.GetString("LensArn");

    m_lensArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PillarId"))
  {
    m_pillarId = jsonValue.GetString("PillarId");

    m_pillarIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuestionId"))
  {
    m_questionId = jsonValue.GetString("QuestionId");

    m_questionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChoiceId"))
  {
    m_choiceId = jsonValue.GetString("ChoiceId");

    m_choiceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CheckStatusMapper::GetCheckStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountSummary"))
  {
    Aws::Map<Aws::String, JsonView> accountSummaryJsonMap = jsonValue.GetObject("AccountSummary").GetAllObjects();
    for(auto& accountSummaryItem : accountSummaryJsonMap)
    {
      m_accountSummary[CheckStatusMapper::GetCheckStatusForName(accountSummaryItem.first)] = accountSummaryItem.second.AsInteger();
    }
    m_accountSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue CheckSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("Provider", CheckProviderMapper::GetNameForCheckProvider(m_provider));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_lensArnHasBeenSet)
  {
   payload.WithString("LensArn", m_lensArn);

  }

  if(m_pillarIdHasBeenSet)
  {
   payload.WithString("PillarId", m_pillarId);

  }

  if(m_questionIdHasBeenSet)
  {
   payload.WithString("QuestionId", m_questionId);

  }

  if(m_choiceIdHasBeenSet)
  {
   payload.WithString("ChoiceId", m_choiceId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CheckStatusMapper::GetNameForCheckStatus(m_status));
  }

  if(m_accountSummaryHasBeenSet)
  {
   JsonValue accountSummaryJsonMap;
   for(auto& accountSummaryItem : m_accountSummary)
   {
     accountSummaryJsonMap.WithInteger(CheckStatusMapper::GetNameForCheckStatus(accountSummaryItem.first), accountSummaryItem.second);
   }
   payload.WithObject("AccountSummary", std::move(accountSummaryJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
