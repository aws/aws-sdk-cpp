/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StandardsControlAssociationUpdate.h>
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

StandardsControlAssociationUpdate::StandardsControlAssociationUpdate() : 
    m_standardsArnHasBeenSet(false),
    m_securityControlIdHasBeenSet(false),
    m_associationStatus(AssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false),
    m_updatedReasonHasBeenSet(false)
{
}

StandardsControlAssociationUpdate::StandardsControlAssociationUpdate(JsonView jsonValue) : 
    m_standardsArnHasBeenSet(false),
    m_securityControlIdHasBeenSet(false),
    m_associationStatus(AssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false),
    m_updatedReasonHasBeenSet(false)
{
  *this = jsonValue;
}

StandardsControlAssociationUpdate& StandardsControlAssociationUpdate::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("AssociationStatus"))
  {
    m_associationStatus = AssociationStatusMapper::GetAssociationStatusForName(jsonValue.GetString("AssociationStatus"));

    m_associationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedReason"))
  {
    m_updatedReason = jsonValue.GetString("UpdatedReason");

    m_updatedReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue StandardsControlAssociationUpdate::Jsonize() const
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

  if(m_associationStatusHasBeenSet)
  {
   payload.WithString("AssociationStatus", AssociationStatusMapper::GetNameForAssociationStatus(m_associationStatus));
  }

  if(m_updatedReasonHasBeenSet)
  {
   payload.WithString("UpdatedReason", m_updatedReason);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
