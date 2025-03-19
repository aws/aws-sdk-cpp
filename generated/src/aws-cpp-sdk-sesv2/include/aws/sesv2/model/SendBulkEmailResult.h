/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/BulkEmailEntryResult.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>The following data is returned in JSON format by the service.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendBulkEmailResponse">AWS
   * API Reference</a></p>
   */
  class SendBulkEmailResult
  {
  public:
    AWS_SESV2_API SendBulkEmailResult() = default;
    AWS_SESV2_API SendBulkEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API SendBulkEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>One object per intended recipient. Check each response object and retry any
     * messages with a failure status.</p>
     */
    inline const Aws::Vector<BulkEmailEntryResult>& GetBulkEmailEntryResults() const { return m_bulkEmailEntryResults; }
    template<typename BulkEmailEntryResultsT = Aws::Vector<BulkEmailEntryResult>>
    void SetBulkEmailEntryResults(BulkEmailEntryResultsT&& value) { m_bulkEmailEntryResultsHasBeenSet = true; m_bulkEmailEntryResults = std::forward<BulkEmailEntryResultsT>(value); }
    template<typename BulkEmailEntryResultsT = Aws::Vector<BulkEmailEntryResult>>
    SendBulkEmailResult& WithBulkEmailEntryResults(BulkEmailEntryResultsT&& value) { SetBulkEmailEntryResults(std::forward<BulkEmailEntryResultsT>(value)); return *this;}
    template<typename BulkEmailEntryResultsT = BulkEmailEntryResult>
    SendBulkEmailResult& AddBulkEmailEntryResults(BulkEmailEntryResultsT&& value) { m_bulkEmailEntryResultsHasBeenSet = true; m_bulkEmailEntryResults.emplace_back(std::forward<BulkEmailEntryResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SendBulkEmailResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BulkEmailEntryResult> m_bulkEmailEntryResults;
    bool m_bulkEmailEntryResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
