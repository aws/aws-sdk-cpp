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
    AWS_OSIS_API GetPipelineBlueprintResult();
    AWS_OSIS_API GetPipelineBlueprintResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OSIS_API GetPipelineBlueprintResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested blueprint in YAML format.</p>
     */
    inline const PipelineBlueprint& GetBlueprint() const{ return m_blueprint; }

    /**
     * <p>The requested blueprint in YAML format.</p>
     */
    inline void SetBlueprint(const PipelineBlueprint& value) { m_blueprint = value; }

    /**
     * <p>The requested blueprint in YAML format.</p>
     */
    inline void SetBlueprint(PipelineBlueprint&& value) { m_blueprint = std::move(value); }

    /**
     * <p>The requested blueprint in YAML format.</p>
     */
    inline GetPipelineBlueprintResult& WithBlueprint(const PipelineBlueprint& value) { SetBlueprint(value); return *this;}

    /**
     * <p>The requested blueprint in YAML format.</p>
     */
    inline GetPipelineBlueprintResult& WithBlueprint(PipelineBlueprint&& value) { SetBlueprint(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPipelineBlueprintResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPipelineBlueprintResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPipelineBlueprintResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PipelineBlueprint m_blueprint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
