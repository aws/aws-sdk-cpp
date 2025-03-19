/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ResourceMapping.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class AddDraftAppVersionResourceMappingsRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API AddDraftAppVersionResourceMappingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddDraftAppVersionResourceMappings"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


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
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    AddDraftAppVersionResourceMappingsRequest& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline const Aws::Vector<ResourceMapping>& GetResourceMappings() const { return m_resourceMappings; }
    inline bool ResourceMappingsHasBeenSet() const { return m_resourceMappingsHasBeenSet; }
    template<typename ResourceMappingsT = Aws::Vector<ResourceMapping>>
    void SetResourceMappings(ResourceMappingsT&& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings = std::forward<ResourceMappingsT>(value); }
    template<typename ResourceMappingsT = Aws::Vector<ResourceMapping>>
    AddDraftAppVersionResourceMappingsRequest& WithResourceMappings(ResourceMappingsT&& value) { SetResourceMappings(std::forward<ResourceMappingsT>(value)); return *this;}
    template<typename ResourceMappingsT = ResourceMapping>
    AddDraftAppVersionResourceMappingsRequest& AddResourceMappings(ResourceMappingsT&& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings.emplace_back(std::forward<ResourceMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::Vector<ResourceMapping> m_resourceMappings;
    bool m_resourceMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
