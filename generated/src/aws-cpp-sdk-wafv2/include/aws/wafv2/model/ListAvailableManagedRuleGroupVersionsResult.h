/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/ManagedRuleGroupVersion.h>
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
namespace WAFV2
{
namespace Model
{
  class ListAvailableManagedRuleGroupVersionsResult
  {
  public:
    AWS_WAFV2_API ListAvailableManagedRuleGroupVersionsResult() = default;
    AWS_WAFV2_API ListAvailableManagedRuleGroupVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListAvailableManagedRuleGroupVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListAvailableManagedRuleGroupVersionsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The versions that are currently available for the specified managed rule
     * group. If you specified a <code>Limit</code> in your request, this might not be
     * the full list. </p>
     */
    inline const Aws::Vector<ManagedRuleGroupVersion>& GetVersions() const { return m_versions; }
    template<typename VersionsT = Aws::Vector<ManagedRuleGroupVersion>>
    void SetVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions = std::forward<VersionsT>(value); }
    template<typename VersionsT = Aws::Vector<ManagedRuleGroupVersion>>
    ListAvailableManagedRuleGroupVersionsResult& WithVersions(VersionsT&& value) { SetVersions(std::forward<VersionsT>(value)); return *this;}
    template<typename VersionsT = ManagedRuleGroupVersion>
    ListAvailableManagedRuleGroupVersionsResult& AddVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions.emplace_back(std::forward<VersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the version that's currently set as the default. </p>
     */
    inline const Aws::String& GetCurrentDefaultVersion() const { return m_currentDefaultVersion; }
    template<typename CurrentDefaultVersionT = Aws::String>
    void SetCurrentDefaultVersion(CurrentDefaultVersionT&& value) { m_currentDefaultVersionHasBeenSet = true; m_currentDefaultVersion = std::forward<CurrentDefaultVersionT>(value); }
    template<typename CurrentDefaultVersionT = Aws::String>
    ListAvailableManagedRuleGroupVersionsResult& WithCurrentDefaultVersion(CurrentDefaultVersionT&& value) { SetCurrentDefaultVersion(std::forward<CurrentDefaultVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAvailableManagedRuleGroupVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<ManagedRuleGroupVersion> m_versions;
    bool m_versionsHasBeenSet = false;

    Aws::String m_currentDefaultVersion;
    bool m_currentDefaultVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
