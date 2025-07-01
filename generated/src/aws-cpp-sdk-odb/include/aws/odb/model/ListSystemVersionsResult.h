/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/SystemVersionSummary.h>
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
namespace odb
{
namespace Model
{
  class ListSystemVersionsResult
  {
  public:
    AWS_ODB_API ListSystemVersionsResult() = default;
    AWS_ODB_API ListSystemVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API ListSystemVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSystemVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of system versions.</p>
     */
    inline const Aws::Vector<SystemVersionSummary>& GetSystemVersions() const { return m_systemVersions; }
    template<typename SystemVersionsT = Aws::Vector<SystemVersionSummary>>
    void SetSystemVersions(SystemVersionsT&& value) { m_systemVersionsHasBeenSet = true; m_systemVersions = std::forward<SystemVersionsT>(value); }
    template<typename SystemVersionsT = Aws::Vector<SystemVersionSummary>>
    ListSystemVersionsResult& WithSystemVersions(SystemVersionsT&& value) { SetSystemVersions(std::forward<SystemVersionsT>(value)); return *this;}
    template<typename SystemVersionsT = SystemVersionSummary>
    ListSystemVersionsResult& AddSystemVersions(SystemVersionsT&& value) { m_systemVersionsHasBeenSet = true; m_systemVersions.emplace_back(std::forward<SystemVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSystemVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SystemVersionSummary> m_systemVersions;
    bool m_systemVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
