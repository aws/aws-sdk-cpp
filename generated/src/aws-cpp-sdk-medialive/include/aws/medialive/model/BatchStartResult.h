/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/BatchFailedResultModel.h>
#include <aws/medialive/model/BatchSuccessfulResultModel.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for BatchStartResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStartResponse">AWS
   * API Reference</a></p>
   */
  class BatchStartResult
  {
  public:
    AWS_MEDIALIVE_API BatchStartResult() = default;
    AWS_MEDIALIVE_API BatchStartResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API BatchStartResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * List of failed operations
     */
    inline const Aws::Vector<BatchFailedResultModel>& GetFailed() const { return m_failed; }
    template<typename FailedT = Aws::Vector<BatchFailedResultModel>>
    void SetFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed = std::forward<FailedT>(value); }
    template<typename FailedT = Aws::Vector<BatchFailedResultModel>>
    BatchStartResult& WithFailed(FailedT&& value) { SetFailed(std::forward<FailedT>(value)); return *this;}
    template<typename FailedT = BatchFailedResultModel>
    BatchStartResult& AddFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed.emplace_back(std::forward<FailedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * List of successful operations
     */
    inline const Aws::Vector<BatchSuccessfulResultModel>& GetSuccessful() const { return m_successful; }
    template<typename SuccessfulT = Aws::Vector<BatchSuccessfulResultModel>>
    void SetSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful = std::forward<SuccessfulT>(value); }
    template<typename SuccessfulT = Aws::Vector<BatchSuccessfulResultModel>>
    BatchStartResult& WithSuccessful(SuccessfulT&& value) { SetSuccessful(std::forward<SuccessfulT>(value)); return *this;}
    template<typename SuccessfulT = BatchSuccessfulResultModel>
    BatchStartResult& AddSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful.emplace_back(std::forward<SuccessfulT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchStartResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchFailedResultModel> m_failed;
    bool m_failedHasBeenSet = false;

    Aws::Vector<BatchSuccessfulResultModel> m_successful;
    bool m_successfulHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
