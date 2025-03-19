/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataLakeDataset.h>
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
namespace SupplyChain
{
namespace Model
{
  /**
   * <p>The response parameters of ListDataLakeDatasets.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListDataLakeDatasetsResponse">AWS
   * API Reference</a></p>
   */
  class ListDataLakeDatasetsResult
  {
  public:
    AWS_SUPPLYCHAIN_API ListDataLakeDatasetsResult() = default;
    AWS_SUPPLYCHAIN_API ListDataLakeDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API ListDataLakeDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of fetched dataset details.</p>
     */
    inline const Aws::Vector<DataLakeDataset>& GetDatasets() const { return m_datasets; }
    template<typename DatasetsT = Aws::Vector<DataLakeDataset>>
    void SetDatasets(DatasetsT&& value) { m_datasetsHasBeenSet = true; m_datasets = std::forward<DatasetsT>(value); }
    template<typename DatasetsT = Aws::Vector<DataLakeDataset>>
    ListDataLakeDatasetsResult& WithDatasets(DatasetsT&& value) { SetDatasets(std::forward<DatasetsT>(value)); return *this;}
    template<typename DatasetsT = DataLakeDataset>
    ListDataLakeDatasetsResult& AddDatasets(DatasetsT&& value) { m_datasetsHasBeenSet = true; m_datasets.emplace_back(std::forward<DatasetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to fetch next page of datasets.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataLakeDatasetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataLakeDatasetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataLakeDataset> m_datasets;
    bool m_datasetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
