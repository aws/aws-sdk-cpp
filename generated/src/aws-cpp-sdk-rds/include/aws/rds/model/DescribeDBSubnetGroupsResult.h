/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBSubnetGroup.h>
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
   * <p>Contains the result of a successful invocation of the
   * <code>DescribeDBSubnetGroups</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSubnetGroupMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDBSubnetGroupsResult
  {
  public:
    AWS_RDS_API DescribeDBSubnetGroupsResult() = default;
    AWS_RDS_API DescribeDBSubnetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBSubnetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    DescribeDBSubnetGroupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DBSubnetGroup</code> instances.</p>
     */
    inline const Aws::Vector<DBSubnetGroup>& GetDBSubnetGroups() const { return m_dBSubnetGroups; }
    template<typename DBSubnetGroupsT = Aws::Vector<DBSubnetGroup>>
    void SetDBSubnetGroups(DBSubnetGroupsT&& value) { m_dBSubnetGroupsHasBeenSet = true; m_dBSubnetGroups = std::forward<DBSubnetGroupsT>(value); }
    template<typename DBSubnetGroupsT = Aws::Vector<DBSubnetGroup>>
    DescribeDBSubnetGroupsResult& WithDBSubnetGroups(DBSubnetGroupsT&& value) { SetDBSubnetGroups(std::forward<DBSubnetGroupsT>(value)); return *this;}
    template<typename DBSubnetGroupsT = DBSubnetGroup>
    DescribeDBSubnetGroupsResult& AddDBSubnetGroups(DBSubnetGroupsT&& value) { m_dBSubnetGroupsHasBeenSet = true; m_dBSubnetGroups.emplace_back(std::forward<DBSubnetGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBSubnetGroupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<DBSubnetGroup> m_dBSubnetGroups;
    bool m_dBSubnetGroupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
