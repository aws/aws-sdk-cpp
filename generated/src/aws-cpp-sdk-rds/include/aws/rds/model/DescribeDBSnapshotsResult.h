﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBSnapshot.h>
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
   * <code>DescribeDBSnapshots</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDBSnapshotsResult
  {
  public:
    AWS_RDS_API DescribeDBSnapshotsResult();
    AWS_RDS_API DescribeDBSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeDBSnapshotsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeDBSnapshotsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeDBSnapshotsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DBSnapshot</code> instances.</p>
     */
    inline const Aws::Vector<DBSnapshot>& GetDBSnapshots() const{ return m_dBSnapshots; }
    inline void SetDBSnapshots(const Aws::Vector<DBSnapshot>& value) { m_dBSnapshots = value; }
    inline void SetDBSnapshots(Aws::Vector<DBSnapshot>&& value) { m_dBSnapshots = std::move(value); }
    inline DescribeDBSnapshotsResult& WithDBSnapshots(const Aws::Vector<DBSnapshot>& value) { SetDBSnapshots(value); return *this;}
    inline DescribeDBSnapshotsResult& WithDBSnapshots(Aws::Vector<DBSnapshot>&& value) { SetDBSnapshots(std::move(value)); return *this;}
    inline DescribeDBSnapshotsResult& AddDBSnapshots(const DBSnapshot& value) { m_dBSnapshots.push_back(value); return *this; }
    inline DescribeDBSnapshotsResult& AddDBSnapshots(DBSnapshot&& value) { m_dBSnapshots.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeDBSnapshotsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeDBSnapshotsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::Vector<DBSnapshot> m_dBSnapshots;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
