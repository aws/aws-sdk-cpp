/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAmazonMqBrokerUsersDetails.h>
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

AwsAmazonMqBrokerUsersDetails::AwsAmazonMqBrokerUsersDetails() : 
    m_pendingChangeHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

AwsAmazonMqBrokerUsersDetails::AwsAmazonMqBrokerUsersDetails(JsonView jsonValue) : 
    m_pendingChangeHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAmazonMqBrokerUsersDetails& AwsAmazonMqBrokerUsersDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PendingChange"))
  {
    m_pendingChange = jsonValue.GetString("PendingChange");

    m_pendingChangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAmazonMqBrokerUsersDetails::Jsonize() const
{
  JsonValue payload;

  if(m_pendingChangeHasBeenSet)
  {
   payload.WithString("PendingChange", m_pendingChange);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
