﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
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
namespace SWF
{
namespace Model
{
  /**
   * <p>Status information about an activity task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTaskStatus">AWS
   * API Reference</a></p>
   */
  class RecordActivityTaskHeartbeatResult
  {
  public:
    AWS_SWF_API RecordActivityTaskHeartbeatResult() = default;
    AWS_SWF_API RecordActivityTaskHeartbeatResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SWF_API RecordActivityTaskHeartbeatResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Set to <code>true</code> if cancellation of the task is requested.</p>
     */
    inline bool GetCancelRequested() const { return m_cancelRequested; }
    inline void SetCancelRequested(bool value) { m_cancelRequestedHasBeenSet = true; m_cancelRequested = value; }
    inline RecordActivityTaskHeartbeatResult& WithCancelRequested(bool value) { SetCancelRequested(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RecordActivityTaskHeartbeatResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_cancelRequested{false};
    bool m_cancelRequestedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
