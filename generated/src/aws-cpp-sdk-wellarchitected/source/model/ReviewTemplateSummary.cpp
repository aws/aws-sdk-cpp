/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ReviewTemplateSummary.h>
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

ReviewTemplateSummary::ReviewTemplateSummary() : 
    m_descriptionHasBeenSet(false),
    m_lensesHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_templateArnHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_updateStatus(ReviewTemplateUpdateStatus::NOT_SET),
    m_updateStatusHasBeenSet(false)
{
}

ReviewTemplateSummary::ReviewTemplateSummary(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_lensesHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_templateArnHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_updateStatus(ReviewTemplateUpdateStatus::NOT_SET),
    m_updateStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ReviewTemplateSummary& ReviewTemplateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lenses"))
  {
    Aws::Utils::Array<JsonView> lensesJsonList = jsonValue.GetArray("Lenses");
    for(unsigned lensesIndex = 0; lensesIndex < lensesJsonList.GetLength(); ++lensesIndex)
    {
      m_lenses.push_back(lensesJsonList[lensesIndex].AsString());
    }
    m_lensesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateArn"))
  {
    m_templateArn = jsonValue.GetString("TemplateArn");

    m_templateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateName"))
  {
    m_templateName = jsonValue.GetString("TemplateName");

    m_templateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateStatus"))
  {
    m_updateStatus = ReviewTemplateUpdateStatusMapper::GetReviewTemplateUpdateStatusForName(jsonValue.GetString("UpdateStatus"));

    m_updateStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ReviewTemplateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_lensesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lensesJsonList(m_lenses.size());
   for(unsigned lensesIndex = 0; lensesIndex < lensesJsonList.GetLength(); ++lensesIndex)
   {
     lensesJsonList[lensesIndex].AsString(m_lenses[lensesIndex]);
   }
   payload.WithArray("Lenses", std::move(lensesJsonList));

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_templateArnHasBeenSet)
  {
   payload.WithString("TemplateArn", m_templateArn);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_updateStatusHasBeenSet)
  {
   payload.WithString("UpdateStatus", ReviewTemplateUpdateStatusMapper::GetNameForReviewTemplateUpdateStatus(m_updateStatus));
  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
