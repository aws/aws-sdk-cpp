/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Filter.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBLogFilesMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDBLogFilesRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeDBLogFilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDBLogFiles"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The customer-assigned name of the DB instance that contains the log files you
     * want to list.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of
     * an existing DBInstance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }
    inline DescribeDBLogFilesRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}
    inline DescribeDBLogFilesRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}
    inline DescribeDBLogFilesRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the available log files for log file names that contain the specified
     * string.</p>
     */
    inline const Aws::String& GetFilenameContains() const{ return m_filenameContains; }
    inline bool FilenameContainsHasBeenSet() const { return m_filenameContainsHasBeenSet; }
    inline void SetFilenameContains(const Aws::String& value) { m_filenameContainsHasBeenSet = true; m_filenameContains = value; }
    inline void SetFilenameContains(Aws::String&& value) { m_filenameContainsHasBeenSet = true; m_filenameContains = std::move(value); }
    inline void SetFilenameContains(const char* value) { m_filenameContainsHasBeenSet = true; m_filenameContains.assign(value); }
    inline DescribeDBLogFilesRequest& WithFilenameContains(const Aws::String& value) { SetFilenameContains(value); return *this;}
    inline DescribeDBLogFilesRequest& WithFilenameContains(Aws::String&& value) { SetFilenameContains(std::move(value)); return *this;}
    inline DescribeDBLogFilesRequest& WithFilenameContains(const char* value) { SetFilenameContains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the available log files for files written since the specified date,
     * in POSIX timestamp format with milliseconds.</p>
     */
    inline long long GetFileLastWritten() const{ return m_fileLastWritten; }
    inline bool FileLastWrittenHasBeenSet() const { return m_fileLastWrittenHasBeenSet; }
    inline void SetFileLastWritten(long long value) { m_fileLastWrittenHasBeenSet = true; m_fileLastWritten = value; }
    inline DescribeDBLogFilesRequest& WithFileLastWritten(long long value) { SetFileLastWritten(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the available log files for files larger than the specified size.</p>
     */
    inline long long GetFileSize() const{ return m_fileSize; }
    inline bool FileSizeHasBeenSet() const { return m_fileSizeHasBeenSet; }
    inline void SetFileSize(long long value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }
    inline DescribeDBLogFilesRequest& WithFileSize(long long value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeDBLogFilesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeDBLogFilesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeDBLogFilesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeDBLogFilesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxRecords value, a pagination token called a marker is
     * included in the response so you can retrieve the remaining results.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeDBLogFilesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * MaxRecords.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeDBLogFilesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeDBLogFilesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeDBLogFilesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_filenameContains;
    bool m_filenameContainsHasBeenSet = false;

    long long m_fileLastWritten;
    bool m_fileLastWrittenHasBeenSet = false;

    long long m_fileSize;
    bool m_fileSizeHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
