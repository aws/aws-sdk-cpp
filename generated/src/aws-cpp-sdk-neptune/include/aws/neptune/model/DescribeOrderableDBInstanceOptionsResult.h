/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune/model/ResponseMetadata.h>
#include <aws/neptune/model/OrderableDBInstanceOption.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Neptune
{
namespace Model
{
  class DescribeOrderableDBInstanceOptionsResult
  {
  public:
    AWS_NEPTUNE_API DescribeOrderableDBInstanceOptionsResult() = default;
    AWS_NEPTUNE_API DescribeOrderableDBInstanceOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API DescribeOrderableDBInstanceOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An <a>OrderableDBInstanceOption</a> structure containing information about
     * orderable options for the DB instance.</p>
     */
    inline const Aws::Vector<OrderableDBInstanceOption>& GetOrderableDBInstanceOptions() const { return m_orderableDBInstanceOptions; }
    template<typename OrderableDBInstanceOptionsT = Aws::Vector<OrderableDBInstanceOption>>
    void SetOrderableDBInstanceOptions(OrderableDBInstanceOptionsT&& value) { m_orderableDBInstanceOptionsHasBeenSet = true; m_orderableDBInstanceOptions = std::forward<OrderableDBInstanceOptionsT>(value); }
    template<typename OrderableDBInstanceOptionsT = Aws::Vector<OrderableDBInstanceOption>>
    DescribeOrderableDBInstanceOptionsResult& WithOrderableDBInstanceOptions(OrderableDBInstanceOptionsT&& value) { SetOrderableDBInstanceOptions(std::forward<OrderableDBInstanceOptionsT>(value)); return *this;}
    template<typename OrderableDBInstanceOptionsT = OrderableDBInstanceOption>
    DescribeOrderableDBInstanceOptionsResult& AddOrderableDBInstanceOptions(OrderableDBInstanceOptionsT&& value) { m_orderableDBInstanceOptionsHasBeenSet = true; m_orderableDBInstanceOptions.emplace_back(std::forward<OrderableDBInstanceOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An optional pagination token provided by a previous
     * OrderableDBInstanceOptions request. If this parameter is specified, the response
     * includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code> .</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeOrderableDBInstanceOptionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeOrderableDBInstanceOptionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OrderableDBInstanceOption> m_orderableDBInstanceOptions;
    bool m_orderableDBInstanceOptionsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
