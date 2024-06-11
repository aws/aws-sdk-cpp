/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/ResourceResolutionStatusType.h>
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
  class DescribeAppVersionResourcesResolutionStatusResult
  {
  public:
    AWS_RESILIENCEHUB_API DescribeAppVersionResourcesResolutionStatusResult();
    AWS_RESILIENCEHUB_API DescribeAppVersionResourcesResolutionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DescribeAppVersionResourcesResolutionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeAppVersionResourcesResolutionStatusResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline DescribeAppVersionResourcesResolutionStatusResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline DescribeAppVersionResourcesResolutionStatusResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }
    inline void SetAppVersion(const Aws::String& value) { m_appVersion = value; }
    inline void SetAppVersion(Aws::String&& value) { m_appVersion = std::move(value); }
    inline void SetAppVersion(const char* value) { m_appVersion.assign(value); }
    inline DescribeAppVersionResourcesResolutionStatusResult& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}
    inline DescribeAppVersionResourcesResolutionStatusResult& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}
    inline DescribeAppVersionResourcesResolutionStatusResult& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned error message for the request.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline DescribeAppVersionResourcesResolutionStatusResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline DescribeAppVersionResourcesResolutionStatusResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline DescribeAppVersionResourcesResolutionStatusResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline const Aws::String& GetResolutionId() const{ return m_resolutionId; }
    inline void SetResolutionId(const Aws::String& value) { m_resolutionId = value; }
    inline void SetResolutionId(Aws::String&& value) { m_resolutionId = std::move(value); }
    inline void SetResolutionId(const char* value) { m_resolutionId.assign(value); }
    inline DescribeAppVersionResourcesResolutionStatusResult& WithResolutionId(const Aws::String& value) { SetResolutionId(value); return *this;}
    inline DescribeAppVersionResourcesResolutionStatusResult& WithResolutionId(Aws::String&& value) { SetResolutionId(std::move(value)); return *this;}
    inline DescribeAppVersionResourcesResolutionStatusResult& WithResolutionId(const char* value) { SetResolutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the action.</p>
     */
    inline const ResourceResolutionStatusType& GetStatus() const{ return m_status; }
    inline void SetStatus(const ResourceResolutionStatusType& value) { m_status = value; }
    inline void SetStatus(ResourceResolutionStatusType&& value) { m_status = std::move(value); }
    inline DescribeAppVersionResourcesResolutionStatusResult& WithStatus(const ResourceResolutionStatusType& value) { SetStatus(value); return *this;}
    inline DescribeAppVersionResourcesResolutionStatusResult& WithStatus(ResourceResolutionStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAppVersionResourcesResolutionStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAppVersionResourcesResolutionStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAppVersionResourcesResolutionStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appArn;

    Aws::String m_appVersion;

    Aws::String m_errorMessage;

    Aws::String m_resolutionId;

    ResourceResolutionStatusType m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
