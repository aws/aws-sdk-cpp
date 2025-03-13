/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/SourceAlgorithm.h>
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
   * <p>A list of algorithms that were used to create a model package.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SourceAlgorithmSpecification">AWS
   * API Reference</a></p>
   */
  class SourceAlgorithmSpecification
  {
  public:
    AWS_SAGEMAKER_API SourceAlgorithmSpecification() = default;
    AWS_SAGEMAKER_API SourceAlgorithmSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SourceAlgorithmSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of the algorithms that were used to create a model package.</p>
     */
    inline const Aws::Vector<SourceAlgorithm>& GetSourceAlgorithms() const { return m_sourceAlgorithms; }
    inline bool SourceAlgorithmsHasBeenSet() const { return m_sourceAlgorithmsHasBeenSet; }
    template<typename SourceAlgorithmsT = Aws::Vector<SourceAlgorithm>>
    void SetSourceAlgorithms(SourceAlgorithmsT&& value) { m_sourceAlgorithmsHasBeenSet = true; m_sourceAlgorithms = std::forward<SourceAlgorithmsT>(value); }
    template<typename SourceAlgorithmsT = Aws::Vector<SourceAlgorithm>>
    SourceAlgorithmSpecification& WithSourceAlgorithms(SourceAlgorithmsT&& value) { SetSourceAlgorithms(std::forward<SourceAlgorithmsT>(value)); return *this;}
    template<typename SourceAlgorithmsT = SourceAlgorithm>
    SourceAlgorithmSpecification& AddSourceAlgorithms(SourceAlgorithmsT&& value) { m_sourceAlgorithmsHasBeenSet = true; m_sourceAlgorithms.emplace_back(std::forward<SourceAlgorithmsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SourceAlgorithm> m_sourceAlgorithms;
    bool m_sourceAlgorithmsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
