/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/BatchUpdateRecommendationStatusFailedEntry.h>
#include <aws/resiliencehub/model/BatchUpdateRecommendationStatusSuccessfulEntry.h>
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
namespace ResilienceHub
{
namespace Model
{
  class BatchUpdateRecommendationStatusResult
  {
  public:
    AWS_RESILIENCEHUB_API BatchUpdateRecommendationStatusResult() = default;
    AWS_RESILIENCEHUB_API BatchUpdateRecommendationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API BatchUpdateRecommendationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    BatchUpdateRecommendationStatusResult& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of items with error details about each item, which could not be
     * included or excluded.</p>
     */
    inline const Aws::Vector<BatchUpdateRecommendationStatusFailedEntry>& GetFailedEntries() const { return m_failedEntries; }
    template<typename FailedEntriesT = Aws::Vector<BatchUpdateRecommendationStatusFailedEntry>>
    void SetFailedEntries(FailedEntriesT&& value) { m_failedEntriesHasBeenSet = true; m_failedEntries = std::forward<FailedEntriesT>(value); }
    template<typename FailedEntriesT = Aws::Vector<BatchUpdateRecommendationStatusFailedEntry>>
    BatchUpdateRecommendationStatusResult& WithFailedEntries(FailedEntriesT&& value) { SetFailedEntries(std::forward<FailedEntriesT>(value)); return *this;}
    template<typename FailedEntriesT = BatchUpdateRecommendationStatusFailedEntry>
    BatchUpdateRecommendationStatusResult& AddFailedEntries(FailedEntriesT&& value) { m_failedEntriesHasBeenSet = true; m_failedEntries.emplace_back(std::forward<FailedEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of items that were included or excluded.</p>
     */
    inline const Aws::Vector<BatchUpdateRecommendationStatusSuccessfulEntry>& GetSuccessfulEntries() const { return m_successfulEntries; }
    template<typename SuccessfulEntriesT = Aws::Vector<BatchUpdateRecommendationStatusSuccessfulEntry>>
    void SetSuccessfulEntries(SuccessfulEntriesT&& value) { m_successfulEntriesHasBeenSet = true; m_successfulEntries = std::forward<SuccessfulEntriesT>(value); }
    template<typename SuccessfulEntriesT = Aws::Vector<BatchUpdateRecommendationStatusSuccessfulEntry>>
    BatchUpdateRecommendationStatusResult& WithSuccessfulEntries(SuccessfulEntriesT&& value) { SetSuccessfulEntries(std::forward<SuccessfulEntriesT>(value)); return *this;}
    template<typename SuccessfulEntriesT = BatchUpdateRecommendationStatusSuccessfulEntry>
    BatchUpdateRecommendationStatusResult& AddSuccessfulEntries(SuccessfulEntriesT&& value) { m_successfulEntriesHasBeenSet = true; m_successfulEntries.emplace_back(std::forward<SuccessfulEntriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchUpdateRecommendationStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::Vector<BatchUpdateRecommendationStatusFailedEntry> m_failedEntries;
    bool m_failedEntriesHasBeenSet = false;

    Aws::Vector<BatchUpdateRecommendationStatusSuccessfulEntry> m_successfulEntries;
    bool m_successfulEntriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
