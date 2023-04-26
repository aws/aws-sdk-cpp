/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/osis/model/ChangeProgressStatus.h>
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
  class GetPipelineChangeProgressResult
  {
  public:
    AWS_OSIS_API GetPipelineChangeProgressResult();
    AWS_OSIS_API GetPipelineChangeProgressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OSIS_API GetPipelineChangeProgressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status of the change happening on the pipeline.</p>
     */
    inline const Aws::Vector<ChangeProgressStatus>& GetChangeProgressStatuses() const{ return m_changeProgressStatuses; }

    /**
     * <p>The current status of the change happening on the pipeline.</p>
     */
    inline void SetChangeProgressStatuses(const Aws::Vector<ChangeProgressStatus>& value) { m_changeProgressStatuses = value; }

    /**
     * <p>The current status of the change happening on the pipeline.</p>
     */
    inline void SetChangeProgressStatuses(Aws::Vector<ChangeProgressStatus>&& value) { m_changeProgressStatuses = std::move(value); }

    /**
     * <p>The current status of the change happening on the pipeline.</p>
     */
    inline GetPipelineChangeProgressResult& WithChangeProgressStatuses(const Aws::Vector<ChangeProgressStatus>& value) { SetChangeProgressStatuses(value); return *this;}

    /**
     * <p>The current status of the change happening on the pipeline.</p>
     */
    inline GetPipelineChangeProgressResult& WithChangeProgressStatuses(Aws::Vector<ChangeProgressStatus>&& value) { SetChangeProgressStatuses(std::move(value)); return *this;}

    /**
     * <p>The current status of the change happening on the pipeline.</p>
     */
    inline GetPipelineChangeProgressResult& AddChangeProgressStatuses(const ChangeProgressStatus& value) { m_changeProgressStatuses.push_back(value); return *this; }

    /**
     * <p>The current status of the change happening on the pipeline.</p>
     */
    inline GetPipelineChangeProgressResult& AddChangeProgressStatuses(ChangeProgressStatus&& value) { m_changeProgressStatuses.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPipelineChangeProgressResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPipelineChangeProgressResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPipelineChangeProgressResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ChangeProgressStatus> m_changeProgressStatuses;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
