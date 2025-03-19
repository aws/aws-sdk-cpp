/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ResourceMapping.h>
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
  class AddDraftAppVersionResourceMappingsResult
  {
  public:
    AWS_RESILIENCEHUB_API AddDraftAppVersionResourceMappingsResult() = default;
    AWS_RESILIENCEHUB_API AddDraftAppVersionResourceMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API AddDraftAppVersionResourceMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    AddDraftAppVersionResourceMappingsResult& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::String& GetAppVersion() const { return m_appVersion; }
    template<typename AppVersionT = Aws::String>
    void SetAppVersion(AppVersionT&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::forward<AppVersionT>(value); }
    template<typename AppVersionT = Aws::String>
    AddDraftAppVersionResourceMappingsResult& WithAppVersion(AppVersionT&& value) { SetAppVersion(std::forward<AppVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of sources that are used to map a logical resource from the template to
     * a physical resource. You can use sources such as CloudFormation, Terraform state
     * files, AppRegistry applications, or Amazon EKS.</p>
     */
    inline const Aws::Vector<ResourceMapping>& GetResourceMappings() const { return m_resourceMappings; }
    template<typename ResourceMappingsT = Aws::Vector<ResourceMapping>>
    void SetResourceMappings(ResourceMappingsT&& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings = std::forward<ResourceMappingsT>(value); }
    template<typename ResourceMappingsT = Aws::Vector<ResourceMapping>>
    AddDraftAppVersionResourceMappingsResult& WithResourceMappings(ResourceMappingsT&& value) { SetResourceMappings(std::forward<ResourceMappingsT>(value)); return *this;}
    template<typename ResourceMappingsT = ResourceMapping>
    AddDraftAppVersionResourceMappingsResult& AddResourceMappings(ResourceMappingsT&& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings.emplace_back(std::forward<ResourceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddDraftAppVersionResourceMappingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_appVersion;
    bool m_appVersionHasBeenSet = false;

    Aws::Vector<ResourceMapping> m_resourceMappings;
    bool m_resourceMappingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
