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
   * <p>The response parameters for UpdateDataLakeDataset.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetDataLakeDatasetResponse">AWS
   * API Reference</a></p>
   */
  class GetDataLakeDatasetResult
  {
  public:
    AWS_SUPPLYCHAIN_API GetDataLakeDatasetResult();
    AWS_SUPPLYCHAIN_API GetDataLakeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API GetDataLakeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The fetched dataset details.</p>
     */
    inline const DataLakeDataset& GetDataset() const{ return m_dataset; }
    inline void SetDataset(const DataLakeDataset& value) { m_dataset = value; }
    inline void SetDataset(DataLakeDataset&& value) { m_dataset = std::move(value); }
    inline GetDataLakeDatasetResult& WithDataset(const DataLakeDataset& value) { SetDataset(value); return *this;}
    inline GetDataLakeDatasetResult& WithDataset(DataLakeDataset&& value) { SetDataset(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataLakeDatasetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataLakeDatasetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataLakeDatasetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DataLakeDataset m_dataset;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
