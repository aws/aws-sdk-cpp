/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentStartupParameters.h>
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

InferenceComponentStartupParameters::InferenceComponentStartupParameters() : 
    m_modelDataDownloadTimeoutInSeconds(0),
    m_modelDataDownloadTimeoutInSecondsHasBeenSet(false),
    m_containerStartupHealthCheckTimeoutInSeconds(0),
    m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet(false)
{
}

InferenceComponentStartupParameters::InferenceComponentStartupParameters(JsonView jsonValue) : 
    m_modelDataDownloadTimeoutInSeconds(0),
    m_modelDataDownloadTimeoutInSecondsHasBeenSet(false),
    m_containerStartupHealthCheckTimeoutInSeconds(0),
    m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceComponentStartupParameters& InferenceComponentStartupParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelDataDownloadTimeoutInSeconds"))
  {
    m_modelDataDownloadTimeoutInSeconds = jsonValue.GetInteger("ModelDataDownloadTimeoutInSeconds");

    m_modelDataDownloadTimeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerStartupHealthCheckTimeoutInSeconds"))
  {
    m_containerStartupHealthCheckTimeoutInSeconds = jsonValue.GetInteger("ContainerStartupHealthCheckTimeoutInSeconds");

    m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceComponentStartupParameters::Jsonize() const
{
  JsonValue payload;

  if(m_modelDataDownloadTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("ModelDataDownloadTimeoutInSeconds", m_modelDataDownloadTimeoutInSeconds);

  }

  if(m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("ContainerStartupHealthCheckTimeoutInSeconds", m_containerStartupHealthCheckTimeoutInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
