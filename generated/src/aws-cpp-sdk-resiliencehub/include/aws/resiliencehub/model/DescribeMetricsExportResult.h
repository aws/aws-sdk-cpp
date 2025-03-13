/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/S3Location.h>
#include <aws/resiliencehub/model/MetricsExportStatusType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ResilienceHub
{
namespace Model
{
  class DescribeMetricsExportResult
  {
  public:
    AWS_RESILIENCEHUB_API DescribeMetricsExportResult() = default;
    AWS_RESILIENCEHUB_API DescribeMetricsExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DescribeMetricsExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Explains the error that occurred while exporting the metrics.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    DescribeMetricsExportResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the Amazon S3 bucket where the exported metrics is
     * stored.</p>
     */
    inline const S3Location& GetExportLocation() const { return m_exportLocation; }
    template<typename ExportLocationT = S3Location>
    void SetExportLocation(ExportLocationT&& value) { m_exportLocationHasBeenSet = true; m_exportLocation = std::forward<ExportLocationT>(value); }
    template<typename ExportLocationT = S3Location>
    DescribeMetricsExportResult& WithExportLocation(ExportLocationT&& value) { SetExportLocation(std::forward<ExportLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier for the metrics export task.</p>
     */
    inline const Aws::String& GetMetricsExportId() const { return m_metricsExportId; }
    template<typename MetricsExportIdT = Aws::String>
    void SetMetricsExportId(MetricsExportIdT&& value) { m_metricsExportIdHasBeenSet = true; m_metricsExportId = std::forward<MetricsExportIdT>(value); }
    template<typename MetricsExportIdT = Aws::String>
    DescribeMetricsExportResult& WithMetricsExportId(MetricsExportIdT&& value) { SetMetricsExportId(std::forward<MetricsExportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the metrics export task.</p>
     */
    inline MetricsExportStatusType GetStatus() const { return m_status; }
    inline void SetStatus(MetricsExportStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeMetricsExportResult& WithStatus(MetricsExportStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMetricsExportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    S3Location m_exportLocation;
    bool m_exportLocationHasBeenSet = false;

    Aws::String m_metricsExportId;
    bool m_metricsExportIdHasBeenSet = false;

    MetricsExportStatusType m_status{MetricsExportStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
