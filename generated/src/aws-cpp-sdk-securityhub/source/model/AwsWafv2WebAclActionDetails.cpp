/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafv2WebAclActionDetails.h>
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

AwsWafv2WebAclActionDetails::AwsWafv2WebAclActionDetails() : 
    m_allowHasBeenSet(false),
    m_blockHasBeenSet(false)
{
}

AwsWafv2WebAclActionDetails::AwsWafv2WebAclActionDetails(JsonView jsonValue) : 
    m_allowHasBeenSet(false),
    m_blockHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafv2WebAclActionDetails& AwsWafv2WebAclActionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Allow"))
  {
    m_allow = jsonValue.GetObject("Allow");

    m_allowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Block"))
  {
    m_block = jsonValue.GetObject("Block");

    m_blockHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafv2WebAclActionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_allowHasBeenSet)
  {
   payload.WithObject("Allow", m_allow.Jsonize());

  }

  if(m_blockHasBeenSet)
  {
   payload.WithObject("Block", m_block.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
