/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ScheduledAction.h>
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
namespace OpenSearchService
{
namespace Model
{
  class UpdateScheduledActionResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdateScheduledActionResult() = default;
    AWS_OPENSEARCHSERVICE_API UpdateScheduledActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API UpdateScheduledActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the rescheduled action.</p>
     */
    inline const ScheduledAction& GetScheduledAction() const { return m_scheduledAction; }
    template<typename ScheduledActionT = ScheduledAction>
    void SetScheduledAction(ScheduledActionT&& value) { m_scheduledActionHasBeenSet = true; m_scheduledAction = std::forward<ScheduledActionT>(value); }
    template<typename ScheduledActionT = ScheduledAction>
    UpdateScheduledActionResult& WithScheduledAction(ScheduledActionT&& value) { SetScheduledAction(std::forward<ScheduledActionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateScheduledActionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ScheduledAction m_scheduledAction;
    bool m_scheduledActionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
