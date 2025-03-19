/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ExportSourceType.h>
#include <aws/rds/model/Filter.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class DescribeExportTasksRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeExportTasksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExportTasks"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the snapshot or cluster export task to be described.</p>
     */
    inline const Aws::String& GetExportTaskIdentifier() const { return m_exportTaskIdentifier; }
    inline bool ExportTaskIdentifierHasBeenSet() const { return m_exportTaskIdentifierHasBeenSet; }
    template<typename ExportTaskIdentifierT = Aws::String>
    void SetExportTaskIdentifier(ExportTaskIdentifierT&& value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier = std::forward<ExportTaskIdentifierT>(value); }
    template<typename ExportTaskIdentifierT = Aws::String>
    DescribeExportTasksRequest& WithExportTaskIdentifier(ExportTaskIdentifierT&& value) { SetExportTaskIdentifier(std::forward<ExportTaskIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot or cluster exported to Amazon
     * S3.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    DescribeExportTasksRequest& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters specify one or more snapshot or cluster exports to describe. The
     * filters are specified as name-value pairs that define what to include in the
     * output. Filter names and values are case-sensitive.</p> <p>Supported filters
     * include the following:</p> <ul> <li> <p> <code>export-task-identifier</code> -
     * An identifier for the snapshot or cluster export task.</p> </li> <li> <p>
     * <code>s3-bucket</code> - The Amazon S3 bucket the data is exported to.</p> </li>
     * <li> <p> <code>source-arn</code> - The Amazon Resource Name (ARN) of the
     * snapshot or cluster exported to Amazon S3.</p> </li> <li> <p>
     * <code>status</code> - The status of the export task. Must be lowercase. Valid
     * statuses are the following:</p> <ul> <li> <p> <code>canceled</code> </p> </li>
     * <li> <p> <code>canceling</code> </p> </li> <li> <p> <code>complete</code> </p>
     * </li> <li> <p> <code>failed</code> </p> </li> <li> <p> <code>in_progress</code>
     * </p> </li> <li> <p> <code>starting</code> </p> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeExportTasksRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeExportTasksRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeExportTasks</code> request. If you specify this parameter, the
     * response includes only records beyond the marker, up to the value specified by
     * the <code>MaxRecords</code> parameter.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeExportTasksRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified value, a pagination token called a marker is included
     * in the response. You can use the marker in a later
     * <code>DescribeExportTasks</code> request to retrieve the remaining results.</p>
     * <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeExportTasksRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of source for the export.</p>
     */
    inline ExportSourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(ExportSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline DescribeExportTasksRequest& WithSourceType(ExportSourceType value) { SetSourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_exportTaskIdentifier;
    bool m_exportTaskIdentifierHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    ExportSourceType m_sourceType{ExportSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
