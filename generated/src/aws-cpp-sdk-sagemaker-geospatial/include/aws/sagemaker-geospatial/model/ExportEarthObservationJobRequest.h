﻿/**
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
    AWS_SAGEMAKERGEOSPATIAL_API ExportEarthObservationJobRequest() = default;

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
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ExportEarthObservationJobRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ExportEarthObservationJobRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    ExportEarthObservationJobRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source images provided to the Earth Observation job being exported.</p>
     */
    inline bool GetExportSourceImages() const { return m_exportSourceImages; }
    inline bool ExportSourceImagesHasBeenSet() const { return m_exportSourceImagesHasBeenSet; }
    inline void SetExportSourceImages(bool value) { m_exportSourceImagesHasBeenSet = true; m_exportSourceImages = value; }
    inline ExportEarthObservationJobRequest& WithExportSourceImages(bool value) { SetExportSourceImages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the output file.</p>
     */
    inline const OutputConfigInput& GetOutputConfig() const { return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    template<typename OutputConfigT = OutputConfigInput>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = OutputConfigInput>
    ExportEarthObservationJobRequest& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    bool m_exportSourceImages{false};
    bool m_exportSourceImagesHasBeenSet = false;

    OutputConfigInput m_outputConfig;
    bool m_outputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
