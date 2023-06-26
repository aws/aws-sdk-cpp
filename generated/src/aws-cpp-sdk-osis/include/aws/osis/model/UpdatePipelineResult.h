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
  class UpdatePipelineResult
  {
  public:
    AWS_OSIS_API UpdatePipelineResult();
    AWS_OSIS_API UpdatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OSIS_API UpdatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Container for information about the updated pipeline.</p>
     */
    inline const Pipeline& GetPipeline() const{ return m_pipeline; }

    /**
     * <p>Container for information about the updated pipeline.</p>
     */
    inline void SetPipeline(const Pipeline& value) { m_pipeline = value; }

    /**
     * <p>Container for information about the updated pipeline.</p>
     */
    inline void SetPipeline(Pipeline&& value) { m_pipeline = std::move(value); }

    /**
     * <p>Container for information about the updated pipeline.</p>
     */
    inline UpdatePipelineResult& WithPipeline(const Pipeline& value) { SetPipeline(value); return *this;}

    /**
     * <p>Container for information about the updated pipeline.</p>
     */
    inline UpdatePipelineResult& WithPipeline(Pipeline&& value) { SetPipeline(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdatePipelineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdatePipelineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdatePipelineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Pipeline m_pipeline;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
