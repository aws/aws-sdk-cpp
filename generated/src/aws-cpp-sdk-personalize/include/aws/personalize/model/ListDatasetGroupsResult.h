/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/DatasetGroupSummary.h>
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
namespace Personalize
{
namespace Model
{
  class ListDatasetGroupsResult
  {
  public:
    AWS_PERSONALIZE_API ListDatasetGroupsResult() = default;
    AWS_PERSONALIZE_API ListDatasetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListDatasetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of your dataset groups.</p>
     */
    inline const Aws::Vector<DatasetGroupSummary>& GetDatasetGroups() const { return m_datasetGroups; }
    template<typename DatasetGroupsT = Aws::Vector<DatasetGroupSummary>>
    void SetDatasetGroups(DatasetGroupsT&& value) { m_datasetGroupsHasBeenSet = true; m_datasetGroups = std::forward<DatasetGroupsT>(value); }
    template<typename DatasetGroupsT = Aws::Vector<DatasetGroupSummary>>
    ListDatasetGroupsResult& WithDatasetGroups(DatasetGroupsT&& value) { SetDatasetGroups(std::forward<DatasetGroupsT>(value)); return *this;}
    template<typename DatasetGroupsT = DatasetGroupSummary>
    ListDatasetGroupsResult& AddDatasetGroups(DatasetGroupsT&& value) { m_datasetGroupsHasBeenSet = true; m_datasetGroups.emplace_back(std::forward<DatasetGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of dataset groups (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatasetGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDatasetGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DatasetGroupSummary> m_datasetGroups;
    bool m_datasetGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
