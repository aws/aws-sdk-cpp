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
#include <aws/core/utils/UUID.h>

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


    ///@{
    /**
     * <p>The input Amazon Resource Name (ARN) of the Earth Observation job being
     * exported.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ExportEarthObservationJobRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ExportEarthObservationJobRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ExportEarthObservationJobRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ExportEarthObservationJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ExportEarthObservationJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ExportEarthObservationJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline ExportEarthObservationJobRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline ExportEarthObservationJobRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline ExportEarthObservationJobRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source images provided to the Earth Observation job being exported.</p>
     */
    inline bool GetExportSourceImages() const{ return m_exportSourceImages; }
    inline bool ExportSourceImagesHasBeenSet() const { return m_exportSourceImagesHasBeenSet; }
    inline void SetExportSourceImages(bool value) { m_exportSourceImagesHasBeenSet = true; m_exportSourceImages = value; }
    inline ExportEarthObservationJobRequest& WithExportSourceImages(bool value) { SetExportSourceImages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the output file.</p>
     */
    inline const OutputConfigInput& GetOutputConfig() const{ return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    inline void SetOutputConfig(const OutputConfigInput& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }
    inline void SetOutputConfig(OutputConfigInput&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }
    inline ExportEarthObservationJobRequest& WithOutputConfig(const OutputConfigInput& value) { SetOutputConfig(value); return *this;}
    inline ExportEarthObservationJobRequest& WithOutputConfig(OutputConfigInput&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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
