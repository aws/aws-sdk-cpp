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
    AWS_RESILIENCEHUB_API DescribeMetricsExportResult();
    AWS_RESILIENCEHUB_API DescribeMetricsExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DescribeMetricsExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Explains the error that occurred while exporting the metrics.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline DescribeMetricsExportResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline DescribeMetricsExportResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline DescribeMetricsExportResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the Amazon S3 bucket where the exported metrics is
     * stored.</p>
     */
    inline const S3Location& GetExportLocation() const{ return m_exportLocation; }
    inline void SetExportLocation(const S3Location& value) { m_exportLocation = value; }
    inline void SetExportLocation(S3Location&& value) { m_exportLocation = std::move(value); }
    inline DescribeMetricsExportResult& WithExportLocation(const S3Location& value) { SetExportLocation(value); return *this;}
    inline DescribeMetricsExportResult& WithExportLocation(S3Location&& value) { SetExportLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier for the metrics export task.</p>
     */
    inline const Aws::String& GetMetricsExportId() const{ return m_metricsExportId; }
    inline void SetMetricsExportId(const Aws::String& value) { m_metricsExportId = value; }
    inline void SetMetricsExportId(Aws::String&& value) { m_metricsExportId = std::move(value); }
    inline void SetMetricsExportId(const char* value) { m_metricsExportId.assign(value); }
    inline DescribeMetricsExportResult& WithMetricsExportId(const Aws::String& value) { SetMetricsExportId(value); return *this;}
    inline DescribeMetricsExportResult& WithMetricsExportId(Aws::String&& value) { SetMetricsExportId(std::move(value)); return *this;}
    inline DescribeMetricsExportResult& WithMetricsExportId(const char* value) { SetMetricsExportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the metrics export task.</p>
     */
    inline const MetricsExportStatusType& GetStatus() const{ return m_status; }
    inline void SetStatus(const MetricsExportStatusType& value) { m_status = value; }
    inline void SetStatus(MetricsExportStatusType&& value) { m_status = std::move(value); }
    inline DescribeMetricsExportResult& WithStatus(const MetricsExportStatusType& value) { SetStatus(value); return *this;}
    inline DescribeMetricsExportResult& WithStatus(MetricsExportStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMetricsExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMetricsExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMetricsExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_errorMessage;

    S3Location m_exportLocation;

    Aws::String m_metricsExportId;

    MetricsExportStatusType m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
