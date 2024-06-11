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
  class UpdateArtifactRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateArtifactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateArtifact"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to update.</p>
     */
    inline const Aws::String& GetArtifactArn() const{ return m_artifactArn; }
    inline bool ArtifactArnHasBeenSet() const { return m_artifactArnHasBeenSet; }
    inline void SetArtifactArn(const Aws::String& value) { m_artifactArnHasBeenSet = true; m_artifactArn = value; }
    inline void SetArtifactArn(Aws::String&& value) { m_artifactArnHasBeenSet = true; m_artifactArn = std::move(value); }
    inline void SetArtifactArn(const char* value) { m_artifactArnHasBeenSet = true; m_artifactArn.assign(value); }
    inline UpdateArtifactRequest& WithArtifactArn(const Aws::String& value) { SetArtifactArn(value); return *this;}
    inline UpdateArtifactRequest& WithArtifactArn(Aws::String&& value) { SetArtifactArn(std::move(value)); return *this;}
    inline UpdateArtifactRequest& WithArtifactArn(const char* value) { SetArtifactArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the artifact.</p>
     */
    inline const Aws::String& GetArtifactName() const{ return m_artifactName; }
    inline bool ArtifactNameHasBeenSet() const { return m_artifactNameHasBeenSet; }
    inline void SetArtifactName(const Aws::String& value) { m_artifactNameHasBeenSet = true; m_artifactName = value; }
    inline void SetArtifactName(Aws::String&& value) { m_artifactNameHasBeenSet = true; m_artifactName = std::move(value); }
    inline void SetArtifactName(const char* value) { m_artifactNameHasBeenSet = true; m_artifactName.assign(value); }
    inline UpdateArtifactRequest& WithArtifactName(const Aws::String& value) { SetArtifactName(value); return *this;}
    inline UpdateArtifactRequest& WithArtifactName(Aws::String&& value) { SetArtifactName(std::move(value)); return *this;}
    inline UpdateArtifactRequest& WithArtifactName(const char* value) { SetArtifactName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new list of properties. Overwrites the current property list.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline UpdateArtifactRequest& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}
    inline UpdateArtifactRequest& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(std::move(value)); return *this;}
    inline UpdateArtifactRequest& AddProperties(const Aws::String& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    inline UpdateArtifactRequest& AddProperties(Aws::String&& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }
    inline UpdateArtifactRequest& AddProperties(const Aws::String& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline UpdateArtifactRequest& AddProperties(Aws::String&& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateArtifactRequest& AddProperties(const char* key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline UpdateArtifactRequest& AddProperties(Aws::String&& key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }
    inline UpdateArtifactRequest& AddProperties(const char* key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of properties to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPropertiesToRemove() const{ return m_propertiesToRemove; }
    inline bool PropertiesToRemoveHasBeenSet() const { return m_propertiesToRemoveHasBeenSet; }
    inline void SetPropertiesToRemove(const Aws::Vector<Aws::String>& value) { m_propertiesToRemoveHasBeenSet = true; m_propertiesToRemove = value; }
    inline void SetPropertiesToRemove(Aws::Vector<Aws::String>&& value) { m_propertiesToRemoveHasBeenSet = true; m_propertiesToRemove = std::move(value); }
    inline UpdateArtifactRequest& WithPropertiesToRemove(const Aws::Vector<Aws::String>& value) { SetPropertiesToRemove(value); return *this;}
    inline UpdateArtifactRequest& WithPropertiesToRemove(Aws::Vector<Aws::String>&& value) { SetPropertiesToRemove(std::move(value)); return *this;}
    inline UpdateArtifactRequest& AddPropertiesToRemove(const Aws::String& value) { m_propertiesToRemoveHasBeenSet = true; m_propertiesToRemove.push_back(value); return *this; }
    inline UpdateArtifactRequest& AddPropertiesToRemove(Aws::String&& value) { m_propertiesToRemoveHasBeenSet = true; m_propertiesToRemove.push_back(std::move(value)); return *this; }
    inline UpdateArtifactRequest& AddPropertiesToRemove(const char* value) { m_propertiesToRemoveHasBeenSet = true; m_propertiesToRemove.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_artifactArn;
    bool m_artifactArnHasBeenSet = false;

    Aws::String m_artifactName;
    bool m_artifactNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_propertiesToRemove;
    bool m_propertiesToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
