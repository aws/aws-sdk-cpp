/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/TaskSubmittedEventDetails.h>
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

TaskSubmittedEventDetails::TaskSubmittedEventDetails() : 
    m_resourceTypeHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_outputDetailsHasBeenSet(false)
{
}

TaskSubmittedEventDetails::TaskSubmittedEventDetails(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_outputDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

TaskSubmittedEventDetails& TaskSubmittedEventDetails::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetString("output");

    m_outputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputDetails"))
  {
    m_outputDetails = jsonValue.GetObject("outputDetails");

    m_outputDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskSubmittedEventDetails::Jsonize() const
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

  if(m_outputHasBeenSet)
  {
   payload.WithString("output", m_output);

  }

  if(m_outputDetailsHasBeenSet)
  {
   payload.WithObject("outputDetails", m_outputDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
