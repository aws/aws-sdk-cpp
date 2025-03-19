/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/DataAccessor.h>
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
namespace QBusiness
{
namespace Model
{
  class ListDataAccessorsResult
  {
  public:
    AWS_QBUSINESS_API ListDataAccessorsResult() = default;
    AWS_QBUSINESS_API ListDataAccessorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListDataAccessorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of data accessors.</p>
     */
    inline const Aws::Vector<DataAccessor>& GetDataAccessors() const { return m_dataAccessors; }
    template<typename DataAccessorsT = Aws::Vector<DataAccessor>>
    void SetDataAccessors(DataAccessorsT&& value) { m_dataAccessorsHasBeenSet = true; m_dataAccessors = std::forward<DataAccessorsT>(value); }
    template<typename DataAccessorsT = Aws::Vector<DataAccessor>>
    ListDataAccessorsResult& WithDataAccessors(DataAccessorsT&& value) { SetDataAccessors(std::forward<DataAccessorsT>(value)); return *this;}
    template<typename DataAccessorsT = DataAccessor>
    ListDataAccessorsResult& AddDataAccessors(DataAccessorsT&& value) { m_dataAccessorsHasBeenSet = true; m_dataAccessors.emplace_back(std::forward<DataAccessorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next set of results, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataAccessorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataAccessorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataAccessor> m_dataAccessors;
    bool m_dataAccessorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
