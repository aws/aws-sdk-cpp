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
    AWS_SSMINCIDENTS_API RelatedItemsUpdate();
    AWS_SSMINCIDENTS_API RelatedItemsUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API RelatedItemsUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the related item you're adding.</p>
     */
    inline const RelatedItem& GetItemToAdd() const{ return m_itemToAdd; }

    /**
     * <p>Details about the related item you're adding.</p>
     */
    inline bool ItemToAddHasBeenSet() const { return m_itemToAddHasBeenSet; }

    /**
     * <p>Details about the related item you're adding.</p>
     */
    inline void SetItemToAdd(const RelatedItem& value) { m_itemToAddHasBeenSet = true; m_itemToAdd = value; }

    /**
     * <p>Details about the related item you're adding.</p>
     */
    inline void SetItemToAdd(RelatedItem&& value) { m_itemToAddHasBeenSet = true; m_itemToAdd = std::move(value); }

    /**
     * <p>Details about the related item you're adding.</p>
     */
    inline RelatedItemsUpdate& WithItemToAdd(const RelatedItem& value) { SetItemToAdd(value); return *this;}

    /**
     * <p>Details about the related item you're adding.</p>
     */
    inline RelatedItemsUpdate& WithItemToAdd(RelatedItem&& value) { SetItemToAdd(std::move(value)); return *this;}


    /**
     * <p>Details about the related item you're deleting.</p>
     */
    inline const ItemIdentifier& GetItemToRemove() const{ return m_itemToRemove; }

    /**
     * <p>Details about the related item you're deleting.</p>
     */
    inline bool ItemToRemoveHasBeenSet() const { return m_itemToRemoveHasBeenSet; }

    /**
     * <p>Details about the related item you're deleting.</p>
     */
    inline void SetItemToRemove(const ItemIdentifier& value) { m_itemToRemoveHasBeenSet = true; m_itemToRemove = value; }

    /**
     * <p>Details about the related item you're deleting.</p>
     */
    inline void SetItemToRemove(ItemIdentifier&& value) { m_itemToRemoveHasBeenSet = true; m_itemToRemove = std::move(value); }

    /**
     * <p>Details about the related item you're deleting.</p>
     */
    inline RelatedItemsUpdate& WithItemToRemove(const ItemIdentifier& value) { SetItemToRemove(value); return *this;}

    /**
     * <p>Details about the related item you're deleting.</p>
     */
    inline RelatedItemsUpdate& WithItemToRemove(ItemIdentifier&& value) { SetItemToRemove(std::move(value)); return *this;}

  private:

    RelatedItem m_itemToAdd;
    bool m_itemToAddHasBeenSet = false;

    ItemIdentifier m_itemToRemove;
    bool m_itemToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
