/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/ExportTask.h>
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
  class DescribeExportTasksResult
  {
  public:
    AWS_RDS_API DescribeExportTasksResult();
    AWS_RDS_API DescribeExportTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeExportTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeExportTasks</code> request. A marker is used for pagination to
     * identify the location to begin output for the next response of
     * <code>DescribeExportTasks</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeExportTasks</code> request. A marker is used for pagination to
     * identify the location to begin output for the next response of
     * <code>DescribeExportTasks</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeExportTasks</code> request. A marker is used for pagination to
     * identify the location to begin output for the next response of
     * <code>DescribeExportTasks</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeExportTasks</code> request. A marker is used for pagination to
     * identify the location to begin output for the next response of
     * <code>DescribeExportTasks</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeExportTasks</code> request. A marker is used for pagination to
     * identify the location to begin output for the next response of
     * <code>DescribeExportTasks</code>.</p>
     */
    inline DescribeExportTasksResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeExportTasks</code> request. A marker is used for pagination to
     * identify the location to begin output for the next response of
     * <code>DescribeExportTasks</code>.</p>
     */
    inline DescribeExportTasksResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeExportTasks</code> request. A marker is used for pagination to
     * identify the location to begin output for the next response of
     * <code>DescribeExportTasks</code>.</p>
     */
    inline DescribeExportTasksResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Information about an export of a snapshot to Amazon S3.</p>
     */
    inline const Aws::Vector<ExportTask>& GetExportTasks() const{ return m_exportTasks; }

    /**
     * <p>Information about an export of a snapshot to Amazon S3.</p>
     */
    inline void SetExportTasks(const Aws::Vector<ExportTask>& value) { m_exportTasks = value; }

    /**
     * <p>Information about an export of a snapshot to Amazon S3.</p>
     */
    inline void SetExportTasks(Aws::Vector<ExportTask>&& value) { m_exportTasks = std::move(value); }

    /**
     * <p>Information about an export of a snapshot to Amazon S3.</p>
     */
    inline DescribeExportTasksResult& WithExportTasks(const Aws::Vector<ExportTask>& value) { SetExportTasks(value); return *this;}

    /**
     * <p>Information about an export of a snapshot to Amazon S3.</p>
     */
    inline DescribeExportTasksResult& WithExportTasks(Aws::Vector<ExportTask>&& value) { SetExportTasks(std::move(value)); return *this;}

    /**
     * <p>Information about an export of a snapshot to Amazon S3.</p>
     */
    inline DescribeExportTasksResult& AddExportTasks(const ExportTask& value) { m_exportTasks.push_back(value); return *this; }

    /**
     * <p>Information about an export of a snapshot to Amazon S3.</p>
     */
    inline DescribeExportTasksResult& AddExportTasks(ExportTask&& value) { m_exportTasks.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeExportTasksResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeExportTasksResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<ExportTask> m_exportTasks;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
