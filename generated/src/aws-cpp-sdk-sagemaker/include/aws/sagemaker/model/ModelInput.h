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
   * <p>Input object for the model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelInput">AWS
   * API Reference</a></p>
   */
  class ModelInput
  {
  public:
    AWS_SAGEMAKER_API ModelInput() = default;
    AWS_SAGEMAKER_API ModelInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input configuration object for the model.</p>
     */
    inline const Aws::String& GetDataInputConfig() const { return m_dataInputConfig; }
    inline bool DataInputConfigHasBeenSet() const { return m_dataInputConfigHasBeenSet; }
    template<typename DataInputConfigT = Aws::String>
    void SetDataInputConfig(DataInputConfigT&& value) { m_dataInputConfigHasBeenSet = true; m_dataInputConfig = std::forward<DataInputConfigT>(value); }
    template<typename DataInputConfigT = Aws::String>
    ModelInput& WithDataInputConfig(DataInputConfigT&& value) { SetDataInputConfig(std::forward<DataInputConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataInputConfig;
    bool m_dataInputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
