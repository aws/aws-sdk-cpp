/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/CreateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("JobType", JobTypeMapper::GetNameForJobType(m_jobType));
  }

  if(m_resourcesHasBeenSet)
  {
   payload.WithObject("Resources", m_resources.Jsonize());

  }

  if(m_onDeviceServiceConfigurationHasBeenSet)
  {
   payload.WithObject("OnDeviceServiceConfiguration", m_onDeviceServiceConfiguration.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_addressIdHasBeenSet)
  {
   payload.WithString("AddressId", m_addressId);

  }

  if(m_kmsKeyARNHasBeenSet)
  {
   payload.WithString("KmsKeyARN", m_kmsKeyARN);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_snowballCapacityPreferenceHasBeenSet)
  {
   payload.WithString("SnowballCapacityPreference", SnowballCapacityMapper::GetNameForSnowballCapacity(m_snowballCapacityPreference));
  }

  if(m_shippingOptionHasBeenSet)
  {
   payload.WithString("ShippingOption", ShippingOptionMapper::GetNameForShippingOption(m_shippingOption));
  }

  if(m_notificationHasBeenSet)
  {
   payload.WithObject("Notification", m_notification.Jsonize());

  }

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_snowballTypeHasBeenSet)
  {
   payload.WithString("SnowballType", SnowballTypeMapper::GetNameForSnowballType(m_snowballType));
  }

  if(m_forwardingAddressIdHasBeenSet)
  {
   payload.WithString("ForwardingAddressId", m_forwardingAddressId);

  }

  if(m_taxDocumentsHasBeenSet)
  {
   payload.WithObject("TaxDocuments", m_taxDocuments.Jsonize());

  }

  if(m_deviceConfigurationHasBeenSet)
  {
   payload.WithObject("DeviceConfiguration", m_deviceConfiguration.Jsonize());

  }

  if(m_remoteManagementHasBeenSet)
  {
   payload.WithString("RemoteManagement", RemoteManagementMapper::GetNameForRemoteManagement(m_remoteManagement));
  }

  if(m_longTermPricingIdHasBeenSet)
  {
   payload.WithString("LongTermPricingId", m_longTermPricingId);

  }

  if(m_impactLevelHasBeenSet)
  {
   payload.WithString("ImpactLevel", ImpactLevelMapper::GetNameForImpactLevel(m_impactLevel));
  }

  if(m_pickupDetailsHasBeenSet)
  {
   payload.WithObject("PickupDetails", m_pickupDetails.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIESnowballJobManagementService.CreateJob"));
  return headers;

}




