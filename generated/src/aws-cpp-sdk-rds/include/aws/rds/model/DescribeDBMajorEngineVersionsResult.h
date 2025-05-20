/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBMajorEngineVersion.h>
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
  class DescribeDBMajorEngineVersionsResult
  {
  public:
    AWS_RDS_API DescribeDBMajorEngineVersionsResult() = default;
    AWS_RDS_API DescribeDBMajorEngineVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBMajorEngineVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>DBMajorEngineVersion</code> elements.</p>
     */
    inline const Aws::Vector<DBMajorEngineVersion>& GetDBMajorEngineVersions() const { return m_dBMajorEngineVersions; }
    template<typename DBMajorEngineVersionsT = Aws::Vector<DBMajorEngineVersion>>
    void SetDBMajorEngineVersions(DBMajorEngineVersionsT&& value) { m_dBMajorEngineVersionsHasBeenSet = true; m_dBMajorEngineVersions = std::forward<DBMajorEngineVersionsT>(value); }
    template<typename DBMajorEngineVersionsT = Aws::Vector<DBMajorEngineVersion>>
    DescribeDBMajorEngineVersionsResult& WithDBMajorEngineVersions(DBMajorEngineVersionsT&& value) { SetDBMajorEngineVersions(std::forward<DBMajorEngineVersionsT>(value)); return *this;}
    template<typename DBMajorEngineVersionsT = DBMajorEngineVersion>
    DescribeDBMajorEngineVersionsResult& AddDBMajorEngineVersions(DBMajorEngineVersionsT&& value) { m_dBMajorEngineVersionsHasBeenSet = true; m_dBMajorEngineVersions.emplace_back(std::forward<DBMajorEngineVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBMajorEngineVersionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBMajorEngineVersionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DBMajorEngineVersion> m_dBMajorEngineVersions;
    bool m_dBMajorEngineVersionsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
