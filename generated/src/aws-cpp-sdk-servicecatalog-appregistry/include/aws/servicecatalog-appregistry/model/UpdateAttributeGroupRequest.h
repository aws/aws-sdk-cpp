/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/AppRegistryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

  /**
   */
  class UpdateAttributeGroupRequest : public AppRegistryRequest
  {
  public:
    AWS_APPREGISTRY_API UpdateAttributeGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAttributeGroup"; }

    AWS_APPREGISTRY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The name, ID, or ARN of the attribute group that holds the attributes to
     * describe the application. </p>
     */
    inline const Aws::String& GetAttributeGroup() const { return m_attributeGroup; }
    inline bool AttributeGroupHasBeenSet() const { return m_attributeGroupHasBeenSet; }
    template<typename AttributeGroupT = Aws::String>
    void SetAttributeGroup(AttributeGroupT&& value) { m_attributeGroupHasBeenSet = true; m_attributeGroup = std::forward<AttributeGroupT>(value); }
    template<typename AttributeGroupT = Aws::String>
    UpdateAttributeGroupRequest& WithAttributeGroup(AttributeGroupT&& value) { SetAttributeGroup(std::forward<AttributeGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateAttributeGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string in the form of nested key-value pairs that represent the
     * attributes in the group and describes an application and its components.</p>
     */
    inline const Aws::String& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::String>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::String>
    UpdateAttributeGroupRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attributeGroup;
    bool m_attributeGroupHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
