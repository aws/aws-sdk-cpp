/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StandardsControlAssociationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

StandardsControlAssociationDetail::StandardsControlAssociationDetail() : 
    m_standardsArnHasBeenSet(false),
    m_securityControlIdHasBeenSet(false),
    m_securityControlArnHasBeenSet(false),
    m_associationStatus(AssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false),
    m_relatedRequirementsHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedReasonHasBeenSet(false),
    m_standardsControlTitleHasBeenSet(false),
    m_standardsControlDescriptionHasBeenSet(false),
    m_standardsControlArnsHasBeenSet(false)
{
}

StandardsControlAssociationDetail::StandardsControlAssociationDetail(JsonView jsonValue) : 
    m_standardsArnHasBeenSet(false),
    m_securityControlIdHasBeenSet(false),
    m_securityControlArnHasBeenSet(false),
    m_associationStatus(AssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false),
    m_relatedRequirementsHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedReasonHasBeenSet(false),
    m_standardsControlTitleHasBeenSet(false),
    m_standardsControlDescriptionHasBeenSet(false),
    m_standardsControlArnsHasBeenSet(false)
{
  *this = jsonValue;
}

StandardsControlAssociationDetail& StandardsControlAssociationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StandardsArn"))
  {
    m_standardsArn = jsonValue.GetString("StandardsArn");

    m_standardsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityControlId"))
  {
    m_securityControlId = jsonValue.GetString("SecurityControlId");

    m_securityControlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityControlArn"))
  {
    m_securityControlArn = jsonValue.GetString("SecurityControlArn");

    m_securityControlArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationStatus"))
  {
    m_associationStatus = AssociationStatusMapper::GetAssociationStatusForName(jsonValue.GetString("AssociationStatus"));

    m_associationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelatedRequirements"))
  {
    Aws::Utils::Array<JsonView> relatedRequirementsJsonList = jsonValue.GetArray("RelatedRequirements");
    for(unsigned relatedRequirementsIndex = 0; relatedRequirementsIndex < relatedRequirementsJsonList.GetLength(); ++relatedRequirementsIndex)
    {
      m_relatedRequirements.push_back(relatedRequirementsJsonList[relatedRequirementsIndex].AsString());
    }
    m_relatedRequirementsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedReason"))
  {
    m_updatedReason = jsonValue.GetString("UpdatedReason");

    m_updatedReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardsControlTitle"))
  {
    m_standardsControlTitle = jsonValue.GetString("StandardsControlTitle");

    m_standardsControlTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardsControlDescription"))
  {
    m_standardsControlDescription = jsonValue.GetString("StandardsControlDescription");

    m_standardsControlDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardsControlArns"))
  {
    Aws::Utils::Array<JsonView> standardsControlArnsJsonList = jsonValue.GetArray("StandardsControlArns");
    for(unsigned standardsControlArnsIndex = 0; standardsControlArnsIndex < standardsControlArnsJsonList.GetLength(); ++standardsControlArnsIndex)
    {
      m_standardsControlArns.push_back(standardsControlArnsJsonList[standardsControlArnsIndex].AsString());
    }
    m_standardsControlArnsHasBeenSet = true;
  }

  return *this;
}

JsonValue StandardsControlAssociationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_standardsArnHasBeenSet)
  {
   payload.WithString("StandardsArn", m_standardsArn);

  }

  if(m_securityControlIdHasBeenSet)
  {
   payload.WithString("SecurityControlId", m_securityControlId);

  }

  if(m_securityControlArnHasBeenSet)
  {
   payload.WithString("SecurityControlArn", m_securityControlArn);

  }

  if(m_associationStatusHasBeenSet)
  {
   payload.WithString("AssociationStatus", AssociationStatusMapper::GetNameForAssociationStatus(m_associationStatus));
  }

  if(m_relatedRequirementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> relatedRequirementsJsonList(m_relatedRequirements.size());
   for(unsigned relatedRequirementsIndex = 0; relatedRequirementsIndex < relatedRequirementsJsonList.GetLength(); ++relatedRequirementsIndex)
   {
     relatedRequirementsJsonList[relatedRequirementsIndex].AsString(m_relatedRequirements[relatedRequirementsIndex]);
   }
   payload.WithArray("RelatedRequirements", std::move(relatedRequirementsJsonList));

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedReasonHasBeenSet)
  {
   payload.WithString("UpdatedReason", m_updatedReason);

  }

  if(m_standardsControlTitleHasBeenSet)
  {
   payload.WithString("StandardsControlTitle", m_standardsControlTitle);

  }

  if(m_standardsControlDescriptionHasBeenSet)
  {
   payload.WithString("StandardsControlDescription", m_standardsControlDescription);

  }

  if(m_standardsControlArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> standardsControlArnsJsonList(m_standardsControlArns.size());
   for(unsigned standardsControlArnsIndex = 0; standardsControlArnsIndex < standardsControlArnsJsonList.GetLength(); ++standardsControlArnsIndex)
   {
     standardsControlArnsJsonList[standardsControlArnsIndex].AsString(m_standardsControlArns[standardsControlArnsIndex]);
   }
   payload.WithArray("StandardsControlArns", std::move(standardsControlArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
