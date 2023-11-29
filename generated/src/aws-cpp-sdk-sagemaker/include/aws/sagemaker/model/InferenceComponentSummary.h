/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceComponentStatus.h>
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
   * <p>A summary of the properties of an inference component.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentSummary">AWS
   * API Reference</a></p>
   */
  class InferenceComponentSummary
  {
  public:
    AWS_SAGEMAKER_API InferenceComponentSummary();
    AWS_SAGEMAKER_API InferenceComponentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time when the inference component was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the inference component was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time when the inference component was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time when the inference component was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time when the inference component was created.</p>
     */
    inline InferenceComponentSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the inference component was created.</p>
     */
    inline InferenceComponentSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline const Aws::String& GetInferenceComponentArn() const{ return m_inferenceComponentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline bool InferenceComponentArnHasBeenSet() const { return m_inferenceComponentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline void SetInferenceComponentArn(const Aws::String& value) { m_inferenceComponentArnHasBeenSet = true; m_inferenceComponentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline void SetInferenceComponentArn(Aws::String&& value) { m_inferenceComponentArnHasBeenSet = true; m_inferenceComponentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline void SetInferenceComponentArn(const char* value) { m_inferenceComponentArnHasBeenSet = true; m_inferenceComponentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline InferenceComponentSummary& WithInferenceComponentArn(const Aws::String& value) { SetInferenceComponentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline InferenceComponentSummary& WithInferenceComponentArn(Aws::String&& value) { SetInferenceComponentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the inference component.</p>
     */
    inline InferenceComponentSummary& WithInferenceComponentArn(const char* value) { SetInferenceComponentArn(value); return *this;}


    /**
     * <p>The name of the inference component.</p>
     */
    inline const Aws::String& GetInferenceComponentName() const{ return m_inferenceComponentName; }

    /**
     * <p>The name of the inference component.</p>
     */
    inline bool InferenceComponentNameHasBeenSet() const { return m_inferenceComponentNameHasBeenSet; }

    /**
     * <p>The name of the inference component.</p>
     */
    inline void SetInferenceComponentName(const Aws::String& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = value; }

    /**
     * <p>The name of the inference component.</p>
     */
    inline void SetInferenceComponentName(Aws::String&& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = std::move(value); }

    /**
     * <p>The name of the inference component.</p>
     */
    inline void SetInferenceComponentName(const char* value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName.assign(value); }

    /**
     * <p>The name of the inference component.</p>
     */
    inline InferenceComponentSummary& WithInferenceComponentName(const Aws::String& value) { SetInferenceComponentName(value); return *this;}

    /**
     * <p>The name of the inference component.</p>
     */
    inline InferenceComponentSummary& WithInferenceComponentName(Aws::String&& value) { SetInferenceComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference component.</p>
     */
    inline InferenceComponentSummary& WithInferenceComponentName(const char* value) { SetInferenceComponentName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint that hosts the inference
     * component.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint that hosts the inference
     * component.</p>
     */
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint that hosts the inference
     * component.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint that hosts the inference
     * component.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint that hosts the inference
     * component.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint that hosts the inference
     * component.</p>
     */
    inline InferenceComponentSummary& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint that hosts the inference
     * component.</p>
     */
    inline InferenceComponentSummary& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint that hosts the inference
     * component.</p>
     */
    inline InferenceComponentSummary& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p>The name of the endpoint that hosts the inference component.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the endpoint that hosts the inference component.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the endpoint that hosts the inference component.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the endpoint that hosts the inference component.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the endpoint that hosts the inference component.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the endpoint that hosts the inference component.</p>
     */
    inline InferenceComponentSummary& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the endpoint that hosts the inference component.</p>
     */
    inline InferenceComponentSummary& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint that hosts the inference component.</p>
     */
    inline InferenceComponentSummary& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The name of the production variant that hosts the inference component.</p>
     */
    inline const Aws::String& GetVariantName() const{ return m_variantName; }

    /**
     * <p>The name of the production variant that hosts the inference component.</p>
     */
    inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }

    /**
     * <p>The name of the production variant that hosts the inference component.</p>
     */
    inline void SetVariantName(const Aws::String& value) { m_variantNameHasBeenSet = true; m_variantName = value; }

    /**
     * <p>The name of the production variant that hosts the inference component.</p>
     */
    inline void SetVariantName(Aws::String&& value) { m_variantNameHasBeenSet = true; m_variantName = std::move(value); }

    /**
     * <p>The name of the production variant that hosts the inference component.</p>
     */
    inline void SetVariantName(const char* value) { m_variantNameHasBeenSet = true; m_variantName.assign(value); }

    /**
     * <p>The name of the production variant that hosts the inference component.</p>
     */
    inline InferenceComponentSummary& WithVariantName(const Aws::String& value) { SetVariantName(value); return *this;}

    /**
     * <p>The name of the production variant that hosts the inference component.</p>
     */
    inline InferenceComponentSummary& WithVariantName(Aws::String&& value) { SetVariantName(std::move(value)); return *this;}

    /**
     * <p>The name of the production variant that hosts the inference component.</p>
     */
    inline InferenceComponentSummary& WithVariantName(const char* value) { SetVariantName(value); return *this;}


    /**
     * <p>The status of the inference component.</p>
     */
    inline const InferenceComponentStatus& GetInferenceComponentStatus() const{ return m_inferenceComponentStatus; }

    /**
     * <p>The status of the inference component.</p>
     */
    inline bool InferenceComponentStatusHasBeenSet() const { return m_inferenceComponentStatusHasBeenSet; }

    /**
     * <p>The status of the inference component.</p>
     */
    inline void SetInferenceComponentStatus(const InferenceComponentStatus& value) { m_inferenceComponentStatusHasBeenSet = true; m_inferenceComponentStatus = value; }

    /**
     * <p>The status of the inference component.</p>
     */
    inline void SetInferenceComponentStatus(InferenceComponentStatus&& value) { m_inferenceComponentStatusHasBeenSet = true; m_inferenceComponentStatus = std::move(value); }

    /**
     * <p>The status of the inference component.</p>
     */
    inline InferenceComponentSummary& WithInferenceComponentStatus(const InferenceComponentStatus& value) { SetInferenceComponentStatus(value); return *this;}

    /**
     * <p>The status of the inference component.</p>
     */
    inline InferenceComponentSummary& WithInferenceComponentStatus(InferenceComponentStatus&& value) { SetInferenceComponentStatus(std::move(value)); return *this;}


    /**
     * <p>The time when the inference component was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time when the inference component was last updated.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The time when the inference component was last updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The time when the inference component was last updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time when the inference component was last updated.</p>
     */
    inline InferenceComponentSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time when the inference component was last updated.</p>
     */
    inline InferenceComponentSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_inferenceComponentArn;
    bool m_inferenceComponentArnHasBeenSet = false;

    Aws::String m_inferenceComponentName;
    bool m_inferenceComponentNameHasBeenSet = false;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    InferenceComponentStatus m_inferenceComponentStatus;
    bool m_inferenceComponentStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
