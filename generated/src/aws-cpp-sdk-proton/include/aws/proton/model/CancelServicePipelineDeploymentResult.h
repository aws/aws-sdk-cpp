﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ServicePipeline.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>The service pipeline detail data that's returned by Proton.</p>
     */
    inline const ServicePipeline& GetPipeline() const{ return m_pipeline; }
    inline void SetPipeline(const ServicePipeline& value) { m_pipeline = value; }
    inline void SetPipeline(ServicePipeline&& value) { m_pipeline = std::move(value); }
    inline CancelServicePipelineDeploymentResult& WithPipeline(const ServicePipeline& value) { SetPipeline(value); return *this;}
    inline CancelServicePipelineDeploymentResult& WithPipeline(ServicePipeline&& value) { SetPipeline(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelServicePipelineDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelServicePipelineDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelServicePipelineDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ServicePipeline m_pipeline;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
