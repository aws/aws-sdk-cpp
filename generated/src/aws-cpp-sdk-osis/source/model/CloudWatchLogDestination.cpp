/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/CloudWatchLogDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OSIS
{
namespace Model
{

CloudWatchLogDestination::CloudWatchLogDestination() : 
    m_logGroupHasBeenSet(false)
{
}

CloudWatchLogDestination::CloudWatchLogDestination(JsonView jsonValue) : 
    m_logGroupHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLogDestination& CloudWatchLogDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogGroup"))
  {
    m_logGroup = jsonValue.GetString("LogGroup");

    m_logGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLogDestination::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupHasBeenSet)
  {
   payload.WithString("LogGroup", m_logGroup);

  }

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
