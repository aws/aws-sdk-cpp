/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ImageClassificationJobConfig.h>
#include <aws/sagemaker/model/TextClassificationJobConfig.h>
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
   * <p>A collection of settings specific to the problem type used to configure an
   * AutoML job using the V2 API. There must be one and only one config of the
   * following type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLProblemTypeConfig">AWS
   * API Reference</a></p>
   */
  class AutoMLProblemTypeConfig
  {
  public:
    AWS_SAGEMAKER_API AutoMLProblemTypeConfig();
    AWS_SAGEMAKER_API AutoMLProblemTypeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLProblemTypeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Settings used to configure an AutoML job using the V2 API for the image
     * classification problem type.</p>
     */
    inline const ImageClassificationJobConfig& GetImageClassificationJobConfig() const{ return m_imageClassificationJobConfig; }

    /**
     * <p>Settings used to configure an AutoML job using the V2 API for the image
     * classification problem type.</p>
     */
    inline bool ImageClassificationJobConfigHasBeenSet() const { return m_imageClassificationJobConfigHasBeenSet; }

    /**
     * <p>Settings used to configure an AutoML job using the V2 API for the image
     * classification problem type.</p>
     */
    inline void SetImageClassificationJobConfig(const ImageClassificationJobConfig& value) { m_imageClassificationJobConfigHasBeenSet = true; m_imageClassificationJobConfig = value; }

    /**
     * <p>Settings used to configure an AutoML job using the V2 API for the image
     * classification problem type.</p>
     */
    inline void SetImageClassificationJobConfig(ImageClassificationJobConfig&& value) { m_imageClassificationJobConfigHasBeenSet = true; m_imageClassificationJobConfig = std::move(value); }

    /**
     * <p>Settings used to configure an AutoML job using the V2 API for the image
     * classification problem type.</p>
     */
    inline AutoMLProblemTypeConfig& WithImageClassificationJobConfig(const ImageClassificationJobConfig& value) { SetImageClassificationJobConfig(value); return *this;}

    /**
     * <p>Settings used to configure an AutoML job using the V2 API for the image
     * classification problem type.</p>
     */
    inline AutoMLProblemTypeConfig& WithImageClassificationJobConfig(ImageClassificationJobConfig&& value) { SetImageClassificationJobConfig(std::move(value)); return *this;}


    /**
     * <p>Settings used to configure an AutoML job using the V2 API for the text
     * classification problem type.</p>
     */
    inline const TextClassificationJobConfig& GetTextClassificationJobConfig() const{ return m_textClassificationJobConfig; }

    /**
     * <p>Settings used to configure an AutoML job using the V2 API for the text
     * classification problem type.</p>
     */
    inline bool TextClassificationJobConfigHasBeenSet() const { return m_textClassificationJobConfigHasBeenSet; }

    /**
     * <p>Settings used to configure an AutoML job using the V2 API for the text
     * classification problem type.</p>
     */
    inline void SetTextClassificationJobConfig(const TextClassificationJobConfig& value) { m_textClassificationJobConfigHasBeenSet = true; m_textClassificationJobConfig = value; }

    /**
     * <p>Settings used to configure an AutoML job using the V2 API for the text
     * classification problem type.</p>
     */
    inline void SetTextClassificationJobConfig(TextClassificationJobConfig&& value) { m_textClassificationJobConfigHasBeenSet = true; m_textClassificationJobConfig = std::move(value); }

    /**
     * <p>Settings used to configure an AutoML job using the V2 API for the text
     * classification problem type.</p>
     */
    inline AutoMLProblemTypeConfig& WithTextClassificationJobConfig(const TextClassificationJobConfig& value) { SetTextClassificationJobConfig(value); return *this;}

    /**
     * <p>Settings used to configure an AutoML job using the V2 API for the text
     * classification problem type.</p>
     */
    inline AutoMLProblemTypeConfig& WithTextClassificationJobConfig(TextClassificationJobConfig&& value) { SetTextClassificationJobConfig(std::move(value)); return *this;}

  private:

    ImageClassificationJobConfig m_imageClassificationJobConfig;
    bool m_imageClassificationJobConfigHasBeenSet = false;

    TextClassificationJobConfig m_textClassificationJobConfig;
    bool m_textClassificationJobConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
