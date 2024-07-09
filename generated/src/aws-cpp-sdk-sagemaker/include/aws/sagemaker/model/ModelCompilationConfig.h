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
   * <p>Settings for the model compilation technique that's applied by a model
   * optimization job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelCompilationConfig">AWS
   * API Reference</a></p>
   */
  class ModelCompilationConfig
  {
  public:
    AWS_SAGEMAKER_API ModelCompilationConfig();
    AWS_SAGEMAKER_API ModelCompilationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelCompilationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URI of an LMI DLC in Amazon ECR. SageMaker uses this image to run the
     * optimization.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }
    inline ModelCompilationConfig& WithImage(const Aws::String& value) { SetImage(value); return *this;}
    inline ModelCompilationConfig& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}
    inline ModelCompilationConfig& WithImage(const char* value) { SetImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Environment variables that override the default ones in the model
     * container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOverrideEnvironment() const{ return m_overrideEnvironment; }
    inline bool OverrideEnvironmentHasBeenSet() const { return m_overrideEnvironmentHasBeenSet; }
    inline void SetOverrideEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_overrideEnvironmentHasBeenSet = true; m_overrideEnvironment = value; }
    inline void SetOverrideEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_overrideEnvironmentHasBeenSet = true; m_overrideEnvironment = std::move(value); }
    inline ModelCompilationConfig& WithOverrideEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetOverrideEnvironment(value); return *this;}
    inline ModelCompilationConfig& WithOverrideEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetOverrideEnvironment(std::move(value)); return *this;}
    inline ModelCompilationConfig& AddOverrideEnvironment(const Aws::String& key, const Aws::String& value) { m_overrideEnvironmentHasBeenSet = true; m_overrideEnvironment.emplace(key, value); return *this; }
    inline ModelCompilationConfig& AddOverrideEnvironment(Aws::String&& key, const Aws::String& value) { m_overrideEnvironmentHasBeenSet = true; m_overrideEnvironment.emplace(std::move(key), value); return *this; }
    inline ModelCompilationConfig& AddOverrideEnvironment(const Aws::String& key, Aws::String&& value) { m_overrideEnvironmentHasBeenSet = true; m_overrideEnvironment.emplace(key, std::move(value)); return *this; }
    inline ModelCompilationConfig& AddOverrideEnvironment(Aws::String&& key, Aws::String&& value) { m_overrideEnvironmentHasBeenSet = true; m_overrideEnvironment.emplace(std::move(key), std::move(value)); return *this; }
    inline ModelCompilationConfig& AddOverrideEnvironment(const char* key, Aws::String&& value) { m_overrideEnvironmentHasBeenSet = true; m_overrideEnvironment.emplace(key, std::move(value)); return *this; }
    inline ModelCompilationConfig& AddOverrideEnvironment(Aws::String&& key, const char* value) { m_overrideEnvironmentHasBeenSet = true; m_overrideEnvironment.emplace(std::move(key), value); return *this; }
    inline ModelCompilationConfig& AddOverrideEnvironment(const char* key, const char* value) { m_overrideEnvironmentHasBeenSet = true; m_overrideEnvironment.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_overrideEnvironment;
    bool m_overrideEnvironmentHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
