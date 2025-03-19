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
    AWS_SAGEMAKER_API UpdateArtifactRequest() = default;

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
    inline const Aws::String& GetArtifactArn() const { return m_artifactArn; }
    inline bool ArtifactArnHasBeenSet() const { return m_artifactArnHasBeenSet; }
    template<typename ArtifactArnT = Aws::String>
    void SetArtifactArn(ArtifactArnT&& value) { m_artifactArnHasBeenSet = true; m_artifactArn = std::forward<ArtifactArnT>(value); }
    template<typename ArtifactArnT = Aws::String>
    UpdateArtifactRequest& WithArtifactArn(ArtifactArnT&& value) { SetArtifactArn(std::forward<ArtifactArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the artifact.</p>
     */
    inline const Aws::String& GetArtifactName() const { return m_artifactName; }
    inline bool ArtifactNameHasBeenSet() const { return m_artifactNameHasBeenSet; }
    template<typename ArtifactNameT = Aws::String>
    void SetArtifactName(ArtifactNameT&& value) { m_artifactNameHasBeenSet = true; m_artifactName = std::forward<ArtifactNameT>(value); }
    template<typename ArtifactNameT = Aws::String>
    UpdateArtifactRequest& WithArtifactName(ArtifactNameT&& value) { SetArtifactName(std::forward<ArtifactNameT>(value)); return *this;}
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
    UpdateArtifactRequest& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
    UpdateArtifactRequest& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
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
    UpdateArtifactRequest& WithPropertiesToRemove(PropertiesToRemoveT&& value) { SetPropertiesToRemove(std::forward<PropertiesToRemoveT>(value)); return *this;}
    template<typename PropertiesToRemoveT = Aws::String>
    UpdateArtifactRequest& AddPropertiesToRemove(PropertiesToRemoveT&& value) { m_propertiesToRemoveHasBeenSet = true; m_propertiesToRemove.emplace_back(std::forward<PropertiesToRemoveT>(value)); return *this; }
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
