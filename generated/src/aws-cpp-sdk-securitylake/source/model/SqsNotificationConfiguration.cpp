/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/SqsNotificationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

SqsNotificationConfiguration::SqsNotificationConfiguration()
{
}

SqsNotificationConfiguration::SqsNotificationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SqsNotificationConfiguration& SqsNotificationConfiguration::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue SqsNotificationConfiguration::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
