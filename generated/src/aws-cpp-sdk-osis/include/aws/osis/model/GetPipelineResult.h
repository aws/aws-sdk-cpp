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
  class GetPipelineResult
  {
  public:
    AWS_OSIS_API GetPipelineResult();
    AWS_OSIS_API GetPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OSIS_API GetPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Detailed information about the requested pipeline.</p>
     */
    inline const Pipeline& GetPipeline() const{ return m_pipeline; }

    /**
     * <p>Detailed information about the requested pipeline.</p>
     */
    inline void SetPipeline(const Pipeline& value) { m_pipeline = value; }

    /**
     * <p>Detailed information about the requested pipeline.</p>
     */
    inline void SetPipeline(Pipeline&& value) { m_pipeline = std::move(value); }

    /**
     * <p>Detailed information about the requested pipeline.</p>
     */
    inline GetPipelineResult& WithPipeline(const Pipeline& value) { SetPipeline(value); return *this;}

    /**
     * <p>Detailed information about the requested pipeline.</p>
     */
    inline GetPipelineResult& WithPipeline(Pipeline&& value) { SetPipeline(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPipelineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPipelineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPipelineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Pipeline m_pipeline;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
