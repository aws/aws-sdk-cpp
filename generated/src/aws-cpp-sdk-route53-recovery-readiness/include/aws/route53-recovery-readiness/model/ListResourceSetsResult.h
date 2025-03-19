/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/ResourceSetOutput.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class ListResourceSetsResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ListResourceSetsResult() = default;
    AWS_ROUTE53RECOVERYREADINESS_API ListResourceSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API ListResourceSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resource sets associated with the account.</p>
     */
    inline const Aws::Vector<ResourceSetOutput>& GetResourceSets() const { return m_resourceSets; }
    template<typename ResourceSetsT = Aws::Vector<ResourceSetOutput>>
    void SetResourceSets(ResourceSetsT&& value) { m_resourceSetsHasBeenSet = true; m_resourceSets = std::forward<ResourceSetsT>(value); }
    template<typename ResourceSetsT = Aws::Vector<ResourceSetOutput>>
    ListResourceSetsResult& WithResourceSets(ResourceSetsT&& value) { SetResourceSets(std::forward<ResourceSetsT>(value)); return *this;}
    template<typename ResourceSetsT = ResourceSetOutput>
    ListResourceSetsResult& AddResourceSets(ResourceSetsT&& value) { m_resourceSetsHasBeenSet = true; m_resourceSets.emplace_back(std::forward<ResourceSetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ResourceSetOutput> m_resourceSets;
    bool m_resourceSetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
