/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardExportOutputConfig.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateModelCardExportJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateModelCardExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelCardExportJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the model card to export.</p>
     */
    inline const Aws::String& GetModelCardName() const{ return m_modelCardName; }
    inline bool ModelCardNameHasBeenSet() const { return m_modelCardNameHasBeenSet; }
    inline void SetModelCardName(const Aws::String& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = value; }
    inline void SetModelCardName(Aws::String&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::move(value); }
    inline void SetModelCardName(const char* value) { m_modelCardNameHasBeenSet = true; m_modelCardName.assign(value); }
    inline CreateModelCardExportJobRequest& WithModelCardName(const Aws::String& value) { SetModelCardName(value); return *this;}
    inline CreateModelCardExportJobRequest& WithModelCardName(Aws::String&& value) { SetModelCardName(std::move(value)); return *this;}
    inline CreateModelCardExportJobRequest& WithModelCardName(const char* value) { SetModelCardName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model card to export. If a version is not provided, then
     * the latest version of the model card is exported.</p>
     */
    inline int GetModelCardVersion() const{ return m_modelCardVersion; }
    inline bool ModelCardVersionHasBeenSet() const { return m_modelCardVersionHasBeenSet; }
    inline void SetModelCardVersion(int value) { m_modelCardVersionHasBeenSet = true; m_modelCardVersion = value; }
    inline CreateModelCardExportJobRequest& WithModelCardVersion(int value) { SetModelCardVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model card export job.</p>
     */
    inline const Aws::String& GetModelCardExportJobName() const{ return m_modelCardExportJobName; }
    inline bool ModelCardExportJobNameHasBeenSet() const { return m_modelCardExportJobNameHasBeenSet; }
    inline void SetModelCardExportJobName(const Aws::String& value) { m_modelCardExportJobNameHasBeenSet = true; m_modelCardExportJobName = value; }
    inline void SetModelCardExportJobName(Aws::String&& value) { m_modelCardExportJobNameHasBeenSet = true; m_modelCardExportJobName = std::move(value); }
    inline void SetModelCardExportJobName(const char* value) { m_modelCardExportJobNameHasBeenSet = true; m_modelCardExportJobName.assign(value); }
    inline CreateModelCardExportJobRequest& WithModelCardExportJobName(const Aws::String& value) { SetModelCardExportJobName(value); return *this;}
    inline CreateModelCardExportJobRequest& WithModelCardExportJobName(Aws::String&& value) { SetModelCardExportJobName(std::move(value)); return *this;}
    inline CreateModelCardExportJobRequest& WithModelCardExportJobName(const char* value) { SetModelCardExportJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model card output configuration that specifies the Amazon S3 path for
     * exporting.</p>
     */
    inline const ModelCardExportOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    inline void SetOutputConfig(const ModelCardExportOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }
    inline void SetOutputConfig(ModelCardExportOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }
    inline CreateModelCardExportJobRequest& WithOutputConfig(const ModelCardExportOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline CreateModelCardExportJobRequest& WithOutputConfig(ModelCardExportOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    int m_modelCardVersion;
    bool m_modelCardVersionHasBeenSet = false;

    Aws::String m_modelCardExportJobName;
    bool m_modelCardExportJobNameHasBeenSet = false;

    ModelCardExportOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
