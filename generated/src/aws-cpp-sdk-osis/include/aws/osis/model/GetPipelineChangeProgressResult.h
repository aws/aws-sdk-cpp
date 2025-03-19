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
    AWS_OSIS_API GetPipelineChangeProgressResult() = default;
    AWS_OSIS_API GetPipelineChangeProgressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OSIS_API GetPipelineChangeProgressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of the change happening on the pipeline.</p>
     */
    inline const Aws::Vector<ChangeProgressStatus>& GetChangeProgressStatuses() const { return m_changeProgressStatuses; }
    template<typename ChangeProgressStatusesT = Aws::Vector<ChangeProgressStatus>>
    void SetChangeProgressStatuses(ChangeProgressStatusesT&& value) { m_changeProgressStatusesHasBeenSet = true; m_changeProgressStatuses = std::forward<ChangeProgressStatusesT>(value); }
    template<typename ChangeProgressStatusesT = Aws::Vector<ChangeProgressStatus>>
    GetPipelineChangeProgressResult& WithChangeProgressStatuses(ChangeProgressStatusesT&& value) { SetChangeProgressStatuses(std::forward<ChangeProgressStatusesT>(value)); return *this;}
    template<typename ChangeProgressStatusesT = ChangeProgressStatus>
    GetPipelineChangeProgressResult& AddChangeProgressStatuses(ChangeProgressStatusesT&& value) { m_changeProgressStatusesHasBeenSet = true; m_changeProgressStatuses.emplace_back(std::forward<ChangeProgressStatusesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPipelineChangeProgressResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ChangeProgressStatus> m_changeProgressStatuses;
    bool m_changeProgressStatusesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
