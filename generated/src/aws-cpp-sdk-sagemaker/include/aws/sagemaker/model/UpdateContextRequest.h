/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateContextRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateContextRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContext"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the context to update.</p>
     */
    inline const Aws::String& GetContextName() const { return m_contextName; }
    inline bool ContextNameHasBeenSet() const { return m_contextNameHasBeenSet; }
    template<typename ContextNameT = Aws::String>
    void SetContextName(ContextNameT&& value) { m_contextNameHasBeenSet = true; m_contextName = std::forward<ContextNameT>(value); }
    template<typename ContextNameT = Aws::String>
    UpdateContextRequest& WithContextName(ContextNameT&& value) { SetContextName(std::forward<ContextNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description for the context.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateContextRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
    UpdateContextRequest& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
    UpdateContextRequest& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
      m_propertiesHasBeenSet = true; m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of properties to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPropertiesToRemove() const { return m_propertiesToRemove; }
    inline bool PropertiesToRemoveHasBeenSet() const { return m_propertiesToRemoveHasBeenSet; }
    template<typename PropertiesToRemoveT = Aws::Vector<Aws::String>>
    void SetPropertiesToRemove(PropertiesToRemoveT&& value) { m_propertiesToRemoveHasBeenSet = true; m_propertiesToRemove = std::forward<PropertiesToRemoveT>(value); }
    template<typename PropertiesToRemoveT = Aws::Vector<Aws::String>>
    UpdateContextRequest& WithPropertiesToRemove(PropertiesToRemoveT&& value) { SetPropertiesToRemove(std::forward<PropertiesToRemoveT>(value)); return *this;}
    template<typename PropertiesToRemoveT = Aws::String>
    UpdateContextRequest& AddPropertiesToRemove(PropertiesToRemoveT&& value) { m_propertiesToRemoveHasBeenSet = true; m_propertiesToRemove.emplace_back(std::forward<PropertiesToRemoveT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_contextName;
    bool m_contextNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_propertiesToRemove;
    bool m_propertiesToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
