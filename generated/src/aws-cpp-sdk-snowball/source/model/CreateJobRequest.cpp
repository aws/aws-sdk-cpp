/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/snowball/model/CreateJobRequest.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateJobRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_jobTypeHasBeenSet) {
    mapSize++;
  }
  if (m_resourcesHasBeenSet) {
    mapSize++;
  }
  if (m_onDeviceServiceConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_addressIdHasBeenSet) {
    mapSize++;
  }
  if (m_kmsKeyARNHasBeenSet) {
    mapSize++;
  }
  if (m_roleARNHasBeenSet) {
    mapSize++;
  }
  if (m_snowballCapacityPreferenceHasBeenSet) {
    mapSize++;
  }
  if (m_shippingOptionHasBeenSet) {
    mapSize++;
  }
  if (m_notificationHasBeenSet) {
    mapSize++;
  }
  if (m_clusterIdHasBeenSet) {
    mapSize++;
  }
  if (m_snowballTypeHasBeenSet) {
    mapSize++;
  }
  if (m_forwardingAddressIdHasBeenSet) {
    mapSize++;
  }
  if (m_taxDocumentsHasBeenSet) {
    mapSize++;
  }
  if (m_deviceConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_remoteManagementHasBeenSet) {
    mapSize++;
  }
  if (m_longTermPricingIdHasBeenSet) {
    mapSize++;
  }
  if (m_impactLevelHasBeenSet) {
    mapSize++;
  }
  if (m_pickupDetailsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_jobTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("JobType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(JobTypeMapper::GetNameForJobType(m_jobType).c_str()));
  }

  if (m_resourcesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Resources"));
    m_resources.CborEncode(encoder);
  }

  if (m_onDeviceServiceConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OnDeviceServiceConfiguration"));
    m_onDeviceServiceConfiguration.CborEncode(encoder);
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_addressIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AddressId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_addressId.c_str()));
  }

  if (m_kmsKeyARNHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KmsKeyARN"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_kmsKeyARN.c_str()));
  }

  if (m_roleARNHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RoleARN"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_roleARN.c_str()));
  }

  if (m_snowballCapacityPreferenceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnowballCapacityPreference"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(SnowballCapacityMapper::GetNameForSnowballCapacity(m_snowballCapacityPreference).c_str()));
  }

  if (m_shippingOptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShippingOption"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ShippingOptionMapper::GetNameForShippingOption(m_shippingOption).c_str()));
  }

  if (m_notificationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Notification"));
    m_notification.CborEncode(encoder);
  }

  if (m_clusterIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClusterId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clusterId.c_str()));
  }

  if (m_snowballTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnowballType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SnowballTypeMapper::GetNameForSnowballType(m_snowballType).c_str()));
  }

  if (m_forwardingAddressIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ForwardingAddressId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_forwardingAddressId.c_str()));
  }

  if (m_taxDocumentsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TaxDocuments"));
    m_taxDocuments.CborEncode(encoder);
  }

  if (m_deviceConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeviceConfiguration"));
    m_deviceConfiguration.CborEncode(encoder);
  }

  if (m_remoteManagementHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RemoteManagement"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RemoteManagementMapper::GetNameForRemoteManagement(m_remoteManagement).c_str()));
  }

  if (m_longTermPricingIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LongTermPricingId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_longTermPricingId.c_str()));
  }

  if (m_impactLevelHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImpactLevel"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ImpactLevelMapper::GetNameForImpactLevel(m_impactLevel).c_str()));
  }

  if (m_pickupDetailsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PickupDetails"));
    m_pickupDetails.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
