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
    AWS_OSIS_API UpdatePipelineResult() = default;
    AWS_OSIS_API UpdatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OSIS_API UpdatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Container for information about the updated pipeline.</p>
     */
    inline const Pipeline& GetPipeline() const { return m_pipeline; }
    template<typename PipelineT = Pipeline>
    void SetPipeline(PipelineT&& value) { m_pipelineHasBeenSet = true; m_pipeline = std::forward<PipelineT>(value); }
    template<typename PipelineT = Pipeline>
    UpdatePipelineResult& WithPipeline(PipelineT&& value) { SetPipeline(std::forward<PipelineT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdatePipelineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Pipeline m_pipeline;
    bool m_pipelineHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
