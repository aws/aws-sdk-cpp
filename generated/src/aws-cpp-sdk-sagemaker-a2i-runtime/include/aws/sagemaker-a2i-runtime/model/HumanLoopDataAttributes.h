/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-a2i-runtime/model/ContentClassifier.h>
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
namespace AugmentedAIRuntime
{
namespace Model
{

  /**
   * <p>Attributes of the data specified by the customer. Use these to describe the
   * data to be labeled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-a2i-runtime-2019-11-07/HumanLoopDataAttributes">AWS
   * API Reference</a></p>
   */
  class HumanLoopDataAttributes
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API HumanLoopDataAttributes() = default;
    AWS_AUGMENTEDAIRUNTIME_API HumanLoopDataAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUGMENTEDAIRUNTIME_API HumanLoopDataAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUGMENTEDAIRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Declares that your content is free of personally identifiable information or
     * adult content.</p> <p>Amazon SageMaker can restrict the Amazon Mechanical Turk
     * workers who can view your task based on this information.</p>
     */
    inline const Aws::Vector<ContentClassifier>& GetContentClassifiers() const { return m_contentClassifiers; }
    inline bool ContentClassifiersHasBeenSet() const { return m_contentClassifiersHasBeenSet; }
    template<typename ContentClassifiersT = Aws::Vector<ContentClassifier>>
    void SetContentClassifiers(ContentClassifiersT&& value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers = std::forward<ContentClassifiersT>(value); }
    template<typename ContentClassifiersT = Aws::Vector<ContentClassifier>>
    HumanLoopDataAttributes& WithContentClassifiers(ContentClassifiersT&& value) { SetContentClassifiers(std::forward<ContentClassifiersT>(value)); return *this;}
    inline HumanLoopDataAttributes& AddContentClassifiers(ContentClassifier value) { m_contentClassifiersHasBeenSet = true; m_contentClassifiers.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<ContentClassifier> m_contentClassifiers;
    bool m_contentClassifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
