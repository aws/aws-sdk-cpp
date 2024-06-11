/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/FeatureType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/FeatureParameter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The metadata for a feature. It can either be metadata that you specify, or
   * metadata that is updated automatically.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FeatureMetadata">AWS
   * API Reference</a></p>
   */
  class FeatureMetadata
  {
  public:
    AWS_SAGEMAKER_API FeatureMetadata();
    AWS_SAGEMAKER_API FeatureMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FeatureMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the feature group.</p>
     */
    inline const Aws::String& GetFeatureGroupArn() const{ return m_featureGroupArn; }
    inline bool FeatureGroupArnHasBeenSet() const { return m_featureGroupArnHasBeenSet; }
    inline void SetFeatureGroupArn(const Aws::String& value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn = value; }
    inline void SetFeatureGroupArn(Aws::String&& value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn = std::move(value); }
    inline void SetFeatureGroupArn(const char* value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn.assign(value); }
    inline FeatureMetadata& WithFeatureGroupArn(const Aws::String& value) { SetFeatureGroupArn(value); return *this;}
    inline FeatureMetadata& WithFeatureGroupArn(Aws::String&& value) { SetFeatureGroupArn(std::move(value)); return *this;}
    inline FeatureMetadata& WithFeatureGroupArn(const char* value) { SetFeatureGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the feature group containing the feature.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }
    inline FeatureMetadata& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}
    inline FeatureMetadata& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}
    inline FeatureMetadata& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of feature.</p>
     */
    inline const Aws::String& GetFeatureName() const{ return m_featureName; }
    inline bool FeatureNameHasBeenSet() const { return m_featureNameHasBeenSet; }
    inline void SetFeatureName(const Aws::String& value) { m_featureNameHasBeenSet = true; m_featureName = value; }
    inline void SetFeatureName(Aws::String&& value) { m_featureNameHasBeenSet = true; m_featureName = std::move(value); }
    inline void SetFeatureName(const char* value) { m_featureNameHasBeenSet = true; m_featureName.assign(value); }
    inline FeatureMetadata& WithFeatureName(const Aws::String& value) { SetFeatureName(value); return *this;}
    inline FeatureMetadata& WithFeatureName(Aws::String&& value) { SetFeatureName(std::move(value)); return *this;}
    inline FeatureMetadata& WithFeatureName(const char* value) { SetFeatureName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the feature.</p>
     */
    inline const FeatureType& GetFeatureType() const{ return m_featureType; }
    inline bool FeatureTypeHasBeenSet() const { return m_featureTypeHasBeenSet; }
    inline void SetFeatureType(const FeatureType& value) { m_featureTypeHasBeenSet = true; m_featureType = value; }
    inline void SetFeatureType(FeatureType&& value) { m_featureTypeHasBeenSet = true; m_featureType = std::move(value); }
    inline FeatureMetadata& WithFeatureType(const FeatureType& value) { SetFeatureType(value); return *this;}
    inline FeatureMetadata& WithFeatureType(FeatureType&& value) { SetFeatureType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating when the feature was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline FeatureMetadata& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline FeatureMetadata& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating when the feature was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline FeatureMetadata& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline FeatureMetadata& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description that you specify to better describe the feature.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline FeatureMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline FeatureMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline FeatureMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional key-value pairs that you specify to better describe the feature.</p>
     */
    inline const Aws::Vector<FeatureParameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<FeatureParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<FeatureParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline FeatureMetadata& WithParameters(const Aws::Vector<FeatureParameter>& value) { SetParameters(value); return *this;}
    inline FeatureMetadata& WithParameters(Aws::Vector<FeatureParameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline FeatureMetadata& AddParameters(const FeatureParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline FeatureMetadata& AddParameters(FeatureParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_featureGroupArn;
    bool m_featureGroupArnHasBeenSet = false;

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_featureName;
    bool m_featureNameHasBeenSet = false;

    FeatureType m_featureType;
    bool m_featureTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<FeatureParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
