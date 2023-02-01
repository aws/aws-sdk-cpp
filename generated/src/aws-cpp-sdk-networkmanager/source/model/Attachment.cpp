/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/Attachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

Attachment::Attachment() : 
    m_coreNetworkIdHasBeenSet(false),
    m_coreNetworkArnHasBeenSet(false),
    m_attachmentIdHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_attachmentType(AttachmentType::NOT_SET),
    m_attachmentTypeHasBeenSet(false),
    m_state(AttachmentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_edgeLocationHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_attachmentPolicyRuleNumber(0),
    m_attachmentPolicyRuleNumberHasBeenSet(false),
    m_segmentNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_proposedSegmentChangeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

Attachment::Attachment(JsonView jsonValue) : 
    m_coreNetworkIdHasBeenSet(false),
    m_coreNetworkArnHasBeenSet(false),
    m_attachmentIdHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_attachmentType(AttachmentType::NOT_SET),
    m_attachmentTypeHasBeenSet(false),
    m_state(AttachmentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_edgeLocationHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_attachmentPolicyRuleNumber(0),
    m_attachmentPolicyRuleNumberHasBeenSet(false),
    m_segmentNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_proposedSegmentChangeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

Attachment& Attachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CoreNetworkId"))
  {
    m_coreNetworkId = jsonValue.GetString("CoreNetworkId");

    m_coreNetworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoreNetworkArn"))
  {
    m_coreNetworkArn = jsonValue.GetString("CoreNetworkArn");

    m_coreNetworkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachmentId"))
  {
    m_attachmentId = jsonValue.GetString("AttachmentId");

    m_attachmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

    m_ownerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachmentType"))
  {
    m_attachmentType = AttachmentTypeMapper::GetAttachmentTypeForName(jsonValue.GetString("AttachmentType"));

    m_attachmentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = AttachmentStateMapper::GetAttachmentStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeLocation"))
  {
    m_edgeLocation = jsonValue.GetString("EdgeLocation");

    m_edgeLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachmentPolicyRuleNumber"))
  {
    m_attachmentPolicyRuleNumber = jsonValue.GetInteger("AttachmentPolicyRuleNumber");

    m_attachmentPolicyRuleNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentName"))
  {
    m_segmentName = jsonValue.GetString("SegmentName");

    m_segmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProposedSegmentChange"))
  {
    m_proposedSegmentChange = jsonValue.GetObject("ProposedSegmentChange");

    m_proposedSegmentChangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Attachment::Jsonize() const
{
  JsonValue payload;

  if(m_coreNetworkIdHasBeenSet)
  {
   payload.WithString("CoreNetworkId", m_coreNetworkId);

  }

  if(m_coreNetworkArnHasBeenSet)
  {
   payload.WithString("CoreNetworkArn", m_coreNetworkArn);

  }

  if(m_attachmentIdHasBeenSet)
  {
   payload.WithString("AttachmentId", m_attachmentId);

  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("OwnerAccountId", m_ownerAccountId);

  }

  if(m_attachmentTypeHasBeenSet)
  {
   payload.WithString("AttachmentType", AttachmentTypeMapper::GetNameForAttachmentType(m_attachmentType));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", AttachmentStateMapper::GetNameForAttachmentState(m_state));
  }

  if(m_edgeLocationHasBeenSet)
  {
   payload.WithString("EdgeLocation", m_edgeLocation);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_attachmentPolicyRuleNumberHasBeenSet)
  {
   payload.WithInteger("AttachmentPolicyRuleNumber", m_attachmentPolicyRuleNumber);

  }

  if(m_segmentNameHasBeenSet)
  {
   payload.WithString("SegmentName", m_segmentName);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_proposedSegmentChangeHasBeenSet)
  {
   payload.WithObject("ProposedSegmentChange", m_proposedSegmentChange.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
