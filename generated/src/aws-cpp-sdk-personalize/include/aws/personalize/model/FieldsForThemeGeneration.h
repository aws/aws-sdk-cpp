﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
   * <p>A string to string map of the configuration details for theme
   * generation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/FieldsForThemeGeneration">AWS
   * API Reference</a></p>
   */
  class FieldsForThemeGeneration
  {
  public:
    AWS_PERSONALIZE_API FieldsForThemeGeneration() = default;
    AWS_PERSONALIZE_API FieldsForThemeGeneration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API FieldsForThemeGeneration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Items dataset column that stores the name of each item in the
     * dataset.</p>
     */
    inline const Aws::String& GetItemName() const { return m_itemName; }
    inline bool ItemNameHasBeenSet() const { return m_itemNameHasBeenSet; }
    template<typename ItemNameT = Aws::String>
    void SetItemName(ItemNameT&& value) { m_itemNameHasBeenSet = true; m_itemName = std::forward<ItemNameT>(value); }
    template<typename ItemNameT = Aws::String>
    FieldsForThemeGeneration& WithItemName(ItemNameT&& value) { SetItemName(std::forward<ItemNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_itemName;
    bool m_itemNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
