/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class ModifyDBClusterSnapshotAttributeRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API ModifyDBClusterSnapshotAttributeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBClusterSnapshotAttribute"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier for the DB cluster snapshot to modify the attributes for.</p>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const { return m_dBClusterSnapshotIdentifier; }
    inline bool DBClusterSnapshotIdentifierHasBeenSet() const { return m_dBClusterSnapshotIdentifierHasBeenSet; }
    template<typename DBClusterSnapshotIdentifierT = Aws::String>
    void SetDBClusterSnapshotIdentifier(DBClusterSnapshotIdentifierT&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = std::forward<DBClusterSnapshotIdentifierT>(value); }
    template<typename DBClusterSnapshotIdentifierT = Aws::String>
    ModifyDBClusterSnapshotAttributeRequest& WithDBClusterSnapshotIdentifier(DBClusterSnapshotIdentifierT&& value) { SetDBClusterSnapshotIdentifier(std::forward<DBClusterSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB cluster snapshot attribute to modify.</p> <p>To manage
     * authorization for other Amazon accounts to copy or restore a manual DB cluster
     * snapshot, set this value to <code>restore</code>.</p>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    ModifyDBClusterSnapshotAttributeRequest& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DB cluster snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other Amazon accounts to copy or
     * restore a manual DB cluster snapshot, set this list to include one or more
     * Amazon account IDs, or <code>all</code> to make the manual DB cluster snapshot
     * restorable by any Amazon account. Do not add the <code>all</code> value for any
     * manual DB cluster snapshots that contain private information that you don't want
     * available to all Amazon accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValuesToAdd() const { return m_valuesToAdd; }
    inline bool ValuesToAddHasBeenSet() const { return m_valuesToAddHasBeenSet; }
    template<typename ValuesToAddT = Aws::Vector<Aws::String>>
    void SetValuesToAdd(ValuesToAddT&& value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd = std::forward<ValuesToAddT>(value); }
    template<typename ValuesToAddT = Aws::Vector<Aws::String>>
    ModifyDBClusterSnapshotAttributeRequest& WithValuesToAdd(ValuesToAddT&& value) { SetValuesToAdd(std::forward<ValuesToAddT>(value)); return *this;}
    template<typename ValuesToAddT = Aws::String>
    ModifyDBClusterSnapshotAttributeRequest& AddValuesToAdd(ValuesToAddT&& value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd.emplace_back(std::forward<ValuesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of DB cluster snapshot attributes to remove from the attribute
     * specified by <code>AttributeName</code>.</p> <p>To remove authorization for
     * other Amazon accounts to copy or restore a manual DB cluster snapshot, set this
     * list to include one or more Amazon account identifiers, or <code>all</code> to
     * remove authorization for any Amazon account to copy or restore the DB cluster
     * snapshot. If you specify <code>all</code>, an Amazon account whose account ID is
     * explicitly added to the <code>restore</code> attribute can still copy or restore
     * a manual DB cluster snapshot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValuesToRemove() const { return m_valuesToRemove; }
    inline bool ValuesToRemoveHasBeenSet() const { return m_valuesToRemoveHasBeenSet; }
    template<typename ValuesToRemoveT = Aws::Vector<Aws::String>>
    void SetValuesToRemove(ValuesToRemoveT&& value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove = std::forward<ValuesToRemoveT>(value); }
    template<typename ValuesToRemoveT = Aws::Vector<Aws::String>>
    ModifyDBClusterSnapshotAttributeRequest& WithValuesToRemove(ValuesToRemoveT&& value) { SetValuesToRemove(std::forward<ValuesToRemoveT>(value)); return *this;}
    template<typename ValuesToRemoveT = Aws::String>
    ModifyDBClusterSnapshotAttributeRequest& AddValuesToRemove(ValuesToRemoveT&& value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove.emplace_back(std::forward<ValuesToRemoveT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet = false;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_valuesToAdd;
    bool m_valuesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_valuesToRemove;
    bool m_valuesToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
