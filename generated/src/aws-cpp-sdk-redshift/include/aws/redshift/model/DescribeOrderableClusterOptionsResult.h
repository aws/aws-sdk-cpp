/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/OrderableClusterOption.h>
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
namespace Redshift
{
namespace Model
{
  /**
   * <p>Contains the output from the <a>DescribeOrderableClusterOptions</a> action.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/OrderableClusterOptionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeOrderableClusterOptionsResult
  {
  public:
    AWS_REDSHIFT_API DescribeOrderableClusterOptionsResult() = default;
    AWS_REDSHIFT_API DescribeOrderableClusterOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeOrderableClusterOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An <code>OrderableClusterOption</code> structure containing information about
     * orderable options for the cluster.</p>
     */
    inline const Aws::Vector<OrderableClusterOption>& GetOrderableClusterOptions() const { return m_orderableClusterOptions; }
    template<typename OrderableClusterOptionsT = Aws::Vector<OrderableClusterOption>>
    void SetOrderableClusterOptions(OrderableClusterOptionsT&& value) { m_orderableClusterOptionsHasBeenSet = true; m_orderableClusterOptions = std::forward<OrderableClusterOptionsT>(value); }
    template<typename OrderableClusterOptionsT = Aws::Vector<OrderableClusterOption>>
    DescribeOrderableClusterOptionsResult& WithOrderableClusterOptions(OrderableClusterOptionsT&& value) { SetOrderableClusterOptions(std::forward<OrderableClusterOptionsT>(value)); return *this;}
    template<typename OrderableClusterOptionsT = OrderableClusterOption>
    DescribeOrderableClusterOptionsResult& AddOrderableClusterOptions(OrderableClusterOptionsT&& value) { m_orderableClusterOptionsHasBeenSet = true; m_orderableClusterOptions.emplace_back(std::forward<OrderableClusterOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeOrderableClusterOptionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeOrderableClusterOptionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OrderableClusterOption> m_orderableClusterOptions;
    bool m_orderableClusterOptionsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
