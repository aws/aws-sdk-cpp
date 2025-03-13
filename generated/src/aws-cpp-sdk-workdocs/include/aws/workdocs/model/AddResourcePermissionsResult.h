/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/ShareResult.h>
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
namespace WorkDocs
{
namespace Model
{
  class AddResourcePermissionsResult
  {
  public:
    AWS_WORKDOCS_API AddResourcePermissionsResult() = default;
    AWS_WORKDOCS_API AddResourcePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API AddResourcePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The share results.</p>
     */
    inline const Aws::Vector<ShareResult>& GetShareResults() const { return m_shareResults; }
    template<typename ShareResultsT = Aws::Vector<ShareResult>>
    void SetShareResults(ShareResultsT&& value) { m_shareResultsHasBeenSet = true; m_shareResults = std::forward<ShareResultsT>(value); }
    template<typename ShareResultsT = Aws::Vector<ShareResult>>
    AddResourcePermissionsResult& WithShareResults(ShareResultsT&& value) { SetShareResults(std::forward<ShareResultsT>(value)); return *this;}
    template<typename ShareResultsT = ShareResult>
    AddResourcePermissionsResult& AddShareResults(ShareResultsT&& value) { m_shareResultsHasBeenSet = true; m_shareResults.emplace_back(std::forward<ShareResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddResourcePermissionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ShareResult> m_shareResults;
    bool m_shareResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
