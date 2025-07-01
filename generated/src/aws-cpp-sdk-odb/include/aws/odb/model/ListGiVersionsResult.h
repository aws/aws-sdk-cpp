/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/GiVersionSummary.h>
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
  class ListGiVersionsResult
  {
  public:
    AWS_ODB_API ListGiVersionsResult() = default;
    AWS_ODB_API ListGiVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API ListGiVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGiVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of GI versions and their properties.</p>
     */
    inline const Aws::Vector<GiVersionSummary>& GetGiVersions() const { return m_giVersions; }
    template<typename GiVersionsT = Aws::Vector<GiVersionSummary>>
    void SetGiVersions(GiVersionsT&& value) { m_giVersionsHasBeenSet = true; m_giVersions = std::forward<GiVersionsT>(value); }
    template<typename GiVersionsT = Aws::Vector<GiVersionSummary>>
    ListGiVersionsResult& WithGiVersions(GiVersionsT&& value) { SetGiVersions(std::forward<GiVersionsT>(value)); return *this;}
    template<typename GiVersionsT = GiVersionSummary>
    ListGiVersionsResult& AddGiVersions(GiVersionsT&& value) { m_giVersionsHasBeenSet = true; m_giVersions.emplace_back(std::forward<GiVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGiVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<GiVersionSummary> m_giVersions;
    bool m_giVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
