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
    AWS_RESILIENCEHUB_API RejectResourceGroupingRecommendationsResult();
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
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline void SetAppArn(const Aws::String& value) { m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArn.assign(value); }
    inline RejectResourceGroupingRecommendationsResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline RejectResourceGroupingRecommendationsResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline RejectResourceGroupingRecommendationsResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of resource grouping recommendations that failed to get excluded in your
     * application.</p>
     */
    inline const Aws::Vector<FailedGroupingRecommendationEntry>& GetFailedEntries() const{ return m_failedEntries; }
    inline void SetFailedEntries(const Aws::Vector<FailedGroupingRecommendationEntry>& value) { m_failedEntries = value; }
    inline void SetFailedEntries(Aws::Vector<FailedGroupingRecommendationEntry>&& value) { m_failedEntries = std::move(value); }
    inline RejectResourceGroupingRecommendationsResult& WithFailedEntries(const Aws::Vector<FailedGroupingRecommendationEntry>& value) { SetFailedEntries(value); return *this;}
    inline RejectResourceGroupingRecommendationsResult& WithFailedEntries(Aws::Vector<FailedGroupingRecommendationEntry>&& value) { SetFailedEntries(std::move(value)); return *this;}
    inline RejectResourceGroupingRecommendationsResult& AddFailedEntries(const FailedGroupingRecommendationEntry& value) { m_failedEntries.push_back(value); return *this; }
    inline RejectResourceGroupingRecommendationsResult& AddFailedEntries(FailedGroupingRecommendationEntry&& value) { m_failedEntries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RejectResourceGroupingRecommendationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RejectResourceGroupingRecommendationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RejectResourceGroupingRecommendationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appArn;

    Aws::Vector<FailedGroupingRecommendationEntry> m_failedEntries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
