/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/Provisioning.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class CreateServiceTemplateRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API CreateServiceTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceTemplate"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A description of the service template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateServiceTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service template as displayed in the developer interface.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateServiceTemplateRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A customer provided encryption key that's used to encrypt data.</p>
     */
    inline const Aws::String& GetEncryptionKey() const { return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    template<typename EncryptionKeyT = Aws::String>
    void SetEncryptionKey(EncryptionKeyT&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::forward<EncryptionKeyT>(value); }
    template<typename EncryptionKeyT = Aws::String>
    CreateServiceTemplateRequest& WithEncryptionKey(EncryptionKeyT&& value) { SetEncryptionKey(std::forward<EncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service template.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateServiceTemplateRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default, Proton provides a service pipeline for your service. When this
     * parameter is included, it indicates that an Proton service pipeline <i>isn't</i>
     * provided for your service. After it's included, it <i>can't</i> be changed. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-template-authoring.html#ag-template-bundles">Template
     * bundles</a> in the <i>Proton User Guide</i>.</p>
     */
    inline Provisioning GetPipelineProvisioning() const { return m_pipelineProvisioning; }
    inline bool PipelineProvisioningHasBeenSet() const { return m_pipelineProvisioningHasBeenSet; }
    inline void SetPipelineProvisioning(Provisioning value) { m_pipelineProvisioningHasBeenSet = true; m_pipelineProvisioning = value; }
    inline CreateServiceTemplateRequest& WithPipelineProvisioning(Provisioning value) { SetPipelineProvisioning(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service template. A tag is a key-value pair.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateServiceTemplateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateServiceTemplateRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Provisioning m_pipelineProvisioning{Provisioning::NOT_SET};
    bool m_pipelineProvisioningHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
