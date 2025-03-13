/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
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
   * <p>This data type is used as a response element to
   * <code>DownloadDBLogFilePortion</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DownloadDBLogFilePortionDetails">AWS
   * API Reference</a></p>
   */
  class DownloadDBLogFilePortionResult
  {
  public:
    AWS_RDS_API DownloadDBLogFilePortionResult() = default;
    AWS_RDS_API DownloadDBLogFilePortionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DownloadDBLogFilePortionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Entries from the specified log file.</p>
     */
    inline const Aws::String& GetLogFileData() const { return m_logFileData; }
    template<typename LogFileDataT = Aws::String>
    void SetLogFileData(LogFileDataT&& value) { m_logFileDataHasBeenSet = true; m_logFileData = std::forward<LogFileDataT>(value); }
    template<typename LogFileDataT = Aws::String>
    DownloadDBLogFilePortionResult& WithLogFileData(LogFileDataT&& value) { SetLogFileData(std::forward<LogFileDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token that can be used in a later
     * <code>DownloadDBLogFilePortion</code> request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DownloadDBLogFilePortionResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that, if true, indicates there is more data to be
     * downloaded.</p>
     */
    inline bool GetAdditionalDataPending() const { return m_additionalDataPending; }
    inline void SetAdditionalDataPending(bool value) { m_additionalDataPendingHasBeenSet = true; m_additionalDataPending = value; }
    inline DownloadDBLogFilePortionResult& WithAdditionalDataPending(bool value) { SetAdditionalDataPending(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DownloadDBLogFilePortionResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logFileData;
    bool m_logFileDataHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    bool m_additionalDataPending{false};
    bool m_additionalDataPendingHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
