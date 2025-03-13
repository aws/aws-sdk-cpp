/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBShardGroup.h>
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
  class DescribeDBShardGroupsResult
  {
  public:
    AWS_RDS_API DescribeDBShardGroupsResult() = default;
    AWS_RDS_API DescribeDBShardGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBShardGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Contains a list of DB shard groups for the user.</p>
     */
    inline const Aws::Vector<DBShardGroup>& GetDBShardGroups() const { return m_dBShardGroups; }
    template<typename DBShardGroupsT = Aws::Vector<DBShardGroup>>
    void SetDBShardGroups(DBShardGroupsT&& value) { m_dBShardGroupsHasBeenSet = true; m_dBShardGroups = std::forward<DBShardGroupsT>(value); }
    template<typename DBShardGroupsT = Aws::Vector<DBShardGroup>>
    DescribeDBShardGroupsResult& WithDBShardGroups(DBShardGroupsT&& value) { SetDBShardGroups(std::forward<DBShardGroupsT>(value)); return *this;}
    template<typename DBShardGroupsT = DBShardGroup>
    DescribeDBShardGroupsResult& AddDBShardGroups(DBShardGroupsT&& value) { m_dBShardGroupsHasBeenSet = true; m_dBShardGroups.emplace_back(std::forward<DBShardGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeDBClusters</code> request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBShardGroupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBShardGroupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DBShardGroup> m_dBShardGroups;
    bool m_dBShardGroupsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
