/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/FeatureParameter.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateFeatureMetadataRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateFeatureMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFeatureMetadata"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the feature group containing the
     * feature that you're updating.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const { return m_featureGroupName; }
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
    template<typename FeatureGroupNameT = Aws::String>
    void SetFeatureGroupName(FeatureGroupNameT&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::forward<FeatureGroupNameT>(value); }
    template<typename FeatureGroupNameT = Aws::String>
    UpdateFeatureMetadataRequest& WithFeatureGroupName(FeatureGroupNameT&& value) { SetFeatureGroupName(std::forward<FeatureGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the feature that you're updating.</p>
     */
    inline const Aws::String& GetFeatureName() const { return m_featureName; }
    inline bool FeatureNameHasBeenSet() const { return m_featureNameHasBeenSet; }
    template<typename FeatureNameT = Aws::String>
    void SetFeatureName(FeatureNameT&& value) { m_featureNameHasBeenSet = true; m_featureName = std::forward<FeatureNameT>(value); }
    template<typename FeatureNameT = Aws::String>
    UpdateFeatureMetadataRequest& WithFeatureName(FeatureNameT&& value) { SetFeatureName(std::forward<FeatureNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description that you can write to better describe the feature.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateFeatureMetadataRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that you can add to better describe the
     * feature.</p>
     */
    inline const Aws::Vector<FeatureParameter>& GetParameterAdditions() const { return m_parameterAdditions; }
    inline bool ParameterAdditionsHasBeenSet() const { return m_parameterAdditionsHasBeenSet; }
    template<typename ParameterAdditionsT = Aws::Vector<FeatureParameter>>
    void SetParameterAdditions(ParameterAdditionsT&& value) { m_parameterAdditionsHasBeenSet = true; m_parameterAdditions = std::forward<ParameterAdditionsT>(value); }
    template<typename ParameterAdditionsT = Aws::Vector<FeatureParameter>>
    UpdateFeatureMetadataRequest& WithParameterAdditions(ParameterAdditionsT&& value) { SetParameterAdditions(std::forward<ParameterAdditionsT>(value)); return *this;}
    template<typename ParameterAdditionsT = FeatureParameter>
    UpdateFeatureMetadataRequest& AddParameterAdditions(ParameterAdditionsT&& value) { m_parameterAdditionsHasBeenSet = true; m_parameterAdditions.emplace_back(std::forward<ParameterAdditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of parameter keys that you can specify to remove parameters that
     * describe your feature.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParameterRemovals() const { return m_parameterRemovals; }
    inline bool ParameterRemovalsHasBeenSet() const { return m_parameterRemovalsHasBeenSet; }
    template<typename ParameterRemovalsT = Aws::Vector<Aws::String>>
    void SetParameterRemovals(ParameterRemovalsT&& value) { m_parameterRemovalsHasBeenSet = true; m_parameterRemovals = std::forward<ParameterRemovalsT>(value); }
    template<typename ParameterRemovalsT = Aws::Vector<Aws::String>>
    UpdateFeatureMetadataRequest& WithParameterRemovals(ParameterRemovalsT&& value) { SetParameterRemovals(std::forward<ParameterRemovalsT>(value)); return *this;}
    template<typename ParameterRemovalsT = Aws::String>
    UpdateFeatureMetadataRequest& AddParameterRemovals(ParameterRemovalsT&& value) { m_parameterRemovalsHasBeenSet = true; m_parameterRemovals.emplace_back(std::forward<ParameterRemovalsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_featureName;
    bool m_featureNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<FeatureParameter> m_parameterAdditions;
    bool m_parameterAdditionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_parameterRemovals;
    bool m_parameterRemovalsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
