/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
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
   * <p>The TensorBoard app settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TensorBoardAppSettings">AWS
   * API Reference</a></p>
   */
  class TensorBoardAppSettings
  {
  public:
    AWS_SAGEMAKER_API TensorBoardAppSettings() = default;
    AWS_SAGEMAKER_API TensorBoardAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TensorBoardAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the SageMaker
     * AI image created on the instance.</p>
     */
    inline const ResourceSpec& GetDefaultResourceSpec() const { return m_defaultResourceSpec; }
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }
    template<typename DefaultResourceSpecT = ResourceSpec>
    void SetDefaultResourceSpec(DefaultResourceSpecT&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::forward<DefaultResourceSpecT>(value); }
    template<typename DefaultResourceSpecT = ResourceSpec>
    TensorBoardAppSettings& WithDefaultResourceSpec(DefaultResourceSpecT&& value) { SetDefaultResourceSpec(std::forward<DefaultResourceSpecT>(value)); return *this;}
    ///@}
  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
