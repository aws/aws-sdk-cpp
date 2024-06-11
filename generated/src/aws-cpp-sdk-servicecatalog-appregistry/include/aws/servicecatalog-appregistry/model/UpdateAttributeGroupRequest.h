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
    AWS_APPREGISTRY_API UpdateAttributeGroupRequest();

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
    inline const Aws::String& GetAttributeGroup() const{ return m_attributeGroup; }
    inline bool AttributeGroupHasBeenSet() const { return m_attributeGroupHasBeenSet; }
    inline void SetAttributeGroup(const Aws::String& value) { m_attributeGroupHasBeenSet = true; m_attributeGroup = value; }
    inline void SetAttributeGroup(Aws::String&& value) { m_attributeGroupHasBeenSet = true; m_attributeGroup = std::move(value); }
    inline void SetAttributeGroup(const char* value) { m_attributeGroupHasBeenSet = true; m_attributeGroup.assign(value); }
    inline UpdateAttributeGroupRequest& WithAttributeGroup(const Aws::String& value) { SetAttributeGroup(value); return *this;}
    inline UpdateAttributeGroupRequest& WithAttributeGroup(Aws::String&& value) { SetAttributeGroup(std::move(value)); return *this;}
    inline UpdateAttributeGroupRequest& WithAttributeGroup(const char* value) { SetAttributeGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the attribute group that the user provides.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateAttributeGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateAttributeGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateAttributeGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string in the form of nested key-value pairs that represent the
     * attributes in the group and describes an application and its components.</p>
     */
    inline const Aws::String& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline void SetAttributes(const char* value) { m_attributesHasBeenSet = true; m_attributes.assign(value); }
    inline UpdateAttributeGroupRequest& WithAttributes(const Aws::String& value) { SetAttributes(value); return *this;}
    inline UpdateAttributeGroupRequest& WithAttributes(Aws::String&& value) { SetAttributes(std::move(value)); return *this;}
    inline UpdateAttributeGroupRequest& WithAttributes(const char* value) { SetAttributes(value); return *this;}
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
