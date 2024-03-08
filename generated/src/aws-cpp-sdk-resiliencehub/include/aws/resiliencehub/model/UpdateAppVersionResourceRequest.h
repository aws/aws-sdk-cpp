/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/LogicalResourceId.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class UpdateAppVersionResourceRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API UpdateAppVersionResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAppVersionResource"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>Currently, there is no supported additional information for resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAdditionalInfo() const{ return m_additionalInfo; }

    /**
     * <p>Currently, there is no supported additional information for resources.</p>
     */
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }

    /**
     * <p>Currently, there is no supported additional information for resources.</p>
     */
    inline void SetAdditionalInfo(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }

    /**
     * <p>Currently, there is no supported additional information for resources.</p>
     */
    inline void SetAdditionalInfo(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }

    /**
     * <p>Currently, there is no supported additional information for resources.</p>
     */
    inline UpdateAppVersionResourceRequest& WithAdditionalInfo(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAdditionalInfo(value); return *this;}

    /**
     * <p>Currently, there is no supported additional information for resources.</p>
     */
    inline UpdateAppVersionResourceRequest& WithAdditionalInfo(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAdditionalInfo(std::move(value)); return *this;}

    /**
     * <p>Currently, there is no supported additional information for resources.</p>
     */
    inline UpdateAppVersionResourceRequest& AddAdditionalInfo(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, value); return *this; }

    /**
     * <p>Currently, there is no supported additional information for resources.</p>
     */
    inline UpdateAppVersionResourceRequest& AddAdditionalInfo(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(std::move(key), value); return *this; }

    /**
     * <p>Currently, there is no supported additional information for resources.</p>
     */
    inline UpdateAppVersionResourceRequest& AddAdditionalInfo(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Currently, there is no supported additional information for resources.</p>
     */
    inline UpdateAppVersionResourceRequest& AddAdditionalInfo(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Currently, there is no supported additional information for resources.</p>
     */
    inline UpdateAppVersionResourceRequest& AddAdditionalInfo(const char* key, Aws::Vector<Aws::String>&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Currently, there is no supported additional information for resources.</p>
     */
    inline UpdateAppVersionResourceRequest& AddAdditionalInfo(const char* key, const Aws::Vector<Aws::String>& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.emplace(key, value); return *this; }


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
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline UpdateAppVersionResourceRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline UpdateAppVersionResourceRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline UpdateAppVersionResourceRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>List of Application Components that this resource belongs to. If an
     * Application Component is not part of the Resilience Hub application, it will be
     * added.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAppComponents() const{ return m_appComponents; }

    /**
     * <p>List of Application Components that this resource belongs to. If an
     * Application Component is not part of the Resilience Hub application, it will be
     * added.</p>
     */
    inline bool AppComponentsHasBeenSet() const { return m_appComponentsHasBeenSet; }

    /**
     * <p>List of Application Components that this resource belongs to. If an
     * Application Component is not part of the Resilience Hub application, it will be
     * added.</p>
     */
    inline void SetAppComponents(const Aws::Vector<Aws::String>& value) { m_appComponentsHasBeenSet = true; m_appComponents = value; }

    /**
     * <p>List of Application Components that this resource belongs to. If an
     * Application Component is not part of the Resilience Hub application, it will be
     * added.</p>
     */
    inline void SetAppComponents(Aws::Vector<Aws::String>&& value) { m_appComponentsHasBeenSet = true; m_appComponents = std::move(value); }

    /**
     * <p>List of Application Components that this resource belongs to. If an
     * Application Component is not part of the Resilience Hub application, it will be
     * added.</p>
     */
    inline UpdateAppVersionResourceRequest& WithAppComponents(const Aws::Vector<Aws::String>& value) { SetAppComponents(value); return *this;}

    /**
     * <p>List of Application Components that this resource belongs to. If an
     * Application Component is not part of the Resilience Hub application, it will be
     * added.</p>
     */
    inline UpdateAppVersionResourceRequest& WithAppComponents(Aws::Vector<Aws::String>&& value) { SetAppComponents(std::move(value)); return *this;}

    /**
     * <p>List of Application Components that this resource belongs to. If an
     * Application Component is not part of the Resilience Hub application, it will be
     * added.</p>
     */
    inline UpdateAppVersionResourceRequest& AddAppComponents(const Aws::String& value) { m_appComponentsHasBeenSet = true; m_appComponents.push_back(value); return *this; }

    /**
     * <p>List of Application Components that this resource belongs to. If an
     * Application Component is not part of the Resilience Hub application, it will be
     * added.</p>
     */
    inline UpdateAppVersionResourceRequest& AddAppComponents(Aws::String&& value) { m_appComponentsHasBeenSet = true; m_appComponents.push_back(std::move(value)); return *this; }

    /**
     * <p>List of Application Components that this resource belongs to. If an
     * Application Component is not part of the Resilience Hub application, it will be
     * added.</p>
     */
    inline UpdateAppVersionResourceRequest& AddAppComponents(const char* value) { m_appComponentsHasBeenSet = true; m_appComponents.push_back(value); return *this; }


    /**
     * <p>Amazon Web Services account that owns the physical resource.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>Amazon Web Services account that owns the physical resource.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>Amazon Web Services account that owns the physical resource.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>Amazon Web Services account that owns the physical resource.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>Amazon Web Services account that owns the physical resource.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>Amazon Web Services account that owns the physical resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>Amazon Web Services account that owns the physical resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>Amazon Web Services account that owns the physical resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>Amazon Web Services region that owns the physical resource.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>Amazon Web Services region that owns the physical resource.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>Amazon Web Services region that owns the physical resource.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>Amazon Web Services region that owns the physical resource.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>Amazon Web Services region that owns the physical resource.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>Amazon Web Services region that owns the physical resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>Amazon Web Services region that owns the physical resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>Amazon Web Services region that owns the physical resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>Indicates if a resource is excluded from an Resilience Hub application.</p>
     *  <p>You can exclude only imported resources from an Resilience Hub
     * application.</p> 
     */
    inline bool GetExcluded() const{ return m_excluded; }

    /**
     * <p>Indicates if a resource is excluded from an Resilience Hub application.</p>
     *  <p>You can exclude only imported resources from an Resilience Hub
     * application.</p> 
     */
    inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }

    /**
     * <p>Indicates if a resource is excluded from an Resilience Hub application.</p>
     *  <p>You can exclude only imported resources from an Resilience Hub
     * application.</p> 
     */
    inline void SetExcluded(bool value) { m_excludedHasBeenSet = true; m_excluded = value; }

    /**
     * <p>Indicates if a resource is excluded from an Resilience Hub application.</p>
     *  <p>You can exclude only imported resources from an Resilience Hub
     * application.</p> 
     */
    inline UpdateAppVersionResourceRequest& WithExcluded(bool value) { SetExcluded(value); return *this;}


    /**
     * <p>Logical identifier of the resource.</p>
     */
    inline const LogicalResourceId& GetLogicalResourceId() const{ return m_logicalResourceId; }

    /**
     * <p>Logical identifier of the resource.</p>
     */
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }

    /**
     * <p>Logical identifier of the resource.</p>
     */
    inline void SetLogicalResourceId(const LogicalResourceId& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>Logical identifier of the resource.</p>
     */
    inline void SetLogicalResourceId(LogicalResourceId&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }

    /**
     * <p>Logical identifier of the resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithLogicalResourceId(const LogicalResourceId& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>Logical identifier of the resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithLogicalResourceId(LogicalResourceId&& value) { SetLogicalResourceId(std::move(value)); return *this;}


    /**
     * <p>Physical identifier of the resource.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const{ return m_physicalResourceId; }

    /**
     * <p>Physical identifier of the resource.</p>
     */
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }

    /**
     * <p>Physical identifier of the resource.</p>
     */
    inline void SetPhysicalResourceId(const Aws::String& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>Physical identifier of the resource.</p>
     */
    inline void SetPhysicalResourceId(Aws::String&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }

    /**
     * <p>Physical identifier of the resource.</p>
     */
    inline void SetPhysicalResourceId(const char* value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId.assign(value); }

    /**
     * <p>Physical identifier of the resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>Physical identifier of the resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(std::move(value)); return *this;}

    /**
     * <p>Physical identifier of the resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}


    /**
     * <p>Name of the resource.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>Name of the resource.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>Name of the resource.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>Name of the resource.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>Name of the resource.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>Name of the resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>Name of the resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>Name of the resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>Type of resource.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Type of resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Type of resource.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Type of resource.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Type of resource.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Type of resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Type of resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Type of resource.</p>
     */
    inline UpdateAppVersionResourceRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_appComponents;
    bool m_appComponentsHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    bool m_excluded;
    bool m_excludedHasBeenSet = false;

    LogicalResourceId m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
