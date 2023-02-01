/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCertificateManagerCertificateRenewalSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCertificateManagerCertificateRenewalSummary::AwsCertificateManagerCertificateRenewalSummary() : 
    m_domainValidationOptionsHasBeenSet(false),
    m_renewalStatusHasBeenSet(false),
    m_renewalStatusReasonHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

AwsCertificateManagerCertificateRenewalSummary::AwsCertificateManagerCertificateRenewalSummary(JsonView jsonValue) : 
    m_domainValidationOptionsHasBeenSet(false),
    m_renewalStatusHasBeenSet(false),
    m_renewalStatusReasonHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCertificateManagerCertificateRenewalSummary& AwsCertificateManagerCertificateRenewalSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainValidationOptions"))
  {
    Aws::Utils::Array<JsonView> domainValidationOptionsJsonList = jsonValue.GetArray("DomainValidationOptions");
    for(unsigned domainValidationOptionsIndex = 0; domainValidationOptionsIndex < domainValidationOptionsJsonList.GetLength(); ++domainValidationOptionsIndex)
    {
      m_domainValidationOptions.push_back(domainValidationOptionsJsonList[domainValidationOptionsIndex].AsObject());
    }
    m_domainValidationOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RenewalStatus"))
  {
    m_renewalStatus = jsonValue.GetString("RenewalStatus");

    m_renewalStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RenewalStatusReason"))
  {
    m_renewalStatusReason = jsonValue.GetString("RenewalStatusReason");

    m_renewalStatusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCertificateManagerCertificateRenewalSummary::Jsonize() const
{
  JsonValue payload;

  if(m_domainValidationOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainValidationOptionsJsonList(m_domainValidationOptions.size());
   for(unsigned domainValidationOptionsIndex = 0; domainValidationOptionsIndex < domainValidationOptionsJsonList.GetLength(); ++domainValidationOptionsIndex)
   {
     domainValidationOptionsJsonList[domainValidationOptionsIndex].AsObject(m_domainValidationOptions[domainValidationOptionsIndex].Jsonize());
   }
   payload.WithArray("DomainValidationOptions", std::move(domainValidationOptionsJsonList));

  }

  if(m_renewalStatusHasBeenSet)
  {
   payload.WithString("RenewalStatus", m_renewalStatus);

  }

  if(m_renewalStatusReasonHasBeenSet)
  {
   payload.WithString("RenewalStatusReason", m_renewalStatusReason);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("UpdatedAt", m_updatedAt);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
