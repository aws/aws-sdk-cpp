/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/ResponseMetadata.h>
#include <aws/neptune/model/DBEngineVersion.h>
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
  class DescribeDBEngineVersionsResult
  {
  public:
    AWS_NEPTUNE_API DescribeDBEngineVersionsResult() = default;
    AWS_NEPTUNE_API DescribeDBEngineVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API DescribeDBEngineVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBEngineVersionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of <code>DBEngineVersion</code> elements.</p>
     */
    inline const Aws::Vector<DBEngineVersion>& GetDBEngineVersions() const { return m_dBEngineVersions; }
    template<typename DBEngineVersionsT = Aws::Vector<DBEngineVersion>>
    void SetDBEngineVersions(DBEngineVersionsT&& value) { m_dBEngineVersionsHasBeenSet = true; m_dBEngineVersions = std::forward<DBEngineVersionsT>(value); }
    template<typename DBEngineVersionsT = Aws::Vector<DBEngineVersion>>
    DescribeDBEngineVersionsResult& WithDBEngineVersions(DBEngineVersionsT&& value) { SetDBEngineVersions(std::forward<DBEngineVersionsT>(value)); return *this;}
    template<typename DBEngineVersionsT = DBEngineVersion>
    DescribeDBEngineVersionsResult& AddDBEngineVersions(DBEngineVersionsT&& value) { m_dBEngineVersionsHasBeenSet = true; m_dBEngineVersions.emplace_back(std::forward<DBEngineVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBEngineVersionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<DBEngineVersion> m_dBEngineVersions;
    bool m_dBEngineVersionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
