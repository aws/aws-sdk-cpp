/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ResourceDrift.h>
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
  class ListAppAssessmentResourceDriftsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppAssessmentResourceDriftsResult() = default;
    AWS_RESILIENCEHUB_API ListAppAssessmentResourceDriftsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppAssessmentResourceDriftsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppAssessmentResourceDriftsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates all the resource drifts detected for an assessed entity.</p>
     */
    inline const Aws::Vector<ResourceDrift>& GetResourceDrifts() const { return m_resourceDrifts; }
    template<typename ResourceDriftsT = Aws::Vector<ResourceDrift>>
    void SetResourceDrifts(ResourceDriftsT&& value) { m_resourceDriftsHasBeenSet = true; m_resourceDrifts = std::forward<ResourceDriftsT>(value); }
    template<typename ResourceDriftsT = Aws::Vector<ResourceDrift>>
    ListAppAssessmentResourceDriftsResult& WithResourceDrifts(ResourceDriftsT&& value) { SetResourceDrifts(std::forward<ResourceDriftsT>(value)); return *this;}
    template<typename ResourceDriftsT = ResourceDrift>
    ListAppAssessmentResourceDriftsResult& AddResourceDrifts(ResourceDriftsT&& value) { m_resourceDriftsHasBeenSet = true; m_resourceDrifts.emplace_back(std::forward<ResourceDriftsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppAssessmentResourceDriftsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ResourceDrift> m_resourceDrifts;
    bool m_resourceDriftsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
