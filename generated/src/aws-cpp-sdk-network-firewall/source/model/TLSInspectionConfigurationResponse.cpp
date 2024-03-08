/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/TLSInspectionConfigurationResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

TLSInspectionConfigurationResponse::TLSInspectionConfigurationResponse() : 
    m_tLSInspectionConfigurationArnHasBeenSet(false),
    m_tLSInspectionConfigurationNameHasBeenSet(false),
    m_tLSInspectionConfigurationIdHasBeenSet(false),
    m_tLSInspectionConfigurationStatus(ResourceStatus::NOT_SET),
    m_tLSInspectionConfigurationStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_numberOfAssociations(0),
    m_numberOfAssociationsHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_certificatesHasBeenSet(false),
    m_certificateAuthorityHasBeenSet(false)
{
}

TLSInspectionConfigurationResponse::TLSInspectionConfigurationResponse(JsonView jsonValue) : 
    m_tLSInspectionConfigurationArnHasBeenSet(false),
    m_tLSInspectionConfigurationNameHasBeenSet(false),
    m_tLSInspectionConfigurationIdHasBeenSet(false),
    m_tLSInspectionConfigurationStatus(ResourceStatus::NOT_SET),
    m_tLSInspectionConfigurationStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_numberOfAssociations(0),
    m_numberOfAssociationsHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_certificatesHasBeenSet(false),
    m_certificateAuthorityHasBeenSet(false)
{
  *this = jsonValue;
}

TLSInspectionConfigurationResponse& TLSInspectionConfigurationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TLSInspectionConfigurationArn"))
  {
    m_tLSInspectionConfigurationArn = jsonValue.GetString("TLSInspectionConfigurationArn");

    m_tLSInspectionConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TLSInspectionConfigurationName"))
  {
    m_tLSInspectionConfigurationName = jsonValue.GetString("TLSInspectionConfigurationName");

    m_tLSInspectionConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TLSInspectionConfigurationId"))
  {
    m_tLSInspectionConfigurationId = jsonValue.GetString("TLSInspectionConfigurationId");

    m_tLSInspectionConfigurationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TLSInspectionConfigurationStatus"))
  {
    m_tLSInspectionConfigurationStatus = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("TLSInspectionConfigurationStatus"));

    m_tLSInspectionConfigurationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
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

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfAssociations"))
  {
    m_numberOfAssociations = jsonValue.GetInteger("NumberOfAssociations");

    m_numberOfAssociationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Certificates"))
  {
    Aws::Utils::Array<JsonView> certificatesJsonList = jsonValue.GetArray("Certificates");
    for(unsigned certificatesIndex = 0; certificatesIndex < certificatesJsonList.GetLength(); ++certificatesIndex)
    {
      m_certificates.push_back(certificatesJsonList[certificatesIndex].AsObject());
    }
    m_certificatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateAuthority"))
  {
    m_certificateAuthority = jsonValue.GetObject("CertificateAuthority");

    m_certificateAuthorityHasBeenSet = true;
  }

  return *this;
}

JsonValue TLSInspectionConfigurationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_tLSInspectionConfigurationArnHasBeenSet)
  {
   payload.WithString("TLSInspectionConfigurationArn", m_tLSInspectionConfigurationArn);

  }

  if(m_tLSInspectionConfigurationNameHasBeenSet)
  {
   payload.WithString("TLSInspectionConfigurationName", m_tLSInspectionConfigurationName);

  }

  if(m_tLSInspectionConfigurationIdHasBeenSet)
  {
   payload.WithString("TLSInspectionConfigurationId", m_tLSInspectionConfigurationId);

  }

  if(m_tLSInspectionConfigurationStatusHasBeenSet)
  {
   payload.WithString("TLSInspectionConfigurationStatus", ResourceStatusMapper::GetNameForResourceStatus(m_tLSInspectionConfigurationStatus));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_numberOfAssociationsHasBeenSet)
  {
   payload.WithInteger("NumberOfAssociations", m_numberOfAssociations);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_certificatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> certificatesJsonList(m_certificates.size());
   for(unsigned certificatesIndex = 0; certificatesIndex < certificatesJsonList.GetLength(); ++certificatesIndex)
   {
     certificatesJsonList[certificatesIndex].AsObject(m_certificates[certificatesIndex].Jsonize());
   }
   payload.WithArray("Certificates", std::move(certificatesJsonList));

  }

  if(m_certificateAuthorityHasBeenSet)
  {
   payload.WithObject("CertificateAuthority", m_certificateAuthority.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
