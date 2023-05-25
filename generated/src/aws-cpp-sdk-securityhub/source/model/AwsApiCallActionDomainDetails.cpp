/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsApiCallActionDomainDetails.h>
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

AwsApiCallActionDomainDetails::AwsApiCallActionDomainDetails() : 
    m_domainHasBeenSet(false)
{
}

AwsApiCallActionDomainDetails::AwsApiCallActionDomainDetails(JsonView jsonValue) : 
    m_domainHasBeenSet(false)
{
  *this = jsonValue;
}

AwsApiCallActionDomainDetails& AwsApiCallActionDomainDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsApiCallActionDomainDetails::Jsonize() const
{
  JsonValue payload;

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
