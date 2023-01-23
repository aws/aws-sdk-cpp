/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/ExportVectorEnrichmentJobOutputConfig.h>
#include <utility>

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   */
  class ExportVectorEnrichmentJobRequest : public SageMakerGeospatialRequest
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ExportVectorEnrichmentJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportVectorEnrichmentJob"; }

    AWS_SAGEMAKERGEOSPATIAL_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline ExportVectorEnrichmentJobRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline ExportVectorEnrichmentJobRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Vector Enrichment job.</p>
     */
    inline ExportVectorEnrichmentJobRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM rolewith permission to upload to
     * the location in OutputConfig.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM rolewith permission to upload to
     * the location in OutputConfig.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM rolewith permission to upload to
     * the location in OutputConfig.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM rolewith permission to upload to
     * the location in OutputConfig.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM rolewith permission to upload to
     * the location in OutputConfig.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM rolewith permission to upload to
     * the location in OutputConfig.</p>
     */
    inline ExportVectorEnrichmentJobRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM rolewith permission to upload to
     * the location in OutputConfig.</p>
     */
    inline ExportVectorEnrichmentJobRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM rolewith permission to upload to
     * the location in OutputConfig.</p>
     */
    inline ExportVectorEnrichmentJobRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>Output location information for exporting Vector Enrichment Job results. </p>
     */
    inline const ExportVectorEnrichmentJobOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>Output location information for exporting Vector Enrichment Job results. </p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>Output location information for exporting Vector Enrichment Job results. </p>
     */
    inline void SetOutputConfig(const ExportVectorEnrichmentJobOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>Output location information for exporting Vector Enrichment Job results. </p>
     */
    inline void SetOutputConfig(ExportVectorEnrichmentJobOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>Output location information for exporting Vector Enrichment Job results. </p>
     */
    inline ExportVectorEnrichmentJobRequest& WithOutputConfig(const ExportVectorEnrichmentJobOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>Output location information for exporting Vector Enrichment Job results. </p>
     */
    inline ExportVectorEnrichmentJobRequest& WithOutputConfig(ExportVectorEnrichmentJobOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    ExportVectorEnrichmentJobOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
