/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object containing authentication information for a private Docker
   * registry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingRepositoryAuthConfig">AWS
   * API Reference</a></p>
   */
  class TrainingRepositoryAuthConfig
  {
  public:
    AWS_SAGEMAKER_API TrainingRepositoryAuthConfig();
    AWS_SAGEMAKER_API TrainingRepositoryAuthConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrainingRepositoryAuthConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function used
     * to give SageMaker access credentials to your private Docker registry.</p>
     */
    inline const Aws::String& GetTrainingRepositoryCredentialsProviderArn() const{ return m_trainingRepositoryCredentialsProviderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function used
     * to give SageMaker access credentials to your private Docker registry.</p>
     */
    inline bool TrainingRepositoryCredentialsProviderArnHasBeenSet() const { return m_trainingRepositoryCredentialsProviderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function used
     * to give SageMaker access credentials to your private Docker registry.</p>
     */
    inline void SetTrainingRepositoryCredentialsProviderArn(const Aws::String& value) { m_trainingRepositoryCredentialsProviderArnHasBeenSet = true; m_trainingRepositoryCredentialsProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function used
     * to give SageMaker access credentials to your private Docker registry.</p>
     */
    inline void SetTrainingRepositoryCredentialsProviderArn(Aws::String&& value) { m_trainingRepositoryCredentialsProviderArnHasBeenSet = true; m_trainingRepositoryCredentialsProviderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function used
     * to give SageMaker access credentials to your private Docker registry.</p>
     */
    inline void SetTrainingRepositoryCredentialsProviderArn(const char* value) { m_trainingRepositoryCredentialsProviderArnHasBeenSet = true; m_trainingRepositoryCredentialsProviderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function used
     * to give SageMaker access credentials to your private Docker registry.</p>
     */
    inline TrainingRepositoryAuthConfig& WithTrainingRepositoryCredentialsProviderArn(const Aws::String& value) { SetTrainingRepositoryCredentialsProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function used
     * to give SageMaker access credentials to your private Docker registry.</p>
     */
    inline TrainingRepositoryAuthConfig& WithTrainingRepositoryCredentialsProviderArn(Aws::String&& value) { SetTrainingRepositoryCredentialsProviderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function used
     * to give SageMaker access credentials to your private Docker registry.</p>
     */
    inline TrainingRepositoryAuthConfig& WithTrainingRepositoryCredentialsProviderArn(const char* value) { SetTrainingRepositoryCredentialsProviderArn(value); return *this;}

  private:

    Aws::String m_trainingRepositoryCredentialsProviderArn;
    bool m_trainingRepositoryCredentialsProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
