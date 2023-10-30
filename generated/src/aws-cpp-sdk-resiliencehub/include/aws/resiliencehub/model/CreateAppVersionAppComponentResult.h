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
  class CreateAppVersionAppComponentResult
  {
  public:
    AWS_RESILIENCEHUB_API CreateAppVersionAppComponentResult();
    AWS_RESILIENCEHUB_API CreateAppVersionAppComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API CreateAppVersionAppComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const char* value) { m_appArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline CreateAppVersionAppComponentResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline CreateAppVersionAppComponentResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline CreateAppVersionAppComponentResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>List of Application Components that belong to this resource.</p>
     */
    inline const AppComponent& GetAppComponent() const{ return m_appComponent; }

    /**
     * <p>List of Application Components that belong to this resource.</p>
     */
    inline void SetAppComponent(const AppComponent& value) { m_appComponent = value; }

    /**
     * <p>List of Application Components that belong to this resource.</p>
     */
    inline void SetAppComponent(AppComponent&& value) { m_appComponent = std::move(value); }

    /**
     * <p>List of Application Components that belong to this resource.</p>
     */
    inline CreateAppVersionAppComponentResult& WithAppComponent(const AppComponent& value) { SetAppComponent(value); return *this;}

    /**
     * <p>List of Application Components that belong to this resource.</p>
     */
    inline CreateAppVersionAppComponentResult& WithAppComponent(AppComponent&& value) { SetAppComponent(std::move(value)); return *this;}


    /**
     * <p>Resilience Hub application version.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }

    /**
     * <p>Resilience Hub application version.</p>
     */
    inline void SetAppVersion(const Aws::String& value) { m_appVersion = value; }

    /**
     * <p>Resilience Hub application version.</p>
     */
    inline void SetAppVersion(Aws::String&& value) { m_appVersion = std::move(value); }

    /**
     * <p>Resilience Hub application version.</p>
     */
    inline void SetAppVersion(const char* value) { m_appVersion.assign(value); }

    /**
     * <p>Resilience Hub application version.</p>
     */
    inline CreateAppVersionAppComponentResult& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}

    /**
     * <p>Resilience Hub application version.</p>
     */
    inline CreateAppVersionAppComponentResult& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}

    /**
     * <p>Resilience Hub application version.</p>
     */
    inline CreateAppVersionAppComponentResult& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAppVersionAppComponentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAppVersionAppComponentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAppVersionAppComponentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_appArn;

    AppComponent m_appComponent;

    Aws::String m_appVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
