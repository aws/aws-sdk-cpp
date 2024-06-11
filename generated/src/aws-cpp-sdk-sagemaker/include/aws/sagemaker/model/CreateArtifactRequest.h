/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ArtifactSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/MetadataProperties.h>
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
  class CreateArtifactRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateArtifactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateArtifact"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the artifact. Must be unique to your account in an Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetArtifactName() const{ return m_artifactName; }
    inline bool ArtifactNameHasBeenSet() const { return m_artifactNameHasBeenSet; }
    inline void SetArtifactName(const Aws::String& value) { m_artifactNameHasBeenSet = true; m_artifactName = value; }
    inline void SetArtifactName(Aws::String&& value) { m_artifactNameHasBeenSet = true; m_artifactName = std::move(value); }
    inline void SetArtifactName(const char* value) { m_artifactNameHasBeenSet = true; m_artifactName.assign(value); }
    inline CreateArtifactRequest& WithArtifactName(const Aws::String& value) { SetArtifactName(value); return *this;}
    inline CreateArtifactRequest& WithArtifactName(Aws::String&& value) { SetArtifactName(std::move(value)); return *this;}
    inline CreateArtifactRequest& WithArtifactName(const char* value) { SetArtifactName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID, ID type, and URI of the source.</p>
     */
    inline const ArtifactSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const ArtifactSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(ArtifactSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline CreateArtifactRequest& WithSource(const ArtifactSource& value) { SetSource(value); return *this;}
    inline CreateArtifactRequest& WithSource(ArtifactSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The artifact type.</p>
     */
    inline const Aws::String& GetArtifactType() const{ return m_artifactType; }
    inline bool ArtifactTypeHasBeenSet() const { return m_artifactTypeHasBeenSet; }
    inline void SetArtifactType(const Aws::String& value) { m_artifactTypeHasBeenSet = true; m_artifactType = value; }
    inline void SetArtifactType(Aws::String&& value) { m_artifactTypeHasBeenSet = true; m_artifactType = std::move(value); }
    inline void SetArtifactType(const char* value) { m_artifactTypeHasBeenSet = true; m_artifactType.assign(value); }
    inline CreateArtifactRequest& WithArtifactType(const Aws::String& value) { SetArtifactType(value); return *this;}
    inline CreateArtifactRequest& WithArtifactType(Aws::String&& value) { SetArtifactType(std::move(value)); return *this;}
    inline CreateArtifactRequest& WithArtifactType(const char* value) { SetArtifactType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of properties to add to the artifact.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline CreateArtifactRequest& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}
    inline CreateArtifactRequest& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(std::move(value)); return *this;}
    inline CreateArtifactRequest& AddProperties(const Aws::String& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    inline CreateArtifactRequest& AddProperties(Aws::String&& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }
    inline CreateArtifactRequest& AddProperties(const Aws::String& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline CreateArtifactRequest& AddProperties(Aws::String&& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateArtifactRequest& AddProperties(const char* key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline CreateArtifactRequest& AddProperties(Aws::String&& key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }
    inline CreateArtifactRequest& AddProperties(const char* key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }
    inline bool MetadataPropertiesHasBeenSet() const { return m_metadataPropertiesHasBeenSet; }
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = value; }
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = std::move(value); }
    inline CreateArtifactRequest& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}
    inline CreateArtifactRequest& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to apply to the artifact.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateArtifactRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateArtifactRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateArtifactRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateArtifactRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_artifactName;
    bool m_artifactNameHasBeenSet = false;

    ArtifactSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_artifactType;
    bool m_artifactTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet = false;

    MetadataProperties m_metadataProperties;
    bool m_metadataPropertiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
