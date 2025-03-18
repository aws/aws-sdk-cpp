/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClarifyExplainerConfig.h>
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
   * <p>A parameter to activate explainers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ExplainerConfig">AWS
   * API Reference</a></p>
   */
  class ExplainerConfig
  {
  public:
    AWS_SAGEMAKER_API ExplainerConfig() = default;
    AWS_SAGEMAKER_API ExplainerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ExplainerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A member of <code>ExplainerConfig</code> that contains configuration
     * parameters for the SageMaker Clarify explainer.</p>
     */
    inline const ClarifyExplainerConfig& GetClarifyExplainerConfig() const { return m_clarifyExplainerConfig; }
    inline bool ClarifyExplainerConfigHasBeenSet() const { return m_clarifyExplainerConfigHasBeenSet; }
    template<typename ClarifyExplainerConfigT = ClarifyExplainerConfig>
    void SetClarifyExplainerConfig(ClarifyExplainerConfigT&& value) { m_clarifyExplainerConfigHasBeenSet = true; m_clarifyExplainerConfig = std::forward<ClarifyExplainerConfigT>(value); }
    template<typename ClarifyExplainerConfigT = ClarifyExplainerConfig>
    ExplainerConfig& WithClarifyExplainerConfig(ClarifyExplainerConfigT&& value) { SetClarifyExplainerConfig(std::forward<ClarifyExplainerConfigT>(value)); return *this;}
    ///@}
  private:

    ClarifyExplainerConfig m_clarifyExplainerConfig;
    bool m_clarifyExplainerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
