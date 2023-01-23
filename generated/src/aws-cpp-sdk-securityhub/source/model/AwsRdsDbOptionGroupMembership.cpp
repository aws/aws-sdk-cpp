/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbOptionGroupMembership.h>
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

AwsRdsDbOptionGroupMembership::AwsRdsDbOptionGroupMembership() : 
    m_optionGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsRdsDbOptionGroupMembership::AwsRdsDbOptionGroupMembership(JsonView jsonValue) : 
    m_optionGroupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbOptionGroupMembership& AwsRdsDbOptionGroupMembership::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OptionGroupName"))
  {
    m_optionGroupName = jsonValue.GetString("OptionGroupName");

    m_optionGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbOptionGroupMembership::Jsonize() const
{
  JsonValue payload;

  if(m_optionGroupNameHasBeenSet)
  {
   payload.WithString("OptionGroupName", m_optionGroupName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
