/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/CertificateValidity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

CertificateValidity::CertificateValidity() : 
    m_renewalPeriodHasBeenSet(false),
    m_validityPeriodHasBeenSet(false)
{
}

CertificateValidity::CertificateValidity(JsonView jsonValue) : 
    m_renewalPeriodHasBeenSet(false),
    m_validityPeriodHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateValidity& CertificateValidity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RenewalPeriod"))
  {
    m_renewalPeriod = jsonValue.GetObject("RenewalPeriod");

    m_renewalPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidityPeriod"))
  {
    m_validityPeriod = jsonValue.GetObject("ValidityPeriod");

    m_validityPeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateValidity::Jsonize() const
{
  JsonValue payload;

  if(m_renewalPeriodHasBeenSet)
  {
   payload.WithObject("RenewalPeriod", m_renewalPeriod.Jsonize());

  }

  if(m_validityPeriodHasBeenSet)
  {
   payload.WithObject("ValidityPeriod", m_validityPeriod.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
