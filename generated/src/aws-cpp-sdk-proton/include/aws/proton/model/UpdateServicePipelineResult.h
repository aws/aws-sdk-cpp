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
  class UpdateServicePipelineResult
  {
  public:
    AWS_PROTON_API UpdateServicePipelineResult();
    AWS_PROTON_API UpdateServicePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API UpdateServicePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pipeline details that are returned by Proton.</p>
     */
    inline const ServicePipeline& GetPipeline() const{ return m_pipeline; }

    /**
     * <p>The pipeline details that are returned by Proton.</p>
     */
    inline void SetPipeline(const ServicePipeline& value) { m_pipeline = value; }

    /**
     * <p>The pipeline details that are returned by Proton.</p>
     */
    inline void SetPipeline(ServicePipeline&& value) { m_pipeline = std::move(value); }

    /**
     * <p>The pipeline details that are returned by Proton.</p>
     */
    inline UpdateServicePipelineResult& WithPipeline(const ServicePipeline& value) { SetPipeline(value); return *this;}

    /**
     * <p>The pipeline details that are returned by Proton.</p>
     */
    inline UpdateServicePipelineResult& WithPipeline(ServicePipeline&& value) { SetPipeline(std::move(value)); return *this;}

  private:

    ServicePipeline m_pipeline;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
