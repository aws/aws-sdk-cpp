/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/CreateVolumeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkspacesInstances::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateVolumeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("Encrypted", m_encrypted);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("Iops", m_iops);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_sizeInGBHasBeenSet)
  {
   payload.WithInteger("SizeInGB", m_sizeInGB);

  }

  if(m_snapshotIdHasBeenSet)
  {
   payload.WithString("SnapshotId", m_snapshotId);

  }

  if(m_tagSpecificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagSpecificationsJsonList(m_tagSpecifications.size());
   for(unsigned tagSpecificationsIndex = 0; tagSpecificationsIndex < tagSpecificationsJsonList.GetLength(); ++tagSpecificationsIndex)
   {
     tagSpecificationsJsonList[tagSpecificationsIndex].AsObject(m_tagSpecifications[tagSpecificationsIndex].Jsonize());
   }
   payload.WithArray("TagSpecifications", std::move(tagSpecificationsJsonList));

  }

  if(m_throughputHasBeenSet)
  {
   payload.WithInteger("Throughput", m_throughput);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("VolumeType", VolumeTypeEnumMapper::GetNameForVolumeTypeEnum(m_volumeType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateVolumeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EUCMIFrontendAPIService.CreateVolume"));
  return headers;

}




