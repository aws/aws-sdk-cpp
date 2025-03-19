/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/ResponseMetadata.h>
#include <aws/neptune/model/DBParameterGroup.h>
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
  class DescribeDBParameterGroupsResult
  {
  public:
    AWS_NEPTUNE_API DescribeDBParameterGroupsResult() = default;
    AWS_NEPTUNE_API DescribeDBParameterGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API DescribeDBParameterGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    DescribeDBParameterGroupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a>DBParameterGroup</a> instances.</p>
     */
    inline const Aws::Vector<DBParameterGroup>& GetDBParameterGroups() const { return m_dBParameterGroups; }
    template<typename DBParameterGroupsT = Aws::Vector<DBParameterGroup>>
    void SetDBParameterGroups(DBParameterGroupsT&& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups = std::forward<DBParameterGroupsT>(value); }
    template<typename DBParameterGroupsT = Aws::Vector<DBParameterGroup>>
    DescribeDBParameterGroupsResult& WithDBParameterGroups(DBParameterGroupsT&& value) { SetDBParameterGroups(std::forward<DBParameterGroupsT>(value)); return *this;}
    template<typename DBParameterGroupsT = DBParameterGroup>
    DescribeDBParameterGroupsResult& AddDBParameterGroups(DBParameterGroupsT&& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups.emplace_back(std::forward<DBParameterGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBParameterGroupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<DBParameterGroup> m_dBParameterGroups;
    bool m_dBParameterGroupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
