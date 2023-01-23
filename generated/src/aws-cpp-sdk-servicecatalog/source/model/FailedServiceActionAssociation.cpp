/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/FailedServiceActionAssociation.h>
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

FailedServiceActionAssociation::FailedServiceActionAssociation() : 
    m_serviceActionIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_errorCode(ServiceActionAssociationErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

FailedServiceActionAssociation::FailedServiceActionAssociation(JsonView jsonValue) : 
    m_serviceActionIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_errorCode(ServiceActionAssociationErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

FailedServiceActionAssociation& FailedServiceActionAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceActionId"))
  {
    m_serviceActionId = jsonValue.GetString("ServiceActionId");

    m_serviceActionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");

    m_productIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningArtifactId"))
  {
    m_provisioningArtifactId = jsonValue.GetString("ProvisioningArtifactId");

    m_provisioningArtifactIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = ServiceActionAssociationErrorCodeMapper::GetServiceActionAssociationErrorCodeForName(jsonValue.GetString("ErrorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue FailedServiceActionAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_serviceActionIdHasBeenSet)
  {
   payload.WithString("ServiceActionId", m_serviceActionId);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_provisioningArtifactIdHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactId", m_provisioningArtifactId);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", ServiceActionAssociationErrorCodeMapper::GetNameForServiceActionAssociationErrorCode(m_errorCode));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
