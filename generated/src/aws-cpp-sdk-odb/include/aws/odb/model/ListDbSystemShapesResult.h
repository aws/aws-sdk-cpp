/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/DbSystemShapeSummary.h>
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
  class ListDbSystemShapesResult
  {
  public:
    AWS_ODB_API ListDbSystemShapesResult() = default;
    AWS_ODB_API ListDbSystemShapesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API ListDbSystemShapesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDbSystemShapesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of shapes and their properties.</p>
     */
    inline const Aws::Vector<DbSystemShapeSummary>& GetDbSystemShapes() const { return m_dbSystemShapes; }
    template<typename DbSystemShapesT = Aws::Vector<DbSystemShapeSummary>>
    void SetDbSystemShapes(DbSystemShapesT&& value) { m_dbSystemShapesHasBeenSet = true; m_dbSystemShapes = std::forward<DbSystemShapesT>(value); }
    template<typename DbSystemShapesT = Aws::Vector<DbSystemShapeSummary>>
    ListDbSystemShapesResult& WithDbSystemShapes(DbSystemShapesT&& value) { SetDbSystemShapes(std::forward<DbSystemShapesT>(value)); return *this;}
    template<typename DbSystemShapesT = DbSystemShapeSummary>
    ListDbSystemShapesResult& AddDbSystemShapes(DbSystemShapesT&& value) { m_dbSystemShapesHasBeenSet = true; m_dbSystemShapes.emplace_back(std::forward<DbSystemShapesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDbSystemShapesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<DbSystemShapeSummary> m_dbSystemShapes;
    bool m_dbSystemShapesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
