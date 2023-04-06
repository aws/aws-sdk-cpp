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
  class CreateServiceInstanceRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API CreateServiceInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceInstance"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The client token of the service instance to create.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client token of the service instance to create.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client token of the service instance to create.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client token of the service instance to create.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client token of the service instance to create.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client token of the service instance to create.</p>
     */
    inline CreateServiceInstanceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token of the service instance to create.</p>
     */
    inline CreateServiceInstanceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token of the service instance to create.</p>
     */
    inline CreateServiceInstanceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name of the service instance to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service instance to create.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the service instance to create.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the service instance to create.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the service instance to create.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the service instance to create.</p>
     */
    inline CreateServiceInstanceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service instance to create.</p>
     */
    inline CreateServiceInstanceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service instance to create.</p>
     */
    inline CreateServiceInstanceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the service the service instance is added to.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service the service instance is added to.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service the service instance is added to.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service the service instance is added to.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service the service instance is added to.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service the service instance is added to.</p>
     */
    inline CreateServiceInstanceRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service the service instance is added to.</p>
     */
    inline CreateServiceInstanceRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service the service instance is added to.</p>
     */
    inline CreateServiceInstanceRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The spec for the service instance you want to create.</p>
     */
    inline const Aws::String& GetSpec() const{ return m_spec; }

    /**
     * <p>The spec for the service instance you want to create.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>The spec for the service instance you want to create.</p>
     */
    inline void SetSpec(const Aws::String& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>The spec for the service instance you want to create.</p>
     */
    inline void SetSpec(Aws::String&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>The spec for the service instance you want to create.</p>
     */
    inline void SetSpec(const char* value) { m_specHasBeenSet = true; m_spec.assign(value); }

    /**
     * <p>The spec for the service instance you want to create.</p>
     */
    inline CreateServiceInstanceRequest& WithSpec(const Aws::String& value) { SetSpec(value); return *this;}

    /**
     * <p>The spec for the service instance you want to create.</p>
     */
    inline CreateServiceInstanceRequest& WithSpec(Aws::String&& value) { SetSpec(std::move(value)); return *this;}

    /**
     * <p>The spec for the service instance you want to create.</p>
     */
    inline CreateServiceInstanceRequest& WithSpec(const char* value) { SetSpec(value); return *this;}


    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service instance. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service instance. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service instance. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service instance. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service instance. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateServiceInstanceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service instance. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateServiceInstanceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service instance. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateServiceInstanceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service instance. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateServiceInstanceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>To create a new major and minor version of the service template,
     * <i>exclude</i> <code>major Version</code>.</p>
     */
    inline const Aws::String& GetTemplateMajorVersion() const{ return m_templateMajorVersion; }

    /**
     * <p>To create a new major and minor version of the service template,
     * <i>exclude</i> <code>major Version</code>.</p>
     */
    inline bool TemplateMajorVersionHasBeenSet() const { return m_templateMajorVersionHasBeenSet; }

    /**
     * <p>To create a new major and minor version of the service template,
     * <i>exclude</i> <code>major Version</code>.</p>
     */
    inline void SetTemplateMajorVersion(const Aws::String& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = value; }

    /**
     * <p>To create a new major and minor version of the service template,
     * <i>exclude</i> <code>major Version</code>.</p>
     */
    inline void SetTemplateMajorVersion(Aws::String&& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = std::move(value); }

    /**
     * <p>To create a new major and minor version of the service template,
     * <i>exclude</i> <code>major Version</code>.</p>
     */
    inline void SetTemplateMajorVersion(const char* value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion.assign(value); }

    /**
     * <p>To create a new major and minor version of the service template,
     * <i>exclude</i> <code>major Version</code>.</p>
     */
    inline CreateServiceInstanceRequest& WithTemplateMajorVersion(const Aws::String& value) { SetTemplateMajorVersion(value); return *this;}

    /**
     * <p>To create a new major and minor version of the service template,
     * <i>exclude</i> <code>major Version</code>.</p>
     */
    inline CreateServiceInstanceRequest& WithTemplateMajorVersion(Aws::String&& value) { SetTemplateMajorVersion(std::move(value)); return *this;}

    /**
     * <p>To create a new major and minor version of the service template,
     * <i>exclude</i> <code>major Version</code>.</p>
     */
    inline CreateServiceInstanceRequest& WithTemplateMajorVersion(const char* value) { SetTemplateMajorVersion(value); return *this;}


    /**
     * <p>To create a new minor version of the service template, include a <code>major
     * Version</code>.</p>
     */
    inline const Aws::String& GetTemplateMinorVersion() const{ return m_templateMinorVersion; }

    /**
     * <p>To create a new minor version of the service template, include a <code>major
     * Version</code>.</p>
     */
    inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }

    /**
     * <p>To create a new minor version of the service template, include a <code>major
     * Version</code>.</p>
     */
    inline void SetTemplateMinorVersion(const Aws::String& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = value; }

    /**
     * <p>To create a new minor version of the service template, include a <code>major
     * Version</code>.</p>
     */
    inline void SetTemplateMinorVersion(Aws::String&& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = std::move(value); }

    /**
     * <p>To create a new minor version of the service template, include a <code>major
     * Version</code>.</p>
     */
    inline void SetTemplateMinorVersion(const char* value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion.assign(value); }

    /**
     * <p>To create a new minor version of the service template, include a <code>major
     * Version</code>.</p>
     */
    inline CreateServiceInstanceRequest& WithTemplateMinorVersion(const Aws::String& value) { SetTemplateMinorVersion(value); return *this;}

    /**
     * <p>To create a new minor version of the service template, include a <code>major
     * Version</code>.</p>
     */
    inline CreateServiceInstanceRequest& WithTemplateMinorVersion(Aws::String&& value) { SetTemplateMinorVersion(std::move(value)); return *this;}

    /**
     * <p>To create a new minor version of the service template, include a <code>major
     * Version</code>.</p>
     */
    inline CreateServiceInstanceRequest& WithTemplateMinorVersion(const char* value) { SetTemplateMinorVersion(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_spec;
    bool m_specHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateMajorVersion;
    bool m_templateMajorVersionHasBeenSet = false;

    Aws::String m_templateMinorVersion;
    bool m_templateMinorVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
