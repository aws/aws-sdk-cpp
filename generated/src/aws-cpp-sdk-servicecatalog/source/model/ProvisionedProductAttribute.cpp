/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProvisionedProductAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ProvisionedProductAttribute::ProvisionedProductAttribute() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_status(ProvisionedProductStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false),
    m_lastRecordIdHasBeenSet(false),
    m_lastProvisioningRecordIdHasBeenSet(false),
    m_lastSuccessfulProvisioningRecordIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_physicalIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_provisioningArtifactNameHasBeenSet(false),
    m_userArnHasBeenSet(false),
    m_userArnSessionHasBeenSet(false)
{
}

ProvisionedProductAttribute::ProvisionedProductAttribute(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_status(ProvisionedProductStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false),
    m_lastRecordIdHasBeenSet(false),
    m_lastProvisioningRecordIdHasBeenSet(false),
    m_lastSuccessfulProvisioningRecordIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_physicalIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_provisioningArtifactNameHasBeenSet(false),
    m_userArnHasBeenSet(false),
    m_userArnSessionHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionedProductAttribute& ProvisionedProductAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ProvisionedProductStatusMapper::GetProvisionedProductStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdempotencyToken"))
  {
    m_idempotencyToken = jsonValue.GetString("IdempotencyToken");

    m_idempotencyTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRecordId"))
  {
    m_lastRecordId = jsonValue.GetString("LastRecordId");

    m_lastRecordIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastProvisioningRecordId"))
  {
    m_lastProvisioningRecordId = jsonValue.GetString("LastProvisioningRecordId");

    m_lastProvisioningRecordIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulProvisioningRecordId"))
  {
    m_lastSuccessfulProvisioningRecordId = jsonValue.GetString("LastSuccessfulProvisioningRecordId");

    m_lastSuccessfulProvisioningRecordIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("PhysicalId"))
  {
    m_physicalId = jsonValue.GetString("PhysicalId");

    m_physicalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");

    m_productIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductName"))
  {
    m_productName = jsonValue.GetString("ProductName");

    m_productNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningArtifactId"))
  {
    m_provisioningArtifactId = jsonValue.GetString("ProvisioningArtifactId");

    m_provisioningArtifactIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningArtifactName"))
  {
    m_provisioningArtifactName = jsonValue.GetString("ProvisioningArtifactName");

    m_provisioningArtifactNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserArn"))
  {
    m_userArn = jsonValue.GetString("UserArn");

    m_userArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserArnSession"))
  {
    m_userArnSession = jsonValue.GetString("UserArnSession");

    m_userArnSessionHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionedProductAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ProvisionedProductStatusMapper::GetNameForProvisionedProductStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  if(m_lastRecordIdHasBeenSet)
  {
   payload.WithString("LastRecordId", m_lastRecordId);

  }

  if(m_lastProvisioningRecordIdHasBeenSet)
  {
   payload.WithString("LastProvisioningRecordId", m_lastProvisioningRecordId);

  }

  if(m_lastSuccessfulProvisioningRecordIdHasBeenSet)
  {
   payload.WithString("LastSuccessfulProvisioningRecordId", m_lastSuccessfulProvisioningRecordId);

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

  if(m_physicalIdHasBeenSet)
  {
   payload.WithString("PhysicalId", m_physicalId);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_productNameHasBeenSet)
  {
   payload.WithString("ProductName", m_productName);

  }

  if(m_provisioningArtifactIdHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactId", m_provisioningArtifactId);

  }

  if(m_provisioningArtifactNameHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactName", m_provisioningArtifactName);

  }

  if(m_userArnHasBeenSet)
  {
   payload.WithString("UserArn", m_userArn);

  }

  if(m_userArnSessionHasBeenSet)
  {
   payload.WithString("UserArnSession", m_userArnSession);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
