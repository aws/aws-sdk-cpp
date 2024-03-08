/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/RenewalTermConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AgreementService
{
namespace Model
{

RenewalTermConfiguration::RenewalTermConfiguration() : 
    m_enableAutoRenew(false),
    m_enableAutoRenewHasBeenSet(false)
{
}

RenewalTermConfiguration::RenewalTermConfiguration(JsonView jsonValue) : 
    m_enableAutoRenew(false),
    m_enableAutoRenewHasBeenSet(false)
{
  *this = jsonValue;
}

RenewalTermConfiguration& RenewalTermConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enableAutoRenew"))
  {
    m_enableAutoRenew = jsonValue.GetBool("enableAutoRenew");

    m_enableAutoRenewHasBeenSet = true;
  }

  return *this;
}

JsonValue RenewalTermConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enableAutoRenewHasBeenSet)
  {
   payload.WithBool("enableAutoRenew", m_enableAutoRenew);

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
