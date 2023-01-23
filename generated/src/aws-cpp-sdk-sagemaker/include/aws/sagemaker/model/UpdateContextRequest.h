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
    AWS_SAGEMAKER_API UpdateContextRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContext"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the context to update.</p>
     */
    inline const Aws::String& GetContextName() const{ return m_contextName; }

    /**
     * <p>The name of the context to update.</p>
     */
    inline bool ContextNameHasBeenSet() const { return m_contextNameHasBeenSet; }

    /**
     * <p>The name of the context to update.</p>
     */
    inline void SetContextName(const Aws::String& value) { m_contextNameHasBeenSet = true; m_contextName = value; }

    /**
     * <p>The name of the context to update.</p>
     */
    inline void SetContextName(Aws::String&& value) { m_contextNameHasBeenSet = true; m_contextName = std::move(value); }

    /**
     * <p>The name of the context to update.</p>
     */
    inline void SetContextName(const char* value) { m_contextNameHasBeenSet = true; m_contextName.assign(value); }

    /**
     * <p>The name of the context to update.</p>
     */
    inline UpdateContextRequest& WithContextName(const Aws::String& value) { SetContextName(value); return *this;}

    /**
     * <p>The name of the context to update.</p>
     */
    inline UpdateContextRequest& WithContextName(Aws::String&& value) { SetContextName(std::move(value)); return *this;}

    /**
     * <p>The name of the context to update.</p>
     */
    inline UpdateContextRequest& WithContextName(const char* value) { SetContextName(value); return *this;}


    /**
     * <p>The new description for the context.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The new description for the context.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The new description for the context.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The new description for the context.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The new description for the context.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The new description for the context.</p>
     */
    inline UpdateContextRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The new description for the context.</p>
     */
    inline UpdateContextRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The new description for the context.</p>
     */
    inline UpdateContextRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }

    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline UpdateContextRequest& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}

    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline UpdateContextRequest& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline UpdateContextRequest& AddProperties(const Aws::String& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }

    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline UpdateContextRequest& AddProperties(Aws::String&& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline UpdateContextRequest& AddProperties(const Aws::String& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline UpdateContextRequest& AddProperties(Aws::String&& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline UpdateContextRequest& AddProperties(const char* key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline UpdateContextRequest& AddProperties(Aws::String&& key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline UpdateContextRequest& AddProperties(const char* key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }


    /**
     * <p>A list of properties to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPropertiesToRemove() const{ return m_propertiesToRemove; }

    /**
     * <p>A list of properties to remove.</p>
     */
    inline bool PropertiesToRemoveHasBeenSet() const { return m_propertiesToRemoveHasBeenSet; }

    /**
     * <p>A list of properties to remove.</p>
     */
    inline void SetPropertiesToRemove(const Aws::Vector<Aws::String>& value) { m_propertiesToRemoveHasBeenSet = true; m_propertiesToRemove = value; }

    /**
     * <p>A list of properties to remove.</p>
     */
    inline void SetPropertiesToRemove(Aws::Vector<Aws::String>&& value) { m_propertiesToRemoveHasBeenSet = true; m_propertiesToRemove = std::move(value); }

    /**
     * <p>A list of properties to remove.</p>
     */
    inline UpdateContextRequest& WithPropertiesToRemove(const Aws::Vector<Aws::String>& value) { SetPropertiesToRemove(value); return *this;}

    /**
     * <p>A list of properties to remove.</p>
     */
    inline UpdateContextRequest& WithPropertiesToRemove(Aws::Vector<Aws::String>&& value) { SetPropertiesToRemove(std::move(value)); return *this;}

    /**
     * <p>A list of properties to remove.</p>
     */
    inline UpdateContextRequest& AddPropertiesToRemove(const Aws::String& value) { m_propertiesToRemoveHasBeenSet = true; m_propertiesToRemove.push_back(value); return *this; }

    /**
     * <p>A list of properties to remove.</p>
     */
    inline UpdateContextRequest& AddPropertiesToRemove(Aws::String&& value) { m_propertiesToRemoveHasBeenSet = true; m_propertiesToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of properties to remove.</p>
     */
    inline UpdateContextRequest& AddPropertiesToRemove(const char* value) { m_propertiesToRemoveHasBeenSet = true; m_propertiesToRemove.push_back(value); return *this; }

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
