/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/OutputConfigInput.h>
#include <utility>

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   */
  class ExportEarthObservationJobRequest : public SageMakerGeospatialRequest
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ExportEarthObservationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportEarthObservationJob"; }

    AWS_SAGEMAKERGEOSPATIAL_API Aws::String SerializePayload() const override;


    /**
     * <p>The input Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The input Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The input Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The input Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The input Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The input Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline ExportEarthObservationJobRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The input Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline ExportEarthObservationJobRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The input Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline ExportEarthObservationJobRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline ExportEarthObservationJobRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline ExportEarthObservationJobRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline ExportEarthObservationJobRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>The source images provided to the Earth Observation job being exported.</p>
     */
    inline bool GetExportSourceImages() const{ return m_exportSourceImages; }

    /**
     * <p>The source images provided to the Earth Observation job being exported.</p>
     */
    inline bool ExportSourceImagesHasBeenSet() const { return m_exportSourceImagesHasBeenSet; }

    /**
     * <p>The source images provided to the Earth Observation job being exported.</p>
     */
    inline void SetExportSourceImages(bool value) { m_exportSourceImagesHasBeenSet = true; m_exportSourceImages = value; }

    /**
     * <p>The source images provided to the Earth Observation job being exported.</p>
     */
    inline ExportEarthObservationJobRequest& WithExportSourceImages(bool value) { SetExportSourceImages(value); return *this;}


    /**
     * <p>An object containing information about the output file.</p>
     */
    inline const OutputConfigInput& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>An object containing information about the output file.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>An object containing information about the output file.</p>
     */
    inline void SetOutputConfig(const OutputConfigInput& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>An object containing information about the output file.</p>
     */
    inline void SetOutputConfig(OutputConfigInput&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>An object containing information about the output file.</p>
     */
    inline ExportEarthObservationJobRequest& WithOutputConfig(const OutputConfigInput& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>An object containing information about the output file.</p>
     */
    inline ExportEarthObservationJobRequest& WithOutputConfig(OutputConfigInput&& value) { SetOutputConfig(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    bool m_exportSourceImages;
    bool m_exportSourceImagesHasBeenSet = false;

    OutputConfigInput m_outputConfig;
    bool m_outputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
