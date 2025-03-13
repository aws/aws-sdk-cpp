/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DownloadDBLogFilePortionMessage">AWS
   * API Reference</a></p>
   */
  class DownloadDBLogFilePortionRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DownloadDBLogFilePortionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DownloadDBLogFilePortion"; }

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
    inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    template<typename DBInstanceIdentifierT = Aws::String>
    void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value); }
    template<typename DBInstanceIdentifierT = Aws::String>
    DownloadDBLogFilePortionRequest& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) { SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log file to be downloaded.</p>
     */
    inline const Aws::String& GetLogFileName() const { return m_logFileName; }
    inline bool LogFileNameHasBeenSet() const { return m_logFileNameHasBeenSet; }
    template<typename LogFileNameT = Aws::String>
    void SetLogFileName(LogFileNameT&& value) { m_logFileNameHasBeenSet = true; m_logFileName = std::forward<LogFileNameT>(value); }
    template<typename LogFileNameT = Aws::String>
    DownloadDBLogFilePortionRequest& WithLogFileName(LogFileNameT&& value) { SetLogFileName(std::forward<LogFileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token provided in the previous request or "0". If the Marker
     * parameter is specified the response includes only records beyond the marker
     * until the end of the file or up to NumberOfLines.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DownloadDBLogFilePortionRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of lines to download. If the number of lines specified results in
     * a file over 1 MB in size, the file is truncated at 1 MB in size.</p> <p>If the
     * NumberOfLines parameter is specified, then the block of lines returned can be
     * from the beginning or the end of the log file, depending on the value of the
     * Marker parameter.</p> <ul> <li> <p>If neither Marker or NumberOfLines are
     * specified, the entire log file is returned up to a maximum of 10000 lines,
     * starting with the most recent log entries first.</p> </li> <li> <p>If
     * NumberOfLines is specified and Marker isn't specified, then the most recent
     * lines from the end of the log file are returned.</p> </li> <li> <p>If Marker is
     * specified as "0", then the specified number of lines from the beginning of the
     * log file are returned.</p> </li> <li> <p>You can download the log file in blocks
     * of lines by specifying the size of the block using the NumberOfLines parameter,
     * and by specifying a value of "0" for the Marker parameter in your first request.
     * Include the Marker value returned in the response as the Marker value for the
     * next request, continuing until the AdditionalDataPending response element
     * returns false.</p> </li> </ul>
     */
    inline int GetNumberOfLines() const { return m_numberOfLines; }
    inline bool NumberOfLinesHasBeenSet() const { return m_numberOfLinesHasBeenSet; }
    inline void SetNumberOfLines(int value) { m_numberOfLinesHasBeenSet = true; m_numberOfLines = value; }
    inline DownloadDBLogFilePortionRequest& WithNumberOfLines(int value) { SetNumberOfLines(value); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_logFileName;
    bool m_logFileNameHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_numberOfLines{0};
    bool m_numberOfLinesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
