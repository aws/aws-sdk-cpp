/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsSecurityFindingIdentifier.h>
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

AwsSecurityFindingIdentifier::AwsSecurityFindingIdentifier() : 
    m_idHasBeenSet(false),
    m_productArnHasBeenSet(false)
{
}

AwsSecurityFindingIdentifier::AwsSecurityFindingIdentifier(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_productArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsSecurityFindingIdentifier& AwsSecurityFindingIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductArn"))
  {
    m_productArn = jsonValue.GetString("ProductArn");

    m_productArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsSecurityFindingIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_productArnHasBeenSet)
  {
   payload.WithString("ProductArn", m_productArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
