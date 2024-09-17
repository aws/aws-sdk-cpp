/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Docker container image configuration object for the model bias
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelBiasAppSpecification">AWS
   * API Reference</a></p>
   */
  class ModelBiasAppSpecification
  {
  public:
    AWS_SAGEMAKER_API ModelBiasAppSpecification();
    AWS_SAGEMAKER_API ModelBiasAppSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelBiasAppSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container image to be run by the model bias job.</p>
     */
    inline const Aws::String& GetImageUri() const{ return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    inline void SetImageUri(const Aws::String& value) { m_imageUriHasBeenSet = true; m_imageUri = value; }
    inline void SetImageUri(Aws::String&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::move(value); }
    inline void SetImageUri(const char* value) { m_imageUriHasBeenSet = true; m_imageUri.assign(value); }
    inline ModelBiasAppSpecification& WithImageUri(const Aws::String& value) { SetImageUri(value); return *this;}
    inline ModelBiasAppSpecification& WithImageUri(Aws::String&& value) { SetImageUri(std::move(value)); return *this;}
    inline ModelBiasAppSpecification& WithImageUri(const char* value) { SetImageUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>JSON formatted S3 file that defines bias parameters. For more information on
     * this JSON configuration file, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-config-json-monitor-bias-parameters.html">Configure
     * bias parameters</a>.</p>
     */
    inline const Aws::String& GetConfigUri() const{ return m_configUri; }
    inline bool ConfigUriHasBeenSet() const { return m_configUriHasBeenSet; }
    inline void SetConfigUri(const Aws::String& value) { m_configUriHasBeenSet = true; m_configUri = value; }
    inline void SetConfigUri(Aws::String&& value) { m_configUriHasBeenSet = true; m_configUri = std::move(value); }
    inline void SetConfigUri(const char* value) { m_configUriHasBeenSet = true; m_configUri.assign(value); }
    inline ModelBiasAppSpecification& WithConfigUri(const Aws::String& value) { SetConfigUri(value); return *this;}
    inline ModelBiasAppSpecification& WithConfigUri(Aws::String&& value) { SetConfigUri(std::move(value)); return *this;}
    inline ModelBiasAppSpecification& WithConfigUri(const char* value) { SetConfigUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline ModelBiasAppSpecification& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}
    inline ModelBiasAppSpecification& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline ModelBiasAppSpecification& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    inline ModelBiasAppSpecification& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline ModelBiasAppSpecification& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline ModelBiasAppSpecification& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }
    inline ModelBiasAppSpecification& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline ModelBiasAppSpecification& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline ModelBiasAppSpecification& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;

    Aws::String m_configUri;
    bool m_configUriHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
