/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/model/PipelineBlueprint.h>
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
  class GetPipelineBlueprintResult
  {
  public:
    AWS_OSIS_API GetPipelineBlueprintResult() = default;
    AWS_OSIS_API GetPipelineBlueprintResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OSIS_API GetPipelineBlueprintResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested blueprint in YAML format.</p>
     */
    inline const PipelineBlueprint& GetBlueprint() const { return m_blueprint; }
    template<typename BlueprintT = PipelineBlueprint>
    void SetBlueprint(BlueprintT&& value) { m_blueprintHasBeenSet = true; m_blueprint = std::forward<BlueprintT>(value); }
    template<typename BlueprintT = PipelineBlueprint>
    GetPipelineBlueprintResult& WithBlueprint(BlueprintT&& value) { SetBlueprint(std::forward<BlueprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the blueprint.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    GetPipelineBlueprintResult& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPipelineBlueprintResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PipelineBlueprint m_blueprint;
    bool m_blueprintHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
