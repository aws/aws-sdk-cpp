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
    AWS_OAM_API UpdateLinkRequest();

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
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateLinkRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateLinkRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateLinkRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this structure to filter which metric namespaces and which log groups are
     * to be shared from the source account to the monitoring account.</p>
     */
    inline const LinkConfiguration& GetLinkConfiguration() const{ return m_linkConfiguration; }
    inline bool LinkConfigurationHasBeenSet() const { return m_linkConfigurationHasBeenSet; }
    inline void SetLinkConfiguration(const LinkConfiguration& value) { m_linkConfigurationHasBeenSet = true; m_linkConfiguration = value; }
    inline void SetLinkConfiguration(LinkConfiguration&& value) { m_linkConfigurationHasBeenSet = true; m_linkConfiguration = std::move(value); }
    inline UpdateLinkRequest& WithLinkConfiguration(const LinkConfiguration& value) { SetLinkConfiguration(value); return *this;}
    inline UpdateLinkRequest& WithLinkConfiguration(LinkConfiguration&& value) { SetLinkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that define which types of data that the source account
     * will send to the monitoring account.</p> <p>Your input here replaces the current
     * set of data types that are shared.</p>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const{ return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    inline void SetResourceTypes(const Aws::Vector<ResourceType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }
    inline void SetResourceTypes(Aws::Vector<ResourceType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }
    inline UpdateLinkRequest& WithResourceTypes(const Aws::Vector<ResourceType>& value) { SetResourceTypes(value); return *this;}
    inline UpdateLinkRequest& WithResourceTypes(Aws::Vector<ResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}
    inline UpdateLinkRequest& AddResourceTypes(const ResourceType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    inline UpdateLinkRequest& AddResourceTypes(ResourceType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    LinkConfiguration m_linkConfiguration;
    bool m_linkConfigurationHasBeenSet = false;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
