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
    AWS_RDS_API DescribeDBShardGroupsResult();
    AWS_RDS_API DescribeDBShardGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBShardGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Contains a list of DB shard groups for the user.</p>
     */
    inline const Aws::Vector<DBShardGroup>& GetDBShardGroups() const{ return m_dBShardGroups; }

    /**
     * <p>Contains a list of DB shard groups for the user.</p>
     */
    inline void SetDBShardGroups(const Aws::Vector<DBShardGroup>& value) { m_dBShardGroups = value; }

    /**
     * <p>Contains a list of DB shard groups for the user.</p>
     */
    inline void SetDBShardGroups(Aws::Vector<DBShardGroup>&& value) { m_dBShardGroups = std::move(value); }

    /**
     * <p>Contains a list of DB shard groups for the user.</p>
     */
    inline DescribeDBShardGroupsResult& WithDBShardGroups(const Aws::Vector<DBShardGroup>& value) { SetDBShardGroups(value); return *this;}

    /**
     * <p>Contains a list of DB shard groups for the user.</p>
     */
    inline DescribeDBShardGroupsResult& WithDBShardGroups(Aws::Vector<DBShardGroup>&& value) { SetDBShardGroups(std::move(value)); return *this;}

    /**
     * <p>Contains a list of DB shard groups for the user.</p>
     */
    inline DescribeDBShardGroupsResult& AddDBShardGroups(const DBShardGroup& value) { m_dBShardGroups.push_back(value); return *this; }

    /**
     * <p>Contains a list of DB shard groups for the user.</p>
     */
    inline DescribeDBShardGroupsResult& AddDBShardGroups(DBShardGroup&& value) { m_dBShardGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeDBClusters</code> request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeDBClusters</code> request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeDBClusters</code> request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeDBClusters</code> request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeDBClusters</code> request.</p>
     */
    inline DescribeDBShardGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeDBClusters</code> request.</p>
     */
    inline DescribeDBShardGroupsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeDBClusters</code> request.</p>
     */
    inline DescribeDBShardGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBShardGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBShardGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DBShardGroup> m_dBShardGroups;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
