/**
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
    AWS_SAGEMAKER_API ModelPackageStatusDetails();
    AWS_SAGEMAKER_API ModelPackageStatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The validation status of the model package.</p>
     */
    inline const Aws::Vector<ModelPackageStatusItem>& GetValidationStatuses() const{ return m_validationStatuses; }
    inline bool ValidationStatusesHasBeenSet() const { return m_validationStatusesHasBeenSet; }
    inline void SetValidationStatuses(const Aws::Vector<ModelPackageStatusItem>& value) { m_validationStatusesHasBeenSet = true; m_validationStatuses = value; }
    inline void SetValidationStatuses(Aws::Vector<ModelPackageStatusItem>&& value) { m_validationStatusesHasBeenSet = true; m_validationStatuses = std::move(value); }
    inline ModelPackageStatusDetails& WithValidationStatuses(const Aws::Vector<ModelPackageStatusItem>& value) { SetValidationStatuses(value); return *this;}
    inline ModelPackageStatusDetails& WithValidationStatuses(Aws::Vector<ModelPackageStatusItem>&& value) { SetValidationStatuses(std::move(value)); return *this;}
    inline ModelPackageStatusDetails& AddValidationStatuses(const ModelPackageStatusItem& value) { m_validationStatusesHasBeenSet = true; m_validationStatuses.push_back(value); return *this; }
    inline ModelPackageStatusDetails& AddValidationStatuses(ModelPackageStatusItem&& value) { m_validationStatusesHasBeenSet = true; m_validationStatuses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the scan of the Docker image container for the model
     * package.</p>
     */
    inline const Aws::Vector<ModelPackageStatusItem>& GetImageScanStatuses() const{ return m_imageScanStatuses; }
    inline bool ImageScanStatusesHasBeenSet() const { return m_imageScanStatusesHasBeenSet; }
    inline void SetImageScanStatuses(const Aws::Vector<ModelPackageStatusItem>& value) { m_imageScanStatusesHasBeenSet = true; m_imageScanStatuses = value; }
    inline void SetImageScanStatuses(Aws::Vector<ModelPackageStatusItem>&& value) { m_imageScanStatusesHasBeenSet = true; m_imageScanStatuses = std::move(value); }
    inline ModelPackageStatusDetails& WithImageScanStatuses(const Aws::Vector<ModelPackageStatusItem>& value) { SetImageScanStatuses(value); return *this;}
    inline ModelPackageStatusDetails& WithImageScanStatuses(Aws::Vector<ModelPackageStatusItem>&& value) { SetImageScanStatuses(std::move(value)); return *this;}
    inline ModelPackageStatusDetails& AddImageScanStatuses(const ModelPackageStatusItem& value) { m_imageScanStatusesHasBeenSet = true; m_imageScanStatuses.push_back(value); return *this; }
    inline ModelPackageStatusDetails& AddImageScanStatuses(ModelPackageStatusItem&& value) { m_imageScanStatusesHasBeenSet = true; m_imageScanStatuses.push_back(std::move(value)); return *this; }
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
