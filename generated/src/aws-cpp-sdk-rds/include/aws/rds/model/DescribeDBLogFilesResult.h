/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DescribeDBLogFilesDetails.h>
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
namespace RDS
{
namespace Model
{
  /**
   * <p>The response from a call to <code>DescribeDBLogFiles</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBLogFilesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDBLogFilesResult
  {
  public:
    AWS_RDS_API DescribeDBLogFilesResult() = default;
    AWS_RDS_API DescribeDBLogFilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBLogFilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The DB log files returned.</p>
     */
    inline const Aws::Vector<DescribeDBLogFilesDetails>& GetDescribeDBLogFiles() const { return m_describeDBLogFiles; }
    template<typename DescribeDBLogFilesT = Aws::Vector<DescribeDBLogFilesDetails>>
    void SetDescribeDBLogFiles(DescribeDBLogFilesT&& value) { m_describeDBLogFilesHasBeenSet = true; m_describeDBLogFiles = std::forward<DescribeDBLogFilesT>(value); }
    template<typename DescribeDBLogFilesT = Aws::Vector<DescribeDBLogFilesDetails>>
    DescribeDBLogFilesResult& WithDescribeDBLogFiles(DescribeDBLogFilesT&& value) { SetDescribeDBLogFiles(std::forward<DescribeDBLogFilesT>(value)); return *this;}
    template<typename DescribeDBLogFilesT = DescribeDBLogFilesDetails>
    DescribeDBLogFilesResult& AddDescribeDBLogFiles(DescribeDBLogFilesT&& value) { m_describeDBLogFilesHasBeenSet = true; m_describeDBLogFiles.emplace_back(std::forward<DescribeDBLogFilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeDBLogFiles</code> request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBLogFilesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBLogFilesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DescribeDBLogFilesDetails> m_describeDBLogFiles;
    bool m_describeDBLogFilesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
