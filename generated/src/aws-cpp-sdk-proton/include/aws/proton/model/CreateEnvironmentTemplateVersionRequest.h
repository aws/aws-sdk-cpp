/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/TemplateVersionSourceInput.h>
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
  class CreateEnvironmentTemplateVersionRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API CreateEnvironmentTemplateVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironmentTemplateVersion"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment template version that the first request
     * created.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment template version that the first request
     * created.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment template version that the first request
     * created.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment template version that the first request
     * created.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment template version that the first request
     * created.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment template version that the first request
     * created.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment template version that the first request
     * created.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the environment template version that the first request
     * created.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A description of the new version of an environment template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the new version of an environment template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the new version of an environment template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the new version of an environment template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the new version of an environment template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the new version of an environment template.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the new version of an environment template.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the new version of an environment template.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>To create a new minor version of the environment template, include
     * <code>major Version</code>.</p> <p>To create a new major and minor version of
     * the environment template, exclude <code>major Version</code>.</p>
     */
    inline const Aws::String& GetMajorVersion() const{ return m_majorVersion; }

    /**
     * <p>To create a new minor version of the environment template, include
     * <code>major Version</code>.</p> <p>To create a new major and minor version of
     * the environment template, exclude <code>major Version</code>.</p>
     */
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }

    /**
     * <p>To create a new minor version of the environment template, include
     * <code>major Version</code>.</p> <p>To create a new major and minor version of
     * the environment template, exclude <code>major Version</code>.</p>
     */
    inline void SetMajorVersion(const Aws::String& value) { m_majorVersionHasBeenSet = true; m_majorVersion = value; }

    /**
     * <p>To create a new minor version of the environment template, include
     * <code>major Version</code>.</p> <p>To create a new major and minor version of
     * the environment template, exclude <code>major Version</code>.</p>
     */
    inline void SetMajorVersion(Aws::String&& value) { m_majorVersionHasBeenSet = true; m_majorVersion = std::move(value); }

    /**
     * <p>To create a new minor version of the environment template, include
     * <code>major Version</code>.</p> <p>To create a new major and minor version of
     * the environment template, exclude <code>major Version</code>.</p>
     */
    inline void SetMajorVersion(const char* value) { m_majorVersionHasBeenSet = true; m_majorVersion.assign(value); }

    /**
     * <p>To create a new minor version of the environment template, include
     * <code>major Version</code>.</p> <p>To create a new major and minor version of
     * the environment template, exclude <code>major Version</code>.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithMajorVersion(const Aws::String& value) { SetMajorVersion(value); return *this;}

    /**
     * <p>To create a new minor version of the environment template, include
     * <code>major Version</code>.</p> <p>To create a new major and minor version of
     * the environment template, exclude <code>major Version</code>.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithMajorVersion(Aws::String&& value) { SetMajorVersion(std::move(value)); return *this;}

    /**
     * <p>To create a new minor version of the environment template, include
     * <code>major Version</code>.</p> <p>To create a new major and minor version of
     * the environment template, exclude <code>major Version</code>.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithMajorVersion(const char* value) { SetMajorVersion(value); return *this;}


    /**
     * <p>An object that includes the template bundle S3 bucket path and name for the
     * new version of an template.</p>
     */
    inline const TemplateVersionSourceInput& GetSource() const{ return m_source; }

    /**
     * <p>An object that includes the template bundle S3 bucket path and name for the
     * new version of an template.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>An object that includes the template bundle S3 bucket path and name for the
     * new version of an template.</p>
     */
    inline void SetSource(const TemplateVersionSourceInput& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>An object that includes the template bundle S3 bucket path and name for the
     * new version of an template.</p>
     */
    inline void SetSource(TemplateVersionSourceInput&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>An object that includes the template bundle S3 bucket path and name for the
     * new version of an template.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithSource(const TemplateVersionSourceInput& value) { SetSource(value); return *this;}

    /**
     * <p>An object that includes the template bundle S3 bucket path and name for the
     * new version of an template.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithSource(TemplateVersionSourceInput&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment template version. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment template version. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment template version. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment template version. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment template version. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment template version. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment template version. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * environment template version. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the environment template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the environment template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the environment template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the environment template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the environment template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the environment template.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the environment template.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment template.</p>
     */
    inline CreateEnvironmentTemplateVersionRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_majorVersion;
    bool m_majorVersionHasBeenSet = false;

    TemplateVersionSourceInput m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
