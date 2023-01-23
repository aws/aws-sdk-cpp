/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/DomainConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

DomainConfiguration::DomainConfiguration() : 
    m_workflowExecutionRetentionPeriodInDaysHasBeenSet(false)
{
}

DomainConfiguration::DomainConfiguration(JsonView jsonValue) : 
    m_workflowExecutionRetentionPeriodInDaysHasBeenSet(false)
{
  *this = jsonValue;
}

DomainConfiguration& DomainConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workflowExecutionRetentionPeriodInDays"))
  {
    m_workflowExecutionRetentionPeriodInDays = jsonValue.GetString("workflowExecutionRetentionPeriodInDays");

    m_workflowExecutionRetentionPeriodInDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_workflowExecutionRetentionPeriodInDaysHasBeenSet)
  {
   payload.WithString("workflowExecutionRetentionPeriodInDays", m_workflowExecutionRetentionPeriodInDays);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
