/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/Activity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

Activity::Activity() : 
    m_type(ActivityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_timeStampHasBeenSet(false),
    m_isIndirectActivity(false),
    m_isIndirectActivityHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_initiatorHasBeenSet(false),
    m_participantsHasBeenSet(false),
    m_resourceMetadataHasBeenSet(false),
    m_originalParentHasBeenSet(false),
    m_commentMetadataHasBeenSet(false)
{
}

Activity::Activity(JsonView jsonValue) : 
    m_type(ActivityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_timeStampHasBeenSet(false),
    m_isIndirectActivity(false),
    m_isIndirectActivityHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_initiatorHasBeenSet(false),
    m_participantsHasBeenSet(false),
    m_resourceMetadataHasBeenSet(false),
    m_originalParentHasBeenSet(false),
    m_commentMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

Activity& Activity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ActivityTypeMapper::GetActivityTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeStamp"))
  {
    m_timeStamp = jsonValue.GetDouble("TimeStamp");

    m_timeStampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsIndirectActivity"))
  {
    m_isIndirectActivity = jsonValue.GetBool("IsIndirectActivity");

    m_isIndirectActivityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationId"))
  {
    m_organizationId = jsonValue.GetString("OrganizationId");

    m_organizationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Initiator"))
  {
    m_initiator = jsonValue.GetObject("Initiator");

    m_initiatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Participants"))
  {
    m_participants = jsonValue.GetObject("Participants");

    m_participantsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceMetadata"))
  {
    m_resourceMetadata = jsonValue.GetObject("ResourceMetadata");

    m_resourceMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginalParent"))
  {
    m_originalParent = jsonValue.GetObject("OriginalParent");

    m_originalParentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CommentMetadata"))
  {
    m_commentMetadata = jsonValue.GetObject("CommentMetadata");

    m_commentMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue Activity::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ActivityTypeMapper::GetNameForActivityType(m_type));
  }

  if(m_timeStampHasBeenSet)
  {
   payload.WithDouble("TimeStamp", m_timeStamp.SecondsWithMSPrecision());
  }

  if(m_isIndirectActivityHasBeenSet)
  {
   payload.WithBool("IsIndirectActivity", m_isIndirectActivity);

  }

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_initiatorHasBeenSet)
  {
   payload.WithObject("Initiator", m_initiator.Jsonize());

  }

  if(m_participantsHasBeenSet)
  {
   payload.WithObject("Participants", m_participants.Jsonize());

  }

  if(m_resourceMetadataHasBeenSet)
  {
   payload.WithObject("ResourceMetadata", m_resourceMetadata.Jsonize());

  }

  if(m_originalParentHasBeenSet)
  {
   payload.WithObject("OriginalParent", m_originalParent.Jsonize());

  }

  if(m_commentMetadataHasBeenSet)
  {
   payload.WithObject("CommentMetadata", m_commentMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
