/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/CreateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateClusterRequest::CreateClusterRequest() : 
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_onDeviceServiceConfigurationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_addressIdHasBeenSet(false),
    m_kmsKeyARNHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_snowballType(SnowballType::NOT_SET),
    m_snowballTypeHasBeenSet(false),
    m_shippingOption(ShippingOption::NOT_SET),
    m_shippingOptionHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_forwardingAddressIdHasBeenSet(false),
    m_taxDocumentsHasBeenSet(false),
    m_remoteManagement(RemoteManagement::NOT_SET),
    m_remoteManagementHasBeenSet(false),
    m_initialClusterSize(0),
    m_initialClusterSizeHasBeenSet(false),
    m_forceCreateJobs(false),
    m_forceCreateJobsHasBeenSet(false),
    m_longTermPricingIdsHasBeenSet(false),
    m_snowballCapacityPreference(SnowballCapacity::NOT_SET),
    m_snowballCapacityPreferenceHasBeenSet(false)
{
}

Aws::String CreateClusterRequest::SerializePayload() const
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

  if(m_snowballTypeHasBeenSet)
  {
   payload.WithString("SnowballType", SnowballTypeMapper::GetNameForSnowballType(m_snowballType));
  }

  if(m_shippingOptionHasBeenSet)
  {
   payload.WithString("ShippingOption", ShippingOptionMapper::GetNameForShippingOption(m_shippingOption));
  }

  if(m_notificationHasBeenSet)
  {
   payload.WithObject("Notification", m_notification.Jsonize());

  }

  if(m_forwardingAddressIdHasBeenSet)
  {
   payload.WithString("ForwardingAddressId", m_forwardingAddressId);

  }

  if(m_taxDocumentsHasBeenSet)
  {
   payload.WithObject("TaxDocuments", m_taxDocuments.Jsonize());

  }

  if(m_remoteManagementHasBeenSet)
  {
   payload.WithString("RemoteManagement", RemoteManagementMapper::GetNameForRemoteManagement(m_remoteManagement));
  }

  if(m_initialClusterSizeHasBeenSet)
  {
   payload.WithInteger("InitialClusterSize", m_initialClusterSize);

  }

  if(m_forceCreateJobsHasBeenSet)
  {
   payload.WithBool("ForceCreateJobs", m_forceCreateJobs);

  }

  if(m_longTermPricingIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> longTermPricingIdsJsonList(m_longTermPricingIds.size());
   for(unsigned longTermPricingIdsIndex = 0; longTermPricingIdsIndex < longTermPricingIdsJsonList.GetLength(); ++longTermPricingIdsIndex)
   {
     longTermPricingIdsJsonList[longTermPricingIdsIndex].AsString(m_longTermPricingIds[longTermPricingIdsIndex]);
   }
   payload.WithArray("LongTermPricingIds", std::move(longTermPricingIdsJsonList));

  }

  if(m_snowballCapacityPreferenceHasBeenSet)
  {
   payload.WithString("SnowballCapacityPreference", SnowballCapacityMapper::GetNameForSnowballCapacity(m_snowballCapacityPreference));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSIESnowballJobManagementService.CreateCluster"));
  return headers;

}




