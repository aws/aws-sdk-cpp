/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about additional Elastic Network Interfaces (ENIs) associated
   * with an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AdditionalEnis">AWS
   * API Reference</a></p>
   */
  class AdditionalEnis
  {
  public:
    AWS_SAGEMAKER_API AdditionalEnis() = default;
    AWS_SAGEMAKER_API AdditionalEnis(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AdditionalEnis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of Elastic Fabric Adapter (EFA) ENIs associated with the instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEfaEnis() const { return m_efaEnis; }
    inline bool EfaEnisHasBeenSet() const { return m_efaEnisHasBeenSet; }
    template<typename EfaEnisT = Aws::Vector<Aws::String>>
    void SetEfaEnis(EfaEnisT&& value) { m_efaEnisHasBeenSet = true; m_efaEnis = std::forward<EfaEnisT>(value); }
    template<typename EfaEnisT = Aws::Vector<Aws::String>>
    AdditionalEnis& WithEfaEnis(EfaEnisT&& value) { SetEfaEnis(std::forward<EfaEnisT>(value)); return *this;}
    template<typename EfaEnisT = Aws::String>
    AdditionalEnis& AddEfaEnis(EfaEnisT&& value) { m_efaEnisHasBeenSet = true; m_efaEnis.emplace_back(std::forward<EfaEnisT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_efaEnis;
    bool m_efaEnisHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
