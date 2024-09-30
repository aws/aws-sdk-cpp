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
    AWS_SUPPLYCHAIN_API ListDataLakeDatasetsResult();
    AWS_SUPPLYCHAIN_API ListDataLakeDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API ListDataLakeDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of fetched dataset details.</p>
     */
    inline const Aws::Vector<DataLakeDataset>& GetDatasets() const{ return m_datasets; }
    inline void SetDatasets(const Aws::Vector<DataLakeDataset>& value) { m_datasets = value; }
    inline void SetDatasets(Aws::Vector<DataLakeDataset>&& value) { m_datasets = std::move(value); }
    inline ListDataLakeDatasetsResult& WithDatasets(const Aws::Vector<DataLakeDataset>& value) { SetDatasets(value); return *this;}
    inline ListDataLakeDatasetsResult& WithDatasets(Aws::Vector<DataLakeDataset>&& value) { SetDatasets(std::move(value)); return *this;}
    inline ListDataLakeDatasetsResult& AddDatasets(const DataLakeDataset& value) { m_datasets.push_back(value); return *this; }
    inline ListDataLakeDatasetsResult& AddDatasets(DataLakeDataset&& value) { m_datasets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to fetch next page of datasets.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataLakeDatasetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataLakeDatasetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataLakeDatasetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataLakeDatasetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataLakeDatasetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataLakeDatasetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DataLakeDataset> m_datasets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
