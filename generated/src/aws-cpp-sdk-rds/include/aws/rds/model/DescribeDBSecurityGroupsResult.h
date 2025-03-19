/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBSecurityGroup.h>
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
   * <code>DescribeDBSecurityGroups</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSecurityGroupMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDBSecurityGroupsResult
  {
  public:
    AWS_RDS_API DescribeDBSecurityGroupsResult() = default;
    AWS_RDS_API DescribeDBSecurityGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBSecurityGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    DescribeDBSecurityGroupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DBSecurityGroup</code> instances.</p>
     */
    inline const Aws::Vector<DBSecurityGroup>& GetDBSecurityGroups() const { return m_dBSecurityGroups; }
    template<typename DBSecurityGroupsT = Aws::Vector<DBSecurityGroup>>
    void SetDBSecurityGroups(DBSecurityGroupsT&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = std::forward<DBSecurityGroupsT>(value); }
    template<typename DBSecurityGroupsT = Aws::Vector<DBSecurityGroup>>
    DescribeDBSecurityGroupsResult& WithDBSecurityGroups(DBSecurityGroupsT&& value) { SetDBSecurityGroups(std::forward<DBSecurityGroupsT>(value)); return *this;}
    template<typename DBSecurityGroupsT = DBSecurityGroup>
    DescribeDBSecurityGroupsResult& AddDBSecurityGroups(DBSecurityGroupsT&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.emplace_back(std::forward<DBSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBSecurityGroupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<DBSecurityGroup> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
