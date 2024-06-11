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
    AWS_SAGEMAKER_API UpdateFeatureMetadataRequest();

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
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }
    inline UpdateFeatureMetadataRequest& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}
    inline UpdateFeatureMetadataRequest& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}
    inline UpdateFeatureMetadataRequest& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the feature that you're updating.</p>
     */
    inline const Aws::String& GetFeatureName() const{ return m_featureName; }
    inline bool FeatureNameHasBeenSet() const { return m_featureNameHasBeenSet; }
    inline void SetFeatureName(const Aws::String& value) { m_featureNameHasBeenSet = true; m_featureName = value; }
    inline void SetFeatureName(Aws::String&& value) { m_featureNameHasBeenSet = true; m_featureName = std::move(value); }
    inline void SetFeatureName(const char* value) { m_featureNameHasBeenSet = true; m_featureName.assign(value); }
    inline UpdateFeatureMetadataRequest& WithFeatureName(const Aws::String& value) { SetFeatureName(value); return *this;}
    inline UpdateFeatureMetadataRequest& WithFeatureName(Aws::String&& value) { SetFeatureName(std::move(value)); return *this;}
    inline UpdateFeatureMetadataRequest& WithFeatureName(const char* value) { SetFeatureName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description that you can write to better describe the feature.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateFeatureMetadataRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateFeatureMetadataRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateFeatureMetadataRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that you can add to better describe the
     * feature.</p>
     */
    inline const Aws::Vector<FeatureParameter>& GetParameterAdditions() const{ return m_parameterAdditions; }
    inline bool ParameterAdditionsHasBeenSet() const { return m_parameterAdditionsHasBeenSet; }
    inline void SetParameterAdditions(const Aws::Vector<FeatureParameter>& value) { m_parameterAdditionsHasBeenSet = true; m_parameterAdditions = value; }
    inline void SetParameterAdditions(Aws::Vector<FeatureParameter>&& value) { m_parameterAdditionsHasBeenSet = true; m_parameterAdditions = std::move(value); }
    inline UpdateFeatureMetadataRequest& WithParameterAdditions(const Aws::Vector<FeatureParameter>& value) { SetParameterAdditions(value); return *this;}
    inline UpdateFeatureMetadataRequest& WithParameterAdditions(Aws::Vector<FeatureParameter>&& value) { SetParameterAdditions(std::move(value)); return *this;}
    inline UpdateFeatureMetadataRequest& AddParameterAdditions(const FeatureParameter& value) { m_parameterAdditionsHasBeenSet = true; m_parameterAdditions.push_back(value); return *this; }
    inline UpdateFeatureMetadataRequest& AddParameterAdditions(FeatureParameter&& value) { m_parameterAdditionsHasBeenSet = true; m_parameterAdditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of parameter keys that you can specify to remove parameters that
     * describe your feature.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParameterRemovals() const{ return m_parameterRemovals; }
    inline bool ParameterRemovalsHasBeenSet() const { return m_parameterRemovalsHasBeenSet; }
    inline void SetParameterRemovals(const Aws::Vector<Aws::String>& value) { m_parameterRemovalsHasBeenSet = true; m_parameterRemovals = value; }
    inline void SetParameterRemovals(Aws::Vector<Aws::String>&& value) { m_parameterRemovalsHasBeenSet = true; m_parameterRemovals = std::move(value); }
    inline UpdateFeatureMetadataRequest& WithParameterRemovals(const Aws::Vector<Aws::String>& value) { SetParameterRemovals(value); return *this;}
    inline UpdateFeatureMetadataRequest& WithParameterRemovals(Aws::Vector<Aws::String>&& value) { SetParameterRemovals(std::move(value)); return *this;}
    inline UpdateFeatureMetadataRequest& AddParameterRemovals(const Aws::String& value) { m_parameterRemovalsHasBeenSet = true; m_parameterRemovals.push_back(value); return *this; }
    inline UpdateFeatureMetadataRequest& AddParameterRemovals(Aws::String&& value) { m_parameterRemovalsHasBeenSet = true; m_parameterRemovals.push_back(std::move(value)); return *this; }
    inline UpdateFeatureMetadataRequest& AddParameterRemovals(const char* value) { m_parameterRemovalsHasBeenSet = true; m_parameterRemovals.push_back(value); return *this; }
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
