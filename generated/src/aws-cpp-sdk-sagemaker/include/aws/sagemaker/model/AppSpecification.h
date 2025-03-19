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
    AWS_SAGEMAKER_API AppSpecification() = default;
    AWS_SAGEMAKER_API AppSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AppSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container image to be run by the processing job.</p>
     */
    inline const Aws::String& GetImageUri() const { return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    template<typename ImageUriT = Aws::String>
    void SetImageUri(ImageUriT&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::forward<ImageUriT>(value); }
    template<typename ImageUriT = Aws::String>
    AppSpecification& WithImageUri(ImageUriT&& value) { SetImageUri(std::forward<ImageUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entrypoint for a container used to run a processing job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerEntrypoint() const { return m_containerEntrypoint; }
    inline bool ContainerEntrypointHasBeenSet() const { return m_containerEntrypointHasBeenSet; }
    template<typename ContainerEntrypointT = Aws::Vector<Aws::String>>
    void SetContainerEntrypoint(ContainerEntrypointT&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = std::forward<ContainerEntrypointT>(value); }
    template<typename ContainerEntrypointT = Aws::Vector<Aws::String>>
    AppSpecification& WithContainerEntrypoint(ContainerEntrypointT&& value) { SetContainerEntrypoint(std::forward<ContainerEntrypointT>(value)); return *this;}
    template<typename ContainerEntrypointT = Aws::String>
    AppSpecification& AddContainerEntrypoint(ContainerEntrypointT&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.emplace_back(std::forward<ContainerEntrypointT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The arguments for a container used to run a processing job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerArguments() const { return m_containerArguments; }
    inline bool ContainerArgumentsHasBeenSet() const { return m_containerArgumentsHasBeenSet; }
    template<typename ContainerArgumentsT = Aws::Vector<Aws::String>>
    void SetContainerArguments(ContainerArgumentsT&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments = std::forward<ContainerArgumentsT>(value); }
    template<typename ContainerArgumentsT = Aws::Vector<Aws::String>>
    AppSpecification& WithContainerArguments(ContainerArgumentsT&& value) { SetContainerArguments(std::forward<ContainerArgumentsT>(value)); return *this;}
    template<typename ContainerArgumentsT = Aws::String>
    AppSpecification& AddContainerArguments(ContainerArgumentsT&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.emplace_back(std::forward<ContainerArgumentsT>(value)); return *this; }
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
