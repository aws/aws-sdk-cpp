/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/ResourceImportStatusType.h>
#include <aws/core/utils/DateTime.h>
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


    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const char* value) { m_appArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(const Aws::String& value) { m_appVersion = value; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(Aws::String&& value) { m_appVersion = std::move(value); }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(const char* value) { m_appVersion.assign(value); }

    /**
     * <p>The version of the application.</p>
     */
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}


    /**
     * <p>The returned error message for the request.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The returned error message for the request.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>The returned error message for the request.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>The returned error message for the request.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>The returned error message for the request.</p>
     */
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The returned error message for the request.</p>
     */
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The returned error message for the request.</p>
     */
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The status of the action.</p>
     */
    inline const ResourceImportStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(const ResourceImportStatusType& value) { m_status = value; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(ResourceImportStatusType&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the action.</p>
     */
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithStatus(const ResourceImportStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the action.</p>
     */
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithStatus(ResourceImportStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp for when the status last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusChangeTime() const{ return m_statusChangeTime; }

    /**
     * <p>The timestamp for when the status last changed.</p>
     */
    inline void SetStatusChangeTime(const Aws::Utils::DateTime& value) { m_statusChangeTime = value; }

    /**
     * <p>The timestamp for when the status last changed.</p>
     */
    inline void SetStatusChangeTime(Aws::Utils::DateTime&& value) { m_statusChangeTime = std::move(value); }

    /**
     * <p>The timestamp for when the status last changed.</p>
     */
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithStatusChangeTime(const Aws::Utils::DateTime& value) { SetStatusChangeTime(value); return *this;}

    /**
     * <p>The timestamp for when the status last changed.</p>
     */
    inline DescribeDraftAppVersionResourcesImportStatusResult& WithStatusChangeTime(Aws::Utils::DateTime&& value) { SetStatusChangeTime(std::move(value)); return *this;}

  private:

    Aws::String m_appArn;

    Aws::String m_appVersion;

    Aws::String m_errorMessage;

    ResourceImportStatusType m_status;

    Aws::Utils::DateTime m_statusChangeTime;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
