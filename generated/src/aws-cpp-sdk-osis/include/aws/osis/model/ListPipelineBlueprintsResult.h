/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/osis/model/PipelineBlueprintSummary.h>
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
  class ListPipelineBlueprintsResult
  {
  public:
    AWS_OSIS_API ListPipelineBlueprintsResult();
    AWS_OSIS_API ListPipelineBlueprintsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OSIS_API ListPipelineBlueprintsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of available blueprints for Data Prepper.</p>
     */
    inline const Aws::Vector<PipelineBlueprintSummary>& GetBlueprints() const{ return m_blueprints; }

    /**
     * <p>A list of available blueprints for Data Prepper.</p>
     */
    inline void SetBlueprints(const Aws::Vector<PipelineBlueprintSummary>& value) { m_blueprints = value; }

    /**
     * <p>A list of available blueprints for Data Prepper.</p>
     */
    inline void SetBlueprints(Aws::Vector<PipelineBlueprintSummary>&& value) { m_blueprints = std::move(value); }

    /**
     * <p>A list of available blueprints for Data Prepper.</p>
     */
    inline ListPipelineBlueprintsResult& WithBlueprints(const Aws::Vector<PipelineBlueprintSummary>& value) { SetBlueprints(value); return *this;}

    /**
     * <p>A list of available blueprints for Data Prepper.</p>
     */
    inline ListPipelineBlueprintsResult& WithBlueprints(Aws::Vector<PipelineBlueprintSummary>&& value) { SetBlueprints(std::move(value)); return *this;}

    /**
     * <p>A list of available blueprints for Data Prepper.</p>
     */
    inline ListPipelineBlueprintsResult& AddBlueprints(const PipelineBlueprintSummary& value) { m_blueprints.push_back(value); return *this; }

    /**
     * <p>A list of available blueprints for Data Prepper.</p>
     */
    inline ListPipelineBlueprintsResult& AddBlueprints(PipelineBlueprintSummary&& value) { m_blueprints.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPipelineBlueprintsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPipelineBlueprintsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPipelineBlueprintsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PipelineBlueprintSummary> m_blueprints;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
