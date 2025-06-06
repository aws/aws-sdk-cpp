﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ModelPackageStatusItem.h>
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
   * <p>Specifies the validation and image scan statuses of the model
   * package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageStatusDetails">AWS
   * API Reference</a></p>
   */
  class ModelPackageStatusDetails
  {
  public:
    AWS_SAGEMAKER_API ModelPackageStatusDetails() = default;
    AWS_SAGEMAKER_API ModelPackageStatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The validation status of the model package.</p>
     */
    inline const Aws::Vector<ModelPackageStatusItem>& GetValidationStatuses() const { return m_validationStatuses; }
    inline bool ValidationStatusesHasBeenSet() const { return m_validationStatusesHasBeenSet; }
    template<typename ValidationStatusesT = Aws::Vector<ModelPackageStatusItem>>
    void SetValidationStatuses(ValidationStatusesT&& value) { m_validationStatusesHasBeenSet = true; m_validationStatuses = std::forward<ValidationStatusesT>(value); }
    template<typename ValidationStatusesT = Aws::Vector<ModelPackageStatusItem>>
    ModelPackageStatusDetails& WithValidationStatuses(ValidationStatusesT&& value) { SetValidationStatuses(std::forward<ValidationStatusesT>(value)); return *this;}
    template<typename ValidationStatusesT = ModelPackageStatusItem>
    ModelPackageStatusDetails& AddValidationStatuses(ValidationStatusesT&& value) { m_validationStatusesHasBeenSet = true; m_validationStatuses.emplace_back(std::forward<ValidationStatusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the scan of the Docker image container for the model
     * package.</p>
     */
    inline const Aws::Vector<ModelPackageStatusItem>& GetImageScanStatuses() const { return m_imageScanStatuses; }
    inline bool ImageScanStatusesHasBeenSet() const { return m_imageScanStatusesHasBeenSet; }
    template<typename ImageScanStatusesT = Aws::Vector<ModelPackageStatusItem>>
    void SetImageScanStatuses(ImageScanStatusesT&& value) { m_imageScanStatusesHasBeenSet = true; m_imageScanStatuses = std::forward<ImageScanStatusesT>(value); }
    template<typename ImageScanStatusesT = Aws::Vector<ModelPackageStatusItem>>
    ModelPackageStatusDetails& WithImageScanStatuses(ImageScanStatusesT&& value) { SetImageScanStatuses(std::forward<ImageScanStatusesT>(value)); return *this;}
    template<typename ImageScanStatusesT = ModelPackageStatusItem>
    ModelPackageStatusDetails& AddImageScanStatuses(ImageScanStatusesT&& value) { m_imageScanStatusesHasBeenSet = true; m_imageScanStatuses.emplace_back(std::forward<ImageScanStatusesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ModelPackageStatusItem> m_validationStatuses;
    bool m_validationStatusesHasBeenSet = false;

    Aws::Vector<ModelPackageStatusItem> m_imageScanStatuses;
    bool m_imageScanStatusesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
