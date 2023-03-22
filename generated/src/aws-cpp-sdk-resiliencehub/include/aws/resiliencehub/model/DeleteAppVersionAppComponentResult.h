/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AppComponent.h>
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
  class DeleteAppVersionAppComponentResult
  {
  public:
    AWS_RESILIENCEHUB_API DeleteAppVersionAppComponentResult();
    AWS_RESILIENCEHUB_API DeleteAppVersionAppComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DeleteAppVersionAppComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline void SetAppArn(const char* value) { m_appArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline DeleteAppVersionAppComponentResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline DeleteAppVersionAppComponentResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline DeleteAppVersionAppComponentResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>The list of Application Components that belong to this resource.</p>
     */
    inline const AppComponent& GetAppComponent() const{ return m_appComponent; }

    /**
     * <p>The list of Application Components that belong to this resource.</p>
     */
    inline void SetAppComponent(const AppComponent& value) { m_appComponent = value; }

    /**
     * <p>The list of Application Components that belong to this resource.</p>
     */
    inline void SetAppComponent(AppComponent&& value) { m_appComponent = std::move(value); }

    /**
     * <p>The list of Application Components that belong to this resource.</p>
     */
    inline DeleteAppVersionAppComponentResult& WithAppComponent(const AppComponent& value) { SetAppComponent(value); return *this;}

    /**
     * <p>The list of Application Components that belong to this resource.</p>
     */
    inline DeleteAppVersionAppComponentResult& WithAppComponent(AppComponent&& value) { SetAppComponent(std::move(value)); return *this;}


    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline void SetAppVersion(const Aws::String& value) { m_appVersion = value; }

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline void SetAppVersion(Aws::String&& value) { m_appVersion = std::move(value); }

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline void SetAppVersion(const char* value) { m_appVersion.assign(value); }

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline DeleteAppVersionAppComponentResult& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline DeleteAppVersionAppComponentResult& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline DeleteAppVersionAppComponentResult& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteAppVersionAppComponentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteAppVersionAppComponentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteAppVersionAppComponentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_appArn;

    AppComponent m_appComponent;

    Aws::String m_appVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
