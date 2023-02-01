/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMakerGeospatial
{
namespace Model
{
  class StopEarthObservationJobResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API StopEarthObservationJobResult();
    AWS_SAGEMAKERGEOSPATIAL_API StopEarthObservationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API StopEarthObservationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
