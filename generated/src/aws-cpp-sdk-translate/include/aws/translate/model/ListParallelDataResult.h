/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/ParallelDataProperties.h>
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
namespace Translate
{
namespace Model
{
  class ListParallelDataResult
  {
  public:
    AWS_TRANSLATE_API ListParallelDataResult() = default;
    AWS_TRANSLATE_API ListParallelDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API ListParallelDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties of the parallel data resources returned by this request.</p>
     */
    inline const Aws::Vector<ParallelDataProperties>& GetParallelDataPropertiesList() const { return m_parallelDataPropertiesList; }
    template<typename ParallelDataPropertiesListT = Aws::Vector<ParallelDataProperties>>
    void SetParallelDataPropertiesList(ParallelDataPropertiesListT&& value) { m_parallelDataPropertiesListHasBeenSet = true; m_parallelDataPropertiesList = std::forward<ParallelDataPropertiesListT>(value); }
    template<typename ParallelDataPropertiesListT = Aws::Vector<ParallelDataProperties>>
    ListParallelDataResult& WithParallelDataPropertiesList(ParallelDataPropertiesListT&& value) { SetParallelDataPropertiesList(std::forward<ParallelDataPropertiesListT>(value)); return *this;}
    template<typename ParallelDataPropertiesListT = ParallelDataProperties>
    ListParallelDataResult& AddParallelDataPropertiesList(ParallelDataPropertiesListT&& value) { m_parallelDataPropertiesListHasBeenSet = true; m_parallelDataPropertiesList.emplace_back(std::forward<ParallelDataPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListParallelDataResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListParallelDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ParallelDataProperties> m_parallelDataPropertiesList;
    bool m_parallelDataPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
