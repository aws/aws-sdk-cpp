/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSetRefreshProperties.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeDataSetRefreshPropertiesResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeDataSetRefreshPropertiesResult() = default;
    AWS_QUICKSIGHT_API DescribeDataSetRefreshPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDataSetRefreshPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDataSetRefreshPropertiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeDataSetRefreshPropertiesResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset refresh properties.</p>
     */
    inline const DataSetRefreshProperties& GetDataSetRefreshProperties() const { return m_dataSetRefreshProperties; }
    template<typename DataSetRefreshPropertiesT = DataSetRefreshProperties>
    void SetDataSetRefreshProperties(DataSetRefreshPropertiesT&& value) { m_dataSetRefreshPropertiesHasBeenSet = true; m_dataSetRefreshProperties = std::forward<DataSetRefreshPropertiesT>(value); }
    template<typename DataSetRefreshPropertiesT = DataSetRefreshProperties>
    DescribeDataSetRefreshPropertiesResult& WithDataSetRefreshProperties(DataSetRefreshPropertiesT&& value) { SetDataSetRefreshProperties(std::forward<DataSetRefreshPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    DataSetRefreshProperties m_dataSetRefreshProperties;
    bool m_dataSetRefreshPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
