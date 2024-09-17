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
  class UpdateAppVersionAppComponentResult
  {
  public:
    AWS_RESILIENCEHUB_API UpdateAppVersionAppComponentResult();
    AWS_RESILIENCEHUB_API UpdateAppVersionAppComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API UpdateAppVersionAppComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateAppVersionAppComponentResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline UpdateAppVersionAppComponentResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline UpdateAppVersionAppComponentResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of Application Components that belong to this resource.</p>
     */
    inline const AppComponent& GetAppComponent() const{ return m_appComponent; }
    inline void SetAppComponent(const AppComponent& value) { m_appComponent = value; }
    inline void SetAppComponent(AppComponent&& value) { m_appComponent = std::move(value); }
    inline UpdateAppVersionAppComponentResult& WithAppComponent(const AppComponent& value) { SetAppComponent(value); return *this;}
    inline UpdateAppVersionAppComponentResult& WithAppComponent(AppComponent&& value) { SetAppComponent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resilience Hub application version.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }
    inline void SetAppVersion(const Aws::String& value) { m_appVersion = value; }
    inline void SetAppVersion(Aws::String&& value) { m_appVersion = std::move(value); }
    inline void SetAppVersion(const char* value) { m_appVersion.assign(value); }
    inline UpdateAppVersionAppComponentResult& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}
    inline UpdateAppVersionAppComponentResult& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}
    inline UpdateAppVersionAppComponentResult& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateAppVersionAppComponentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateAppVersionAppComponentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateAppVersionAppComponentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appArn;

    AppComponent m_appComponent;

    Aws::String m_appVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
