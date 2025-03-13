/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ModelPackageValidationProfile.h>
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
   * <p>Specifies batch transform jobs that SageMaker runs to validate your model
   * package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageValidationSpecification">AWS
   * API Reference</a></p>
   */
  class ModelPackageValidationSpecification
  {
  public:
    AWS_SAGEMAKER_API ModelPackageValidationSpecification() = default;
    AWS_SAGEMAKER_API ModelPackageValidationSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageValidationSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline const Aws::String& GetValidationRole() const { return m_validationRole; }
    inline bool ValidationRoleHasBeenSet() const { return m_validationRoleHasBeenSet; }
    template<typename ValidationRoleT = Aws::String>
    void SetValidationRole(ValidationRoleT&& value) { m_validationRoleHasBeenSet = true; m_validationRole = std::forward<ValidationRoleT>(value); }
    template<typename ValidationRoleT = Aws::String>
    ModelPackageValidationSpecification& WithValidationRole(ValidationRoleT&& value) { SetValidationRole(std::forward<ValidationRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that SageMaker runs to validate your model
     * package.</p>
     */
    inline const Aws::Vector<ModelPackageValidationProfile>& GetValidationProfiles() const { return m_validationProfiles; }
    inline bool ValidationProfilesHasBeenSet() const { return m_validationProfilesHasBeenSet; }
    template<typename ValidationProfilesT = Aws::Vector<ModelPackageValidationProfile>>
    void SetValidationProfiles(ValidationProfilesT&& value) { m_validationProfilesHasBeenSet = true; m_validationProfiles = std::forward<ValidationProfilesT>(value); }
    template<typename ValidationProfilesT = Aws::Vector<ModelPackageValidationProfile>>
    ModelPackageValidationSpecification& WithValidationProfiles(ValidationProfilesT&& value) { SetValidationProfiles(std::forward<ValidationProfilesT>(value)); return *this;}
    template<typename ValidationProfilesT = ModelPackageValidationProfile>
    ModelPackageValidationSpecification& AddValidationProfiles(ValidationProfilesT&& value) { m_validationProfilesHasBeenSet = true; m_validationProfiles.emplace_back(std::forward<ValidationProfilesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_validationRole;
    bool m_validationRoleHasBeenSet = false;

    Aws::Vector<ModelPackageValidationProfile> m_validationProfiles;
    bool m_validationProfilesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
