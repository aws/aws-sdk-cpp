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
   * <p>Information that SageMaker Neo automatically derived about the
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DerivedInformation">AWS
   * API Reference</a></p>
   */
  class DerivedInformation
  {
  public:
    AWS_SAGEMAKER_API DerivedInformation() = default;
    AWS_SAGEMAKER_API DerivedInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DerivedInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data input configuration that SageMaker Neo automatically derived for the
     * model. When SageMaker Neo derives this information, you don't need to specify
     * the data input configuration when you create a compilation job.</p>
     */
    inline const Aws::String& GetDerivedDataInputConfig() const { return m_derivedDataInputConfig; }
    inline bool DerivedDataInputConfigHasBeenSet() const { return m_derivedDataInputConfigHasBeenSet; }
    template<typename DerivedDataInputConfigT = Aws::String>
    void SetDerivedDataInputConfig(DerivedDataInputConfigT&& value) { m_derivedDataInputConfigHasBeenSet = true; m_derivedDataInputConfig = std::forward<DerivedDataInputConfigT>(value); }
    template<typename DerivedDataInputConfigT = Aws::String>
    DerivedInformation& WithDerivedDataInputConfig(DerivedDataInputConfigT&& value) { SetDerivedDataInputConfig(std::forward<DerivedDataInputConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_derivedDataInputConfig;
    bool m_derivedDataInputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
