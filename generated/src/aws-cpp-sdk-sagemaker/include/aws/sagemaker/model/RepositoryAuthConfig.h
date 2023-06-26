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
   * <p>Specifies an authentication configuration for the private docker registry
   * where your model image is hosted. Specify a value for this property only if you
   * specified <code>Vpc</code> as the value for the
   * <code>RepositoryAccessMode</code> field of the <code>ImageConfig</code> object
   * that you passed to a call to <code>CreateModel</code> and the private Docker
   * registry where the model image is hosted requires authentication.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RepositoryAuthConfig">AWS
   * API Reference</a></p>
   */
  class RepositoryAuthConfig
  {
  public:
    AWS_SAGEMAKER_API RepositoryAuthConfig();
    AWS_SAGEMAKER_API RepositoryAuthConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RepositoryAuthConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function that
     * provides credentials to authenticate to the private Docker registry where your
     * model image is hosted. For information about how to create an Amazon Web
     * Services Lambda function, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/getting-started-create-function.html">Create
     * a Lambda function with the console</a> in the <i>Amazon Web Services Lambda
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetRepositoryCredentialsProviderArn() const{ return m_repositoryCredentialsProviderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function that
     * provides credentials to authenticate to the private Docker registry where your
     * model image is hosted. For information about how to create an Amazon Web
     * Services Lambda function, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/getting-started-create-function.html">Create
     * a Lambda function with the console</a> in the <i>Amazon Web Services Lambda
     * Developer Guide</i>.</p>
     */
    inline bool RepositoryCredentialsProviderArnHasBeenSet() const { return m_repositoryCredentialsProviderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function that
     * provides credentials to authenticate to the private Docker registry where your
     * model image is hosted. For information about how to create an Amazon Web
     * Services Lambda function, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/getting-started-create-function.html">Create
     * a Lambda function with the console</a> in the <i>Amazon Web Services Lambda
     * Developer Guide</i>.</p>
     */
    inline void SetRepositoryCredentialsProviderArn(const Aws::String& value) { m_repositoryCredentialsProviderArnHasBeenSet = true; m_repositoryCredentialsProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function that
     * provides credentials to authenticate to the private Docker registry where your
     * model image is hosted. For information about how to create an Amazon Web
     * Services Lambda function, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/getting-started-create-function.html">Create
     * a Lambda function with the console</a> in the <i>Amazon Web Services Lambda
     * Developer Guide</i>.</p>
     */
    inline void SetRepositoryCredentialsProviderArn(Aws::String&& value) { m_repositoryCredentialsProviderArnHasBeenSet = true; m_repositoryCredentialsProviderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function that
     * provides credentials to authenticate to the private Docker registry where your
     * model image is hosted. For information about how to create an Amazon Web
     * Services Lambda function, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/getting-started-create-function.html">Create
     * a Lambda function with the console</a> in the <i>Amazon Web Services Lambda
     * Developer Guide</i>.</p>
     */
    inline void SetRepositoryCredentialsProviderArn(const char* value) { m_repositoryCredentialsProviderArnHasBeenSet = true; m_repositoryCredentialsProviderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function that
     * provides credentials to authenticate to the private Docker registry where your
     * model image is hosted. For information about how to create an Amazon Web
     * Services Lambda function, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/getting-started-create-function.html">Create
     * a Lambda function with the console</a> in the <i>Amazon Web Services Lambda
     * Developer Guide</i>.</p>
     */
    inline RepositoryAuthConfig& WithRepositoryCredentialsProviderArn(const Aws::String& value) { SetRepositoryCredentialsProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function that
     * provides credentials to authenticate to the private Docker registry where your
     * model image is hosted. For information about how to create an Amazon Web
     * Services Lambda function, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/getting-started-create-function.html">Create
     * a Lambda function with the console</a> in the <i>Amazon Web Services Lambda
     * Developer Guide</i>.</p>
     */
    inline RepositoryAuthConfig& WithRepositoryCredentialsProviderArn(Aws::String&& value) { SetRepositoryCredentialsProviderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services Lambda function that
     * provides credentials to authenticate to the private Docker registry where your
     * model image is hosted. For information about how to create an Amazon Web
     * Services Lambda function, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/getting-started-create-function.html">Create
     * a Lambda function with the console</a> in the <i>Amazon Web Services Lambda
     * Developer Guide</i>.</p>
     */
    inline RepositoryAuthConfig& WithRepositoryCredentialsProviderArn(const char* value) { SetRepositoryCredentialsProviderArn(value); return *this;}

  private:

    Aws::String m_repositoryCredentialsProviderArn;
    bool m_repositoryCredentialsProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
