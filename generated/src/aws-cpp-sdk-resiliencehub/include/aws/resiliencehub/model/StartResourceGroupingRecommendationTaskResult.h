/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/ResourcesGroupingRecGenStatusType.h>
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
  class StartResourceGroupingRecommendationTaskResult
  {
  public:
    AWS_RESILIENCEHUB_API StartResourceGroupingRecommendationTaskResult();
    AWS_RESILIENCEHUB_API StartResourceGroupingRecommendationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API StartResourceGroupingRecommendationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline StartResourceGroupingRecommendationTaskResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline StartResourceGroupingRecommendationTaskResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline StartResourceGroupingRecommendationTaskResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error that occurred while executing a grouping recommendation task.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline StartResourceGroupingRecommendationTaskResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline StartResourceGroupingRecommendationTaskResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline StartResourceGroupingRecommendationTaskResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the grouping recommendation task.</p>
     */
    inline const Aws::String& GetGroupingId() const{ return m_groupingId; }
    inline void SetGroupingId(const Aws::String& value) { m_groupingId = value; }
    inline void SetGroupingId(Aws::String&& value) { m_groupingId = std::move(value); }
    inline void SetGroupingId(const char* value) { m_groupingId.assign(value); }
    inline StartResourceGroupingRecommendationTaskResult& WithGroupingId(const Aws::String& value) { SetGroupingId(value); return *this;}
    inline StartResourceGroupingRecommendationTaskResult& WithGroupingId(Aws::String&& value) { SetGroupingId(std::move(value)); return *this;}
    inline StartResourceGroupingRecommendationTaskResult& WithGroupingId(const char* value) { SetGroupingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the action.</p>
     */
    inline const ResourcesGroupingRecGenStatusType& GetStatus() const{ return m_status; }
    inline void SetStatus(const ResourcesGroupingRecGenStatusType& value) { m_status = value; }
    inline void SetStatus(ResourcesGroupingRecGenStatusType&& value) { m_status = std::move(value); }
    inline StartResourceGroupingRecommendationTaskResult& WithStatus(const ResourcesGroupingRecGenStatusType& value) { SetStatus(value); return *this;}
    inline StartResourceGroupingRecommendationTaskResult& WithStatus(ResourcesGroupingRecGenStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartResourceGroupingRecommendationTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartResourceGroupingRecommendationTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartResourceGroupingRecommendationTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appArn;

    Aws::String m_errorMessage;

    Aws::String m_groupingId;

    ResourcesGroupingRecGenStatusType m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
