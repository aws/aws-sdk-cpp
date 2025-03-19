/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>If hyperparameter optimization (HPO) was performed, contains the
   * hyperparameter values of the best performing model.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/TunedHPOParams">AWS
   * API Reference</a></p>
   */
  class TunedHPOParams
  {
  public:
    AWS_PERSONALIZE_API TunedHPOParams() = default;
    AWS_PERSONALIZE_API TunedHPOParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API TunedHPOParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of the hyperparameter values of the best performing model.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAlgorithmHyperParameters() const { return m_algorithmHyperParameters; }
    inline bool AlgorithmHyperParametersHasBeenSet() const { return m_algorithmHyperParametersHasBeenSet; }
    template<typename AlgorithmHyperParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetAlgorithmHyperParameters(AlgorithmHyperParametersT&& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters = std::forward<AlgorithmHyperParametersT>(value); }
    template<typename AlgorithmHyperParametersT = Aws::Map<Aws::String, Aws::String>>
    TunedHPOParams& WithAlgorithmHyperParameters(AlgorithmHyperParametersT&& value) { SetAlgorithmHyperParameters(std::forward<AlgorithmHyperParametersT>(value)); return *this;}
    template<typename AlgorithmHyperParametersKeyT = Aws::String, typename AlgorithmHyperParametersValueT = Aws::String>
    TunedHPOParams& AddAlgorithmHyperParameters(AlgorithmHyperParametersKeyT&& key, AlgorithmHyperParametersValueT&& value) {
      m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(std::forward<AlgorithmHyperParametersKeyT>(key), std::forward<AlgorithmHyperParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_algorithmHyperParameters;
    bool m_algorithmHyperParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
