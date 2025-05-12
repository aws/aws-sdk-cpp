/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/DataLakeDataset.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The response parameters for GetDataLakeDataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetDataLakeDatasetResponse">AWS
   * API Reference</a></p>
   */
  class GetDataLakeDatasetResult
  {
  public:
    AWS_SUPPLYCHAIN_API GetDataLakeDatasetResult() = default;
    AWS_SUPPLYCHAIN_API GetDataLakeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API GetDataLakeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The fetched dataset details.</p>
     */
    inline const DataLakeDataset& GetDataset() const { return m_dataset; }
    template<typename DatasetT = DataLakeDataset>
    void SetDataset(DatasetT&& value) { m_datasetHasBeenSet = true; m_dataset = std::forward<DatasetT>(value); }
    template<typename DatasetT = DataLakeDataset>
    GetDataLakeDatasetResult& WithDataset(DatasetT&& value) { SetDataset(std::forward<DatasetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataLakeDatasetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataLakeDataset m_dataset;
    bool m_datasetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
