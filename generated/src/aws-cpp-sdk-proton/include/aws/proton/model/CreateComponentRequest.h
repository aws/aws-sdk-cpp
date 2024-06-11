/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class CreateComponentRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API CreateComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComponent"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The client token for the created component.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateComponentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateComponentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateComponentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional customer-provided description of the component.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateComponentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateComponentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateComponentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Proton environment that you want to associate this component
     * with. You must specify this when you don't specify
     * <code>serviceInstanceName</code> and <code>serviceName</code>.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline CreateComponentRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline CreateComponentRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline CreateComponentRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A path to a manifest file that lists the Infrastructure as Code (IaC) file,
     * template language, and rendering engine for infrastructure that a custom
     * component provisions.</p>
     */
    inline const Aws::String& GetManifest() const{ return m_manifest; }
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }
    inline void SetManifest(const Aws::String& value) { m_manifestHasBeenSet = true; m_manifest = value; }
    inline void SetManifest(Aws::String&& value) { m_manifestHasBeenSet = true; m_manifest = std::move(value); }
    inline void SetManifest(const char* value) { m_manifestHasBeenSet = true; m_manifest.assign(value); }
    inline CreateComponentRequest& WithManifest(const Aws::String& value) { SetManifest(value); return *this;}
    inline CreateComponentRequest& WithManifest(Aws::String&& value) { SetManifest(std::move(value)); return *this;}
    inline CreateComponentRequest& WithManifest(const char* value) { SetManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-provided name of the component.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateComponentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateComponentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateComponentRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service instance that you want to attach this component to.
     * If you don't specify this, the component isn't attached to any service instance.
     * Specify both <code>serviceInstanceName</code> and <code>serviceName</code> or
     * neither of them.</p>
     */
    inline const Aws::String& GetServiceInstanceName() const{ return m_serviceInstanceName; }
    inline bool ServiceInstanceNameHasBeenSet() const { return m_serviceInstanceNameHasBeenSet; }
    inline void SetServiceInstanceName(const Aws::String& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = value; }
    inline void SetServiceInstanceName(Aws::String&& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = std::move(value); }
    inline void SetServiceInstanceName(const char* value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName.assign(value); }
    inline CreateComponentRequest& WithServiceInstanceName(const Aws::String& value) { SetServiceInstanceName(value); return *this;}
    inline CreateComponentRequest& WithServiceInstanceName(Aws::String&& value) { SetServiceInstanceName(std::move(value)); return *this;}
    inline CreateComponentRequest& WithServiceInstanceName(const char* value) { SetServiceInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service that <code>serviceInstanceName</code> is associated
     * with. If you don't specify this, the component isn't attached to any service
     * instance. Specify both <code>serviceInstanceName</code> and
     * <code>serviceName</code> or neither of them.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline CreateComponentRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline CreateComponentRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline CreateComponentRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service spec that you want the component to use to access service inputs.
     * Set this only when you attach the component to a service instance.</p>
     */
    inline const Aws::String& GetServiceSpec() const{ return m_serviceSpec; }
    inline bool ServiceSpecHasBeenSet() const { return m_serviceSpecHasBeenSet; }
    inline void SetServiceSpec(const Aws::String& value) { m_serviceSpecHasBeenSet = true; m_serviceSpec = value; }
    inline void SetServiceSpec(Aws::String&& value) { m_serviceSpecHasBeenSet = true; m_serviceSpec = std::move(value); }
    inline void SetServiceSpec(const char* value) { m_serviceSpecHasBeenSet = true; m_serviceSpec.assign(value); }
    inline CreateComponentRequest& WithServiceSpec(const Aws::String& value) { SetServiceSpec(value); return *this;}
    inline CreateComponentRequest& WithServiceSpec(Aws::String&& value) { SetServiceSpec(std::move(value)); return *this;}
    inline CreateComponentRequest& WithServiceSpec(const char* value) { SetServiceSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * component. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateComponentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateComponentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateComponentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateComponentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A path to the Infrastructure as Code (IaC) file describing infrastructure
     * that a custom component provisions.</p>  <p>Components support a single
     * IaC file, even if you use Terraform as your template language.</p> 
     */
    inline const Aws::String& GetTemplateFile() const{ return m_templateFile; }
    inline bool TemplateFileHasBeenSet() const { return m_templateFileHasBeenSet; }
    inline void SetTemplateFile(const Aws::String& value) { m_templateFileHasBeenSet = true; m_templateFile = value; }
    inline void SetTemplateFile(Aws::String&& value) { m_templateFileHasBeenSet = true; m_templateFile = std::move(value); }
    inline void SetTemplateFile(const char* value) { m_templateFileHasBeenSet = true; m_templateFile.assign(value); }
    inline CreateComponentRequest& WithTemplateFile(const Aws::String& value) { SetTemplateFile(value); return *this;}
    inline CreateComponentRequest& WithTemplateFile(Aws::String&& value) { SetTemplateFile(std::move(value)); return *this;}
    inline CreateComponentRequest& WithTemplateFile(const char* value) { SetTemplateFile(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_manifest;
    bool m_manifestHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_serviceInstanceName;
    bool m_serviceInstanceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_serviceSpec;
    bool m_serviceSpecHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateFile;
    bool m_templateFileHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
