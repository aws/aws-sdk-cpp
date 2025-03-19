/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/FailedGroupingRecommendationEntry.h>
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
  class RejectResourceGroupingRecommendationsResult
  {
  public:
    AWS_RESILIENCEHUB_API RejectResourceGroupingRecommendationsResult() = default;
    AWS_RESILIENCEHUB_API RejectResourceGroupingRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API RejectResourceGroupingRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    RejectResourceGroupingRecommendationsResult& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of resource grouping recommendations that failed to get excluded in your
     * application.</p>
     */
    inline const Aws::Vector<FailedGroupingRecommendationEntry>& GetFailedEntries() const { return m_failedEntries; }
    template<typename FailedEntriesT = Aws::Vector<FailedGroupingRecommendationEntry>>
    void SetFailedEntries(FailedEntriesT&& value) { m_failedEntriesHasBeenSet = true; m_failedEntries = std::forward<FailedEntriesT>(value); }
    template<typename FailedEntriesT = Aws::Vector<FailedGroupingRecommendationEntry>>
    RejectResourceGroupingRecommendationsResult& WithFailedEntries(FailedEntriesT&& value) { SetFailedEntries(std::forward<FailedEntriesT>(value)); return *this;}
    template<typename FailedEntriesT = FailedGroupingRecommendationEntry>
    RejectResourceGroupingRecommendationsResult& AddFailedEntries(FailedEntriesT&& value) { m_failedEntriesHasBeenSet = true; m_failedEntries.emplace_back(std::forward<FailedEntriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RejectResourceGroupingRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::Vector<FailedGroupingRecommendationEntry> m_failedEntries;
    bool m_failedEntriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
