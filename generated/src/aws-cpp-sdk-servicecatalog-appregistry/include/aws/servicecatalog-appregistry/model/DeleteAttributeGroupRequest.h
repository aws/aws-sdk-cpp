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
  class DeleteAttributeGroupRequest : public AppRegistryRequest
  {
  public:
    AWS_APPREGISTRY_API DeleteAttributeGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAttributeGroup"; }

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
    DeleteAttributeGroupRequest& WithAttributeGroup(AttributeGroupT&& value) { SetAttributeGroup(std::forward<AttributeGroupT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attributeGroup;
    bool m_attributeGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
