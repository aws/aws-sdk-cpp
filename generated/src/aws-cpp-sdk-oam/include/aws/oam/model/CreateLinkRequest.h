/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/oam/OAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/oam/model/LinkConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/oam/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace OAM
{
namespace Model
{

  /**
   */
  class CreateLinkRequest : public OAMRequest
  {
  public:
    AWS_OAM_API CreateLinkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLink"; }

    AWS_OAM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specify a friendly human-readable name to use to identify this source account
     * when you are viewing data from it in the monitoring account.</p> <p>You can use
     * a custom label or use the following variables:</p> <ul> <li> <p>
     * <code>$AccountName</code> is the name of the account</p> </li> <li> <p>
     * <code>$AccountEmail</code> is the globally unique email address of the
     * account</p> </li> <li> <p> <code>$AccountEmailNoDomain</code> is the email
     * address of the account without the domain name</p> </li> </ul>  <p>In the
     * Amazon Web Services GovCloud (US-East) and Amazon Web Services GovCloud
     * (US-West) Regions, the only supported option is to use custom labels, and the
     * <code>$AccountName</code>, <code>$AccountEmail</code>, and
     * <code>$AccountEmailNoDomain</code> variables all resolve as <i>account-id</i>
     * instead of the specified variable.</p> 
     */
    inline const Aws::String& GetLabelTemplate() const { return m_labelTemplate; }
    inline bool LabelTemplateHasBeenSet() const { return m_labelTemplateHasBeenSet; }
    template<typename LabelTemplateT = Aws::String>
    void SetLabelTemplate(LabelTemplateT&& value) { m_labelTemplateHasBeenSet = true; m_labelTemplate = std::forward<LabelTemplateT>(value); }
    template<typename LabelTemplateT = Aws::String>
    CreateLinkRequest& WithLabelTemplate(LabelTemplateT&& value) { SetLabelTemplate(std::forward<LabelTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this structure to optionally create filters that specify that only some
     * metric namespaces or log groups are to be shared from the source account to the
     * monitoring account.</p>
     */
    inline const LinkConfiguration& GetLinkConfiguration() const { return m_linkConfiguration; }
    inline bool LinkConfigurationHasBeenSet() const { return m_linkConfigurationHasBeenSet; }
    template<typename LinkConfigurationT = LinkConfiguration>
    void SetLinkConfiguration(LinkConfigurationT&& value) { m_linkConfigurationHasBeenSet = true; m_linkConfiguration = std::forward<LinkConfigurationT>(value); }
    template<typename LinkConfigurationT = LinkConfiguration>
    CreateLinkRequest& WithLinkConfiguration(LinkConfigurationT&& value) { SetLinkConfiguration(std::forward<LinkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that define which types of data that the source account
     * shares with the monitoring account.</p>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<ResourceType>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<ResourceType>>
    CreateLinkRequest& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    inline CreateLinkRequest& AddResourceTypes(ResourceType value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the sink to use to create this link. You can use <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_ListSinks.html">ListSinks</a>
     * to find the ARNs of sinks.</p> <p>For more information about sinks, see <a
     * href="https://docs.aws.amazon.com/OAM/latest/APIReference/API_CreateSink.html">CreateSink</a>.</p>
     */
    inline const Aws::String& GetSinkIdentifier() const { return m_sinkIdentifier; }
    inline bool SinkIdentifierHasBeenSet() const { return m_sinkIdentifierHasBeenSet; }
    template<typename SinkIdentifierT = Aws::String>
    void SetSinkIdentifier(SinkIdentifierT&& value) { m_sinkIdentifierHasBeenSet = true; m_sinkIdentifier = std::forward<SinkIdentifierT>(value); }
    template<typename SinkIdentifierT = Aws::String>
    CreateLinkRequest& WithSinkIdentifier(SinkIdentifierT&& value) { SetSinkIdentifier(std::forward<SinkIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Assigns one or more tags (key-value pairs) to the link. </p> <p>Tags can help
     * you organize and categorize your resources. You can also use them to scope user
     * permissions by granting a user permission to access or change only resources
     * with certain tag values.</p> <p>For more information about using tags to control
     * access, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
     * access to Amazon Web Services resources using tags</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateLinkRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateLinkRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_labelTemplate;
    bool m_labelTemplateHasBeenSet = false;

    LinkConfiguration m_linkConfiguration;
    bool m_linkConfigurationHasBeenSet = false;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::String m_sinkIdentifier;
    bool m_sinkIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
