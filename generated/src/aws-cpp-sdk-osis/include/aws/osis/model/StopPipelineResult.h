/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/model/Pipeline.h>
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
namespace OSIS
{
namespace Model
{
  class StopPipelineResult
  {
  public:
    AWS_OSIS_API StopPipelineResult();
    AWS_OSIS_API StopPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OSIS_API StopPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Pipeline& GetPipeline() const{ return m_pipeline; }

    
    inline void SetPipeline(const Pipeline& value) { m_pipeline = value; }

    
    inline void SetPipeline(Pipeline&& value) { m_pipeline = std::move(value); }

    
    inline StopPipelineResult& WithPipeline(const Pipeline& value) { SetPipeline(value); return *this;}

    
    inline StopPipelineResult& WithPipeline(Pipeline&& value) { SetPipeline(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StopPipelineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StopPipelineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StopPipelineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Pipeline m_pipeline;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
