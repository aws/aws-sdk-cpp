﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/TaskStartFailedEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

TaskStartFailedEventDetails::TaskStartFailedEventDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

TaskStartFailedEventDetails& TaskStartFailedEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");
    m_resourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cause"))
  {
    m_cause = jsonValue.GetString("cause");
    m_causeHasBeenSet = true;
  }
  return *this;
}

JsonValue TaskStartFailedEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", m_cause);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
