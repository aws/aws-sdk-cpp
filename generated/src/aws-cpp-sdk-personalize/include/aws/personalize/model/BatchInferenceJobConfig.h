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
   * <p>The configuration details of a batch inference job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/BatchInferenceJobConfig">AWS
   * API Reference</a></p>
   */
  class BatchInferenceJobConfig
  {
  public:
    AWS_PERSONALIZE_API BatchInferenceJobConfig() = default;
    AWS_PERSONALIZE_API BatchInferenceJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API BatchInferenceJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string to string map specifying the exploration configuration
     * hyperparameters, including <code>explorationWeight</code> and
     * <code>explorationItemAgeCutOff</code>, you want to use to configure the amount
     * of item exploration Amazon Personalize uses when recommending items. See <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetItemExplorationConfig() const { return m_itemExplorationConfig; }
    inline bool ItemExplorationConfigHasBeenSet() const { return m_itemExplorationConfigHasBeenSet; }
    template<typename ItemExplorationConfigT = Aws::Map<Aws::String, Aws::String>>
    void SetItemExplorationConfig(ItemExplorationConfigT&& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig = std::forward<ItemExplorationConfigT>(value); }
    template<typename ItemExplorationConfigT = Aws::Map<Aws::String, Aws::String>>
    BatchInferenceJobConfig& WithItemExplorationConfig(ItemExplorationConfigT&& value) { SetItemExplorationConfig(std::forward<ItemExplorationConfigT>(value)); return *this;}
    template<typename ItemExplorationConfigKeyT = Aws::String, typename ItemExplorationConfigValueT = Aws::String>
    BatchInferenceJobConfig& AddItemExplorationConfig(ItemExplorationConfigKeyT&& key, ItemExplorationConfigValueT&& value) {
      m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(std::forward<ItemExplorationConfigKeyT>(key), std::forward<ItemExplorationConfigValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_itemExplorationConfig;
    bool m_itemExplorationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
