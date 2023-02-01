/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/FileSystemAssociationInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

FileSystemAssociationInfo::FileSystemAssociationInfo() : 
    m_fileSystemAssociationARNHasBeenSet(false),
    m_locationARNHasBeenSet(false),
    m_fileSystemAssociationStatusHasBeenSet(false),
    m_auditDestinationARNHasBeenSet(false),
    m_gatewayARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_cacheAttributesHasBeenSet(false),
    m_endpointNetworkConfigurationHasBeenSet(false),
    m_fileSystemAssociationStatusDetailsHasBeenSet(false)
{
}

FileSystemAssociationInfo::FileSystemAssociationInfo(JsonView jsonValue) : 
    m_fileSystemAssociationARNHasBeenSet(false),
    m_locationARNHasBeenSet(false),
    m_fileSystemAssociationStatusHasBeenSet(false),
    m_auditDestinationARNHasBeenSet(false),
    m_gatewayARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_cacheAttributesHasBeenSet(false),
    m_endpointNetworkConfigurationHasBeenSet(false),
    m_fileSystemAssociationStatusDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

FileSystemAssociationInfo& FileSystemAssociationInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileSystemAssociationARN"))
  {
    m_fileSystemAssociationARN = jsonValue.GetString("FileSystemAssociationARN");

    m_fileSystemAssociationARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocationARN"))
  {
    m_locationARN = jsonValue.GetString("LocationARN");

    m_locationARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemAssociationStatus"))
  {
    m_fileSystemAssociationStatus = jsonValue.GetString("FileSystemAssociationStatus");

    m_fileSystemAssociationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuditDestinationARN"))
  {
    m_auditDestinationARN = jsonValue.GetString("AuditDestinationARN");

    m_auditDestinationARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

    m_gatewayARNHasBeenSet = true;
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

  if(jsonValue.ValueExists("CacheAttributes"))
  {
    m_cacheAttributes = jsonValue.GetObject("CacheAttributes");

    m_cacheAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointNetworkConfiguration"))
  {
    m_endpointNetworkConfiguration = jsonValue.GetObject("EndpointNetworkConfiguration");

    m_endpointNetworkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemAssociationStatusDetails"))
  {
    Aws::Utils::Array<JsonView> fileSystemAssociationStatusDetailsJsonList = jsonValue.GetArray("FileSystemAssociationStatusDetails");
    for(unsigned fileSystemAssociationStatusDetailsIndex = 0; fileSystemAssociationStatusDetailsIndex < fileSystemAssociationStatusDetailsJsonList.GetLength(); ++fileSystemAssociationStatusDetailsIndex)
    {
      m_fileSystemAssociationStatusDetails.push_back(fileSystemAssociationStatusDetailsJsonList[fileSystemAssociationStatusDetailsIndex].AsObject());
    }
    m_fileSystemAssociationStatusDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSystemAssociationInfo::Jsonize() const
{
  JsonValue payload;

  if(m_fileSystemAssociationARNHasBeenSet)
  {
   payload.WithString("FileSystemAssociationARN", m_fileSystemAssociationARN);

  }

  if(m_locationARNHasBeenSet)
  {
   payload.WithString("LocationARN", m_locationARN);

  }

  if(m_fileSystemAssociationStatusHasBeenSet)
  {
   payload.WithString("FileSystemAssociationStatus", m_fileSystemAssociationStatus);

  }

  if(m_auditDestinationARNHasBeenSet)
  {
   payload.WithString("AuditDestinationARN", m_auditDestinationARN);

  }

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

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

  if(m_cacheAttributesHasBeenSet)
  {
   payload.WithObject("CacheAttributes", m_cacheAttributes.Jsonize());

  }

  if(m_endpointNetworkConfigurationHasBeenSet)
  {
   payload.WithObject("EndpointNetworkConfiguration", m_endpointNetworkConfiguration.Jsonize());

  }

  if(m_fileSystemAssociationStatusDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileSystemAssociationStatusDetailsJsonList(m_fileSystemAssociationStatusDetails.size());
   for(unsigned fileSystemAssociationStatusDetailsIndex = 0; fileSystemAssociationStatusDetailsIndex < fileSystemAssociationStatusDetailsJsonList.GetLength(); ++fileSystemAssociationStatusDetailsIndex)
   {
     fileSystemAssociationStatusDetailsJsonList[fileSystemAssociationStatusDetailsIndex].AsObject(m_fileSystemAssociationStatusDetails[fileSystemAssociationStatusDetailsIndex].Jsonize());
   }
   payload.WithArray("FileSystemAssociationStatusDetails", std::move(fileSystemAssociationStatusDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
