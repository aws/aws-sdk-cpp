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
  class ResolveAppVersionResourcesResult
  {
  public:
    AWS_RESILIENCEHUB_API ResolveAppVersionResourcesResult() = default;
    AWS_RESILIENCEHUB_API ResolveAppVersionResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ResolveAppVersionResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    ResolveAppVersionResourcesResult& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::String& GetAppVersion() const { return m_appVersion; }
    template<typename AppVersionT = Aws::String>
    void SetAppVersion(AppVersionT&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::forward<AppVersionT>(value); }
    template<typename AppVersionT = Aws::String>
    ResolveAppVersionResourcesResult& WithAppVersion(AppVersionT&& value) { SetAppVersion(std::forward<AppVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline const Aws::String& GetResolutionId() const { return m_resolutionId; }
    template<typename ResolutionIdT = Aws::String>
    void SetResolutionId(ResolutionIdT&& value) { m_resolutionIdHasBeenSet = true; m_resolutionId = std::forward<ResolutionIdT>(value); }
    template<typename ResolutionIdT = Aws::String>
    ResolveAppVersionResourcesResult& WithResolutionId(ResolutionIdT&& value) { SetResolutionId(std::forward<ResolutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the action.</p>
     */
    inline ResourceResolutionStatusType GetStatus() const { return m_status; }
    inline void SetStatus(ResourceResolutionStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResolveAppVersionResourcesResult& WithStatus(ResourceResolutionStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ResolveAppVersionResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_appVersion;
    bool m_appVersionHasBeenSet = false;

    Aws::String m_resolutionId;
    bool m_resolutionIdHasBeenSet = false;

    ResourceResolutionStatusType m_status{ResourceResolutionStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
