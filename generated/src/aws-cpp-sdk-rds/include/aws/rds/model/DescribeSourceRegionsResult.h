﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/SourceRegion.h>
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
   * <code>DescribeSourceRegions</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/SourceRegionMessage">AWS
   * API Reference</a></p>
   */
  class DescribeSourceRegionsResult
  {
  public:
    AWS_RDS_API DescribeSourceRegionsResult();
    AWS_RDS_API DescribeSourceRegionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeSourceRegionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeSourceRegionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeSourceRegionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeSourceRegionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of <code>SourceRegion</code> instances that contains each source
     * Amazon Web Services Region that the current Amazon Web Services Region can get a
     * read replica or a DB snapshot from.</p>
     */
    inline const Aws::Vector<SourceRegion>& GetSourceRegions() const{ return m_sourceRegions; }

    /**
     * <p>A list of <code>SourceRegion</code> instances that contains each source
     * Amazon Web Services Region that the current Amazon Web Services Region can get a
     * read replica or a DB snapshot from.</p>
     */
    inline void SetSourceRegions(const Aws::Vector<SourceRegion>& value) { m_sourceRegions = value; }

    /**
     * <p>A list of <code>SourceRegion</code> instances that contains each source
     * Amazon Web Services Region that the current Amazon Web Services Region can get a
     * read replica or a DB snapshot from.</p>
     */
    inline void SetSourceRegions(Aws::Vector<SourceRegion>&& value) { m_sourceRegions = std::move(value); }

    /**
     * <p>A list of <code>SourceRegion</code> instances that contains each source
     * Amazon Web Services Region that the current Amazon Web Services Region can get a
     * read replica or a DB snapshot from.</p>
     */
    inline DescribeSourceRegionsResult& WithSourceRegions(const Aws::Vector<SourceRegion>& value) { SetSourceRegions(value); return *this;}

    /**
     * <p>A list of <code>SourceRegion</code> instances that contains each source
     * Amazon Web Services Region that the current Amazon Web Services Region can get a
     * read replica or a DB snapshot from.</p>
     */
    inline DescribeSourceRegionsResult& WithSourceRegions(Aws::Vector<SourceRegion>&& value) { SetSourceRegions(std::move(value)); return *this;}

    /**
     * <p>A list of <code>SourceRegion</code> instances that contains each source
     * Amazon Web Services Region that the current Amazon Web Services Region can get a
     * read replica or a DB snapshot from.</p>
     */
    inline DescribeSourceRegionsResult& AddSourceRegions(const SourceRegion& value) { m_sourceRegions.push_back(value); return *this; }

    /**
     * <p>A list of <code>SourceRegion</code> instances that contains each source
     * Amazon Web Services Region that the current Amazon Web Services Region can get a
     * read replica or a DB snapshot from.</p>
     */
    inline DescribeSourceRegionsResult& AddSourceRegions(SourceRegion&& value) { m_sourceRegions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeSourceRegionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeSourceRegionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<SourceRegion> m_sourceRegions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
