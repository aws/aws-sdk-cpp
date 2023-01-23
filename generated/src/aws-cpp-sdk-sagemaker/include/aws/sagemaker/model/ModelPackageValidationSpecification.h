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
    AWS_SAGEMAKER_API ModelPackageValidationSpecification();
    AWS_SAGEMAKER_API ModelPackageValidationSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageValidationSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline const Aws::String& GetValidationRole() const{ return m_validationRole; }

    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline bool ValidationRoleHasBeenSet() const { return m_validationRoleHasBeenSet; }

    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline void SetValidationRole(const Aws::String& value) { m_validationRoleHasBeenSet = true; m_validationRole = value; }

    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline void SetValidationRole(Aws::String&& value) { m_validationRoleHasBeenSet = true; m_validationRole = std::move(value); }

    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline void SetValidationRole(const char* value) { m_validationRoleHasBeenSet = true; m_validationRole.assign(value); }

    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline ModelPackageValidationSpecification& WithValidationRole(const Aws::String& value) { SetValidationRole(value); return *this;}

    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline ModelPackageValidationSpecification& WithValidationRole(Aws::String&& value) { SetValidationRole(std::move(value)); return *this;}

    /**
     * <p>The IAM roles to be used for the validation of the model package.</p>
     */
    inline ModelPackageValidationSpecification& WithValidationRole(const char* value) { SetValidationRole(value); return *this;}


    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that SageMaker runs to validate your model
     * package.</p>
     */
    inline const Aws::Vector<ModelPackageValidationProfile>& GetValidationProfiles() const{ return m_validationProfiles; }

    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that SageMaker runs to validate your model
     * package.</p>
     */
    inline bool ValidationProfilesHasBeenSet() const { return m_validationProfilesHasBeenSet; }

    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that SageMaker runs to validate your model
     * package.</p>
     */
    inline void SetValidationProfiles(const Aws::Vector<ModelPackageValidationProfile>& value) { m_validationProfilesHasBeenSet = true; m_validationProfiles = value; }

    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that SageMaker runs to validate your model
     * package.</p>
     */
    inline void SetValidationProfiles(Aws::Vector<ModelPackageValidationProfile>&& value) { m_validationProfilesHasBeenSet = true; m_validationProfiles = std::move(value); }

    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that SageMaker runs to validate your model
     * package.</p>
     */
    inline ModelPackageValidationSpecification& WithValidationProfiles(const Aws::Vector<ModelPackageValidationProfile>& value) { SetValidationProfiles(value); return *this;}

    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that SageMaker runs to validate your model
     * package.</p>
     */
    inline ModelPackageValidationSpecification& WithValidationProfiles(Aws::Vector<ModelPackageValidationProfile>&& value) { SetValidationProfiles(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that SageMaker runs to validate your model
     * package.</p>
     */
    inline ModelPackageValidationSpecification& AddValidationProfiles(const ModelPackageValidationProfile& value) { m_validationProfilesHasBeenSet = true; m_validationProfiles.push_back(value); return *this; }

    /**
     * <p>An array of <code>ModelPackageValidationProfile</code> objects, each of which
     * specifies a batch transform job that SageMaker runs to validate your model
     * package.</p>
     */
    inline ModelPackageValidationSpecification& AddValidationProfiles(ModelPackageValidationProfile&& value) { m_validationProfilesHasBeenSet = true; m_validationProfiles.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_validationRole;
    bool m_validationRoleHasBeenSet = false;

    Aws::Vector<ModelPackageValidationProfile> m_validationProfiles;
    bool m_validationProfilesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
