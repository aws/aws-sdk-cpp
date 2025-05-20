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
  class UpdateLinkRequest : public OAMRequest
  {
  public:
    AWS_OAM_API UpdateLinkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLink"; }

    AWS_OAM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the link that you want to update.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateLinkRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include the tags associated with the link in the
     * response after the update operation. When <code>IncludeTags</code> is set to
     * <code>true</code> and the caller has the required permission,
     * <code>oam:ListTagsForResource</code>, the API will return the tags for the
     * specified resource. If the caller doesn't have the required permission,
     * <code>oam:ListTagsForResource</code>, the API will raise an exception. </p>
     * <p>The default value is <code>false</code>.</p>
     */
    inline bool GetIncludeTags() const { return m_includeTags; }
    inline bool IncludeTagsHasBeenSet() const { return m_includeTagsHasBeenSet; }
    inline void SetIncludeTags(bool value) { m_includeTagsHasBeenSet = true; m_includeTags = value; }
    inline UpdateLinkRequest& WithIncludeTags(bool value) { SetIncludeTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this structure to filter which metric namespaces and which log groups are
     * to be shared from the source account to the monitoring account.</p>
     */
    inline const LinkConfiguration& GetLinkConfiguration() const { return m_linkConfiguration; }
    inline bool LinkConfigurationHasBeenSet() const { return m_linkConfigurationHasBeenSet; }
    template<typename LinkConfigurationT = LinkConfiguration>
    void SetLinkConfiguration(LinkConfigurationT&& value) { m_linkConfigurationHasBeenSet = true; m_linkConfiguration = std::forward<LinkConfigurationT>(value); }
    template<typename LinkConfigurationT = LinkConfiguration>
    UpdateLinkRequest& WithLinkConfiguration(LinkConfigurationT&& value) { SetLinkConfiguration(std::forward<LinkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that define which types of data that the source account
     * will send to the monitoring account.</p> <p>Your input here replaces the current
     * set of data types that are shared.</p>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<ResourceType>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<ResourceType>>
    UpdateLinkRequest& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    inline UpdateLinkRequest& AddResourceTypes(ResourceType value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    bool m_includeTags{false};
    bool m_includeTagsHasBeenSet = false;

    LinkConfiguration m_linkConfiguration;
    bool m_linkConfigurationHasBeenSet = false;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
