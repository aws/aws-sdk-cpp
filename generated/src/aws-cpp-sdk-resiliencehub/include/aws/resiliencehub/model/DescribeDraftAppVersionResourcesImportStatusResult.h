/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ResourceImportStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/resiliencehub/model/ErrorDetail.h>
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
  class DescribeDraftAppVersionResourcesImportStatusResult
  {
  public:
    AWS_RESILIENCEHUB_API DescribeDraftAppVersionResourcesImportStatusResult();
    AWS_RESILIENCEHUB_API DescribeDraftAppVersionResourcesImportStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DescribeDraftAppVersionResourcesImportStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline void SetAppArn(const Aws::String& value) { m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArn.assign(value); }
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }
    inline void SetAppVersion(const Aws::String& value) { m_appVersion = value; }
    inline void SetAppVersion(Aws::String&& value) { m_appVersion = std::move(value); }
    inline void SetAppVersion(const char* value) { m_appVersion.assign(value); }
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of errors that were encountered while importing resources.</p>
     */
    inline const Aws::Vector<ErrorDetail>& GetErrorDetails() const{ return m_errorDetails; }
    inline void SetErrorDetails(const Aws::Vector<ErrorDetail>& value) { m_errorDetails = value; }
    inline void SetErrorDetails(Aws::Vector<ErrorDetail>&& value) { m_errorDetails = std::move(value); }
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithErrorDetails(const Aws::Vector<ErrorDetail>& value) { SetErrorDetails(value); return *this;}
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithErrorDetails(Aws::Vector<ErrorDetail>&& value) { SetErrorDetails(std::move(value)); return *this;}
    inline DescribeDraftAppVersionResourcesImportStatusResult& AddErrorDetails(const ErrorDetail& value) { m_errorDetails.push_back(value); return *this; }
    inline DescribeDraftAppVersionResourcesImportStatusResult& AddErrorDetails(ErrorDetail&& value) { m_errorDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The error message returned for the resource request.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the action.</p>
     */
    inline const ResourceImportStatusType& GetStatus() const{ return m_status; }
    inline void SetStatus(const ResourceImportStatusType& value) { m_status = value; }
    inline void SetStatus(ResourceImportStatusType&& value) { m_status = std::move(value); }
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithStatus(const ResourceImportStatusType& value) { SetStatus(value); return *this;}
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithStatus(ResourceImportStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the status last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusChangeTime() const{ return m_statusChangeTime; }
    inline void SetStatusChangeTime(const Aws::Utils::DateTime& value) { m_statusChangeTime = value; }
    inline void SetStatusChangeTime(Aws::Utils::DateTime&& value) { m_statusChangeTime = std::move(value); }
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithStatusChangeTime(const Aws::Utils::DateTime& value) { SetStatusChangeTime(value); return *this;}
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithStatusChangeTime(Aws::Utils::DateTime&& value) { SetStatusChangeTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appArn;

    Aws::String m_appVersion;

    Aws::Vector<ErrorDetail> m_errorDetails;

    Aws::String m_errorMessage;

    ResourceImportStatusType m_status;

    Aws::Utils::DateTime m_statusChangeTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
