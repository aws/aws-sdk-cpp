/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TransformJobDefinition.h>
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
   * <p>Contains data, such as the inputs and targeted instance types that are used
   * in the process of validating the model package.</p> <p>The data provided in the
   * validation profile is made available to your buyers on Amazon Web Services
   * Marketplace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageValidationProfile">AWS
   * API Reference</a></p>
   */
  class ModelPackageValidationProfile
  {
  public:
    AWS_SAGEMAKER_API ModelPackageValidationProfile() = default;
    AWS_SAGEMAKER_API ModelPackageValidationProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageValidationProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the profile for the model package.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    ModelPackageValidationProfile& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>TransformJobDefinition</code> object that describes the transform
     * job used for the validation of the model package.</p>
     */
    inline const TransformJobDefinition& GetTransformJobDefinition() const { return m_transformJobDefinition; }
    inline bool TransformJobDefinitionHasBeenSet() const { return m_transformJobDefinitionHasBeenSet; }
    template<typename TransformJobDefinitionT = TransformJobDefinition>
    void SetTransformJobDefinition(TransformJobDefinitionT&& value) { m_transformJobDefinitionHasBeenSet = true; m_transformJobDefinition = std::forward<TransformJobDefinitionT>(value); }
    template<typename TransformJobDefinitionT = TransformJobDefinition>
    ModelPackageValidationProfile& WithTransformJobDefinition(TransformJobDefinitionT&& value) { SetTransformJobDefinition(std::forward<TransformJobDefinitionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    TransformJobDefinition m_transformJobDefinition;
    bool m_transformJobDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
