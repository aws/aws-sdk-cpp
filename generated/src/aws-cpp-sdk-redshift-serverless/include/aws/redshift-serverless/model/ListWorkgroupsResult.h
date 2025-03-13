/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/Workgroup.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class ListWorkgroupsResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListWorkgroupsResult() = default;
    AWS_REDSHIFTSERVERLESS_API ListWorkgroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListWorkgroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. To
     * retrieve the next page, make the call again using the returned token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkgroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned array of workgroups.</p>
     */
    inline const Aws::Vector<Workgroup>& GetWorkgroups() const { return m_workgroups; }
    template<typename WorkgroupsT = Aws::Vector<Workgroup>>
    void SetWorkgroups(WorkgroupsT&& value) { m_workgroupsHasBeenSet = true; m_workgroups = std::forward<WorkgroupsT>(value); }
    template<typename WorkgroupsT = Aws::Vector<Workgroup>>
    ListWorkgroupsResult& WithWorkgroups(WorkgroupsT&& value) { SetWorkgroups(std::forward<WorkgroupsT>(value)); return *this;}
    template<typename WorkgroupsT = Workgroup>
    ListWorkgroupsResult& AddWorkgroups(WorkgroupsT&& value) { m_workgroupsHasBeenSet = true; m_workgroups.emplace_back(std::forward<WorkgroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkgroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Workgroup> m_workgroups;
    bool m_workgroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
