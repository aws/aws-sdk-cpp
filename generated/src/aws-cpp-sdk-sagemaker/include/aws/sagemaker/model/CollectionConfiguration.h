/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Configuration information for the Amazon SageMaker Debugger output tensor
   * collections.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CollectionConfiguration">AWS
   * API Reference</a></p>
   */
  class CollectionConfiguration
  {
  public:
    AWS_SAGEMAKER_API CollectionConfiguration() = default;
    AWS_SAGEMAKER_API CollectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CollectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the tensor collection. The name must be unique relative to other
     * rule configuration names.</p>
     */
    inline const Aws::String& GetCollectionName() const { return m_collectionName; }
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }
    template<typename CollectionNameT = Aws::String>
    void SetCollectionName(CollectionNameT&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::forward<CollectionNameT>(value); }
    template<typename CollectionNameT = Aws::String>
    CollectionConfiguration& WithCollectionName(CollectionNameT&& value) { SetCollectionName(std::forward<CollectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter values for the tensor collection. The allowed parameters are
     * <code>"name"</code>, <code>"include_regex"</code>,
     * <code>"reduction_config"</code>, <code>"save_config"</code>,
     * <code>"tensor_names"</code>, and <code>"save_histogram"</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCollectionParameters() const { return m_collectionParameters; }
    inline bool CollectionParametersHasBeenSet() const { return m_collectionParametersHasBeenSet; }
    template<typename CollectionParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetCollectionParameters(CollectionParametersT&& value) { m_collectionParametersHasBeenSet = true; m_collectionParameters = std::forward<CollectionParametersT>(value); }
    template<typename CollectionParametersT = Aws::Map<Aws::String, Aws::String>>
    CollectionConfiguration& WithCollectionParameters(CollectionParametersT&& value) { SetCollectionParameters(std::forward<CollectionParametersT>(value)); return *this;}
    template<typename CollectionParametersKeyT = Aws::String, typename CollectionParametersValueT = Aws::String>
    CollectionConfiguration& AddCollectionParameters(CollectionParametersKeyT&& key, CollectionParametersValueT&& value) {
      m_collectionParametersHasBeenSet = true; m_collectionParameters.emplace(std::forward<CollectionParametersKeyT>(key), std::forward<CollectionParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_collectionParameters;
    bool m_collectionParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
