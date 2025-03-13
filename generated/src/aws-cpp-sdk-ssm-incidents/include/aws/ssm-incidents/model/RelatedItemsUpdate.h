/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/RelatedItem.h>
#include <aws/ssm-incidents/model/ItemIdentifier.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Details about the related item you're adding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/RelatedItemsUpdate">AWS
   * API Reference</a></p>
   */
  class RelatedItemsUpdate
  {
  public:
    AWS_SSMINCIDENTS_API RelatedItemsUpdate() = default;
    AWS_SSMINCIDENTS_API RelatedItemsUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API RelatedItemsUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the related item you're adding.</p>
     */
    inline const RelatedItem& GetItemToAdd() const { return m_itemToAdd; }
    inline bool ItemToAddHasBeenSet() const { return m_itemToAddHasBeenSet; }
    template<typename ItemToAddT = RelatedItem>
    void SetItemToAdd(ItemToAddT&& value) { m_itemToAddHasBeenSet = true; m_itemToAdd = std::forward<ItemToAddT>(value); }
    template<typename ItemToAddT = RelatedItem>
    RelatedItemsUpdate& WithItemToAdd(ItemToAddT&& value) { SetItemToAdd(std::forward<ItemToAddT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the related item you're deleting.</p>
     */
    inline const ItemIdentifier& GetItemToRemove() const { return m_itemToRemove; }
    inline bool ItemToRemoveHasBeenSet() const { return m_itemToRemoveHasBeenSet; }
    template<typename ItemToRemoveT = ItemIdentifier>
    void SetItemToRemove(ItemToRemoveT&& value) { m_itemToRemoveHasBeenSet = true; m_itemToRemove = std::forward<ItemToRemoveT>(value); }
    template<typename ItemToRemoveT = ItemIdentifier>
    RelatedItemsUpdate& WithItemToRemove(ItemToRemoveT&& value) { SetItemToRemove(std::forward<ItemToRemoveT>(value)); return *this;}
    ///@}
  private:

    RelatedItem m_itemToAdd;
    bool m_itemToAddHasBeenSet = false;

    ItemIdentifier m_itemToRemove;
    bool m_itemToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
