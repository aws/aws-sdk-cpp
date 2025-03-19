/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/TableRestoreStatus.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/TableRestoreStatusMessage">AWS
   * API Reference</a></p>
   */
  class DescribeTableRestoreStatusResult
  {
  public:
    AWS_REDSHIFT_API DescribeTableRestoreStatusResult() = default;
    AWS_REDSHIFT_API DescribeTableRestoreStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeTableRestoreStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of status details for one or more table restore requests.</p>
     */
    inline const Aws::Vector<TableRestoreStatus>& GetTableRestoreStatusDetails() const { return m_tableRestoreStatusDetails; }
    template<typename TableRestoreStatusDetailsT = Aws::Vector<TableRestoreStatus>>
    void SetTableRestoreStatusDetails(TableRestoreStatusDetailsT&& value) { m_tableRestoreStatusDetailsHasBeenSet = true; m_tableRestoreStatusDetails = std::forward<TableRestoreStatusDetailsT>(value); }
    template<typename TableRestoreStatusDetailsT = Aws::Vector<TableRestoreStatus>>
    DescribeTableRestoreStatusResult& WithTableRestoreStatusDetails(TableRestoreStatusDetailsT&& value) { SetTableRestoreStatusDetails(std::forward<TableRestoreStatusDetailsT>(value)); return *this;}
    template<typename TableRestoreStatusDetailsT = TableRestoreStatus>
    DescribeTableRestoreStatusResult& AddTableRestoreStatusDetails(TableRestoreStatusDetailsT&& value) { m_tableRestoreStatusDetailsHasBeenSet = true; m_tableRestoreStatusDetails.emplace_back(std::forward<TableRestoreStatusDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a subsequent
     * <a>DescribeTableRestoreStatus</a> request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeTableRestoreStatusResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTableRestoreStatusResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TableRestoreStatus> m_tableRestoreStatusDetails;
    bool m_tableRestoreStatusDetailsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
