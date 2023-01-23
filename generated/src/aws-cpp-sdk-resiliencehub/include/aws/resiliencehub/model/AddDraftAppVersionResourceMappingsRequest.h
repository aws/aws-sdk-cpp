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
    AWS_RESILIENCEHUB_API AddDraftAppVersionResourceMappingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddDraftAppVersionResourceMappings"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


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
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AddDraftAppVersionResourceMappingsRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AddDraftAppVersionResourceMappingsRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline AddDraftAppVersionResourceMappingsRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p> Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline const Aws::Vector<ResourceMapping>& GetResourceMappings() const{ return m_resourceMappings; }

    /**
     * <p> Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline bool ResourceMappingsHasBeenSet() const { return m_resourceMappingsHasBeenSet; }

    /**
     * <p> Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline void SetResourceMappings(const Aws::Vector<ResourceMapping>& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings = value; }

    /**
     * <p> Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline void SetResourceMappings(Aws::Vector<ResourceMapping>&& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings = std::move(value); }

    /**
     * <p> Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline AddDraftAppVersionResourceMappingsRequest& WithResourceMappings(const Aws::Vector<ResourceMapping>& value) { SetResourceMappings(value); return *this;}

    /**
     * <p> Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline AddDraftAppVersionResourceMappingsRequest& WithResourceMappings(Aws::Vector<ResourceMapping>&& value) { SetResourceMappings(std::move(value)); return *this;}

    /**
     * <p> Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline AddDraftAppVersionResourceMappingsRequest& AddResourceMappings(const ResourceMapping& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings.push_back(value); return *this; }

    /**
     * <p> Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline AddDraftAppVersionResourceMappingsRequest& AddResourceMappings(ResourceMapping&& value) { m_resourceMappingsHasBeenSet = true; m_resourceMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::Vector<ResourceMapping> m_resourceMappings;
    bool m_resourceMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
