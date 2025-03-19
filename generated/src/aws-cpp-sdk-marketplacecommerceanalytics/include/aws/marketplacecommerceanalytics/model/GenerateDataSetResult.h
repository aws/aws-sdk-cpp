/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
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
namespace MarketplaceCommerceAnalytics
{
namespace Model
{
  /**
   * Container for the result of the GenerateDataSet operation.<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplacecommerceanalytics-2015-07-01/GenerateDataSetResult">AWS
   * API Reference</a></p>
   */
  class GenerateDataSetResult
  {
  public:
    AWS_MARKETPLACECOMMERCEANALYTICS_API GenerateDataSetResult() = default;
    AWS_MARKETPLACECOMMERCEANALYTICS_API GenerateDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECOMMERCEANALYTICS_API GenerateDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A unique identifier representing a specific request to the GenerateDataSet
     * operation. This identifier can be used to correlate a request with notifications
     * from the SNS topic.
     */
    inline const Aws::String& GetDataSetRequestId() const { return m_dataSetRequestId; }
    template<typename DataSetRequestIdT = Aws::String>
    void SetDataSetRequestId(DataSetRequestIdT&& value) { m_dataSetRequestIdHasBeenSet = true; m_dataSetRequestId = std::forward<DataSetRequestIdT>(value); }
    template<typename DataSetRequestIdT = Aws::String>
    GenerateDataSetResult& WithDataSetRequestId(DataSetRequestIdT&& value) { SetDataSetRequestId(std::forward<DataSetRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GenerateDataSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSetRequestId;
    bool m_dataSetRequestIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCommerceAnalytics
} // namespace Aws
