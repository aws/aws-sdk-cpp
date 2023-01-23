/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ServicePipeline.h>
#include <utility>

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
namespace Proton
{
namespace Model
{
  class CancelServicePipelineDeploymentResult
  {
  public:
    AWS_PROTON_API CancelServicePipelineDeploymentResult();
    AWS_PROTON_API CancelServicePipelineDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API CancelServicePipelineDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The service pipeline detail data that's returned by Proton.</p>
     */
    inline const ServicePipeline& GetPipeline() const{ return m_pipeline; }

    /**
     * <p>The service pipeline detail data that's returned by Proton.</p>
     */
    inline void SetPipeline(const ServicePipeline& value) { m_pipeline = value; }

    /**
     * <p>The service pipeline detail data that's returned by Proton.</p>
     */
    inline void SetPipeline(ServicePipeline&& value) { m_pipeline = std::move(value); }

    /**
     * <p>The service pipeline detail data that's returned by Proton.</p>
     */
    inline CancelServicePipelineDeploymentResult& WithPipeline(const ServicePipeline& value) { SetPipeline(value); return *this;}

    /**
     * <p>The service pipeline detail data that's returned by Proton.</p>
     */
    inline CancelServicePipelineDeploymentResult& WithPipeline(ServicePipeline&& value) { SetPipeline(std::move(value)); return *this;}

  private:

    ServicePipeline m_pipeline;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
