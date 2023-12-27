/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ImageResourceAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

ImageResourceAssociation::ImageResourceAssociation() : 
    m_associatedResourceIdHasBeenSet(false),
    m_associatedResourceType(ImageAssociatedResourceType::NOT_SET),
    m_associatedResourceTypeHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_state(AssociationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false)
{
}

ImageResourceAssociation::ImageResourceAssociation(JsonView jsonValue) : 
    m_associatedResourceIdHasBeenSet(false),
    m_associatedResourceType(ImageAssociatedResourceType::NOT_SET),
    m_associatedResourceTypeHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_state(AssociationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false)
{
  *this = jsonValue;
}

ImageResourceAssociation& ImageResourceAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociatedResourceId"))
  {
    m_associatedResourceId = jsonValue.GetString("AssociatedResourceId");

    m_associatedResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociatedResourceType"))
  {
    m_associatedResourceType = ImageAssociatedResourceTypeMapper::GetImageAssociatedResourceTypeForName(jsonValue.GetString("AssociatedResourceType"));

    m_associatedResourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Created"))
  {
    m_created = jsonValue.GetDouble("Created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageId"))
  {
    m_imageId = jsonValue.GetString("ImageId");

    m_imageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = AssociationStateMapper::GetAssociationStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetObject("StateReason");

    m_stateReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageResourceAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_associatedResourceIdHasBeenSet)
  {
   payload.WithString("AssociatedResourceId", m_associatedResourceId);

  }

  if(m_associatedResourceTypeHasBeenSet)
  {
   payload.WithString("AssociatedResourceType", ImageAssociatedResourceTypeMapper::GetNameForImageAssociatedResourceType(m_associatedResourceType));
  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("Created", m_created.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("ImageId", m_imageId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", AssociationStateMapper::GetNameForAssociationState(m_state));
  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithObject("StateReason", m_stateReason.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
