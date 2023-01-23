/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EndpointConfigSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

EndpointConfigSummary::EndpointConfigSummary() : 
    m_endpointConfigNameHasBeenSet(false),
    m_endpointConfigArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

EndpointConfigSummary::EndpointConfigSummary(JsonView jsonValue) : 
    m_endpointConfigNameHasBeenSet(false),
    m_endpointConfigArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointConfigSummary& EndpointConfigSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointConfigName"))
  {
    m_endpointConfigName = jsonValue.GetString("EndpointConfigName");

    m_endpointConfigNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointConfigArn"))
  {
    m_endpointConfigArn = jsonValue.GetString("EndpointConfigArn");

    m_endpointConfigArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointConfigSummary::Jsonize() const
{
  JsonValue payload;

  if(m_endpointConfigNameHasBeenSet)
  {
   payload.WithString("EndpointConfigName", m_endpointConfigName);

  }

  if(m_endpointConfigArnHasBeenSet)
  {
   payload.WithString("EndpointConfigArn", m_endpointConfigArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
