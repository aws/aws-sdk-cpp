/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Configuration to run a processing job in a specified container
   * image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AppSpecification">AWS
   * API Reference</a></p>
   */
  class AppSpecification
  {
  public:
    AWS_SAGEMAKER_API AppSpecification();
    AWS_SAGEMAKER_API AppSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AppSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container image to be run by the processing job.</p>
     */
    inline const Aws::String& GetImageUri() const{ return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    inline void SetImageUri(const Aws::String& value) { m_imageUriHasBeenSet = true; m_imageUri = value; }
    inline void SetImageUri(Aws::String&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::move(value); }
    inline void SetImageUri(const char* value) { m_imageUriHasBeenSet = true; m_imageUri.assign(value); }
    inline AppSpecification& WithImageUri(const Aws::String& value) { SetImageUri(value); return *this;}
    inline AppSpecification& WithImageUri(Aws::String&& value) { SetImageUri(std::move(value)); return *this;}
    inline AppSpecification& WithImageUri(const char* value) { SetImageUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entrypoint for a container used to run a processing job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerEntrypoint() const{ return m_containerEntrypoint; }
    inline bool ContainerEntrypointHasBeenSet() const { return m_containerEntrypointHasBeenSet; }
    inline void SetContainerEntrypoint(const Aws::Vector<Aws::String>& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = value; }
    inline void SetContainerEntrypoint(Aws::Vector<Aws::String>&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = std::move(value); }
    inline AppSpecification& WithContainerEntrypoint(const Aws::Vector<Aws::String>& value) { SetContainerEntrypoint(value); return *this;}
    inline AppSpecification& WithContainerEntrypoint(Aws::Vector<Aws::String>&& value) { SetContainerEntrypoint(std::move(value)); return *this;}
    inline AppSpecification& AddContainerEntrypoint(const Aws::String& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(value); return *this; }
    inline AppSpecification& AddContainerEntrypoint(Aws::String&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(std::move(value)); return *this; }
    inline AppSpecification& AddContainerEntrypoint(const char* value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The arguments for a container used to run a processing job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerArguments() const{ return m_containerArguments; }
    inline bool ContainerArgumentsHasBeenSet() const { return m_containerArgumentsHasBeenSet; }
    inline void SetContainerArguments(const Aws::Vector<Aws::String>& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments = value; }
    inline void SetContainerArguments(Aws::Vector<Aws::String>&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments = std::move(value); }
    inline AppSpecification& WithContainerArguments(const Aws::Vector<Aws::String>& value) { SetContainerArguments(value); return *this;}
    inline AppSpecification& WithContainerArguments(Aws::Vector<Aws::String>&& value) { SetContainerArguments(std::move(value)); return *this;}
    inline AppSpecification& AddContainerArguments(const Aws::String& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(value); return *this; }
    inline AppSpecification& AddContainerArguments(Aws::String&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(std::move(value)); return *this; }
    inline AppSpecification& AddContainerArguments(const char* value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;

    Aws::Vector<Aws::String> m_containerEntrypoint;
    bool m_containerEntrypointHasBeenSet = false;

    Aws::Vector<Aws::String> m_containerArguments;
    bool m_containerArgumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
