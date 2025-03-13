/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/ScheduledActionResponse.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class CreateScheduledActionResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API CreateScheduledActionResult() = default;
    AWS_REDSHIFTSERVERLESS_API CreateScheduledActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API CreateScheduledActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The returned <code>ScheduledAction</code> object that describes the
     * properties of a scheduled action.</p>
     */
    inline const ScheduledActionResponse& GetScheduledAction() const { return m_scheduledAction; }
    template<typename ScheduledActionT = ScheduledActionResponse>
    void SetScheduledAction(ScheduledActionT&& value) { m_scheduledActionHasBeenSet = true; m_scheduledAction = std::forward<ScheduledActionT>(value); }
    template<typename ScheduledActionT = ScheduledActionResponse>
    CreateScheduledActionResult& WithScheduledAction(ScheduledActionT&& value) { SetScheduledAction(std::forward<ScheduledActionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateScheduledActionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ScheduledActionResponse m_scheduledAction;
    bool m_scheduledActionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
