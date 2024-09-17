/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ContextSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateContextRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateContextRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContext"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the context. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetContextName() const{ return m_contextName; }
    inline bool ContextNameHasBeenSet() const { return m_contextNameHasBeenSet; }
    inline void SetContextName(const Aws::String& value) { m_contextNameHasBeenSet = true; m_contextName = value; }
    inline void SetContextName(Aws::String&& value) { m_contextNameHasBeenSet = true; m_contextName = std::move(value); }
    inline void SetContextName(const char* value) { m_contextNameHasBeenSet = true; m_contextName.assign(value); }
    inline CreateContextRequest& WithContextName(const Aws::String& value) { SetContextName(value); return *this;}
    inline CreateContextRequest& WithContextName(Aws::String&& value) { SetContextName(std::move(value)); return *this;}
    inline CreateContextRequest& WithContextName(const char* value) { SetContextName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source type, ID, and URI.</p>
     */
    inline const ContextSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const ContextSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(ContextSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline CreateContextRequest& WithSource(const ContextSource& value) { SetSource(value); return *this;}
    inline CreateContextRequest& WithSource(ContextSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The context type.</p>
     */
    inline const Aws::String& GetContextType() const{ return m_contextType; }
    inline bool ContextTypeHasBeenSet() const { return m_contextTypeHasBeenSet; }
    inline void SetContextType(const Aws::String& value) { m_contextTypeHasBeenSet = true; m_contextType = value; }
    inline void SetContextType(Aws::String&& value) { m_contextTypeHasBeenSet = true; m_contextType = std::move(value); }
    inline void SetContextType(const char* value) { m_contextTypeHasBeenSet = true; m_contextType.assign(value); }
    inline CreateContextRequest& WithContextType(const Aws::String& value) { SetContextType(value); return *this;}
    inline CreateContextRequest& WithContextType(Aws::String&& value) { SetContextType(std::move(value)); return *this;}
    inline CreateContextRequest& WithContextType(const char* value) { SetContextType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the context.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateContextRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateContextRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateContextRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of properties to add to the context.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline CreateContextRequest& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}
    inline CreateContextRequest& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(std::move(value)); return *this;}
    inline CreateContextRequest& AddProperties(const Aws::String& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    inline CreateContextRequest& AddProperties(Aws::String&& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }
    inline CreateContextRequest& AddProperties(const Aws::String& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline CreateContextRequest& AddProperties(Aws::String&& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateContextRequest& AddProperties(const char* key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline CreateContextRequest& AddProperties(Aws::String&& key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }
    inline CreateContextRequest& AddProperties(const char* key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags to apply to the context.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateContextRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateContextRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateContextRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateContextRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_contextName;
    bool m_contextNameHasBeenSet = false;

    ContextSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_contextType;
    bool m_contextTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
