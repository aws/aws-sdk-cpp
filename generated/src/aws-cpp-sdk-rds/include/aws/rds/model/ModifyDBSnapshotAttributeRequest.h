/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBSnapshotAttributeMessage">AWS
   * API Reference</a></p>
   */
  class ModifyDBSnapshotAttributeRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyDBSnapshotAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBSnapshotAttribute"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier for the DB snapshot to modify the attributes for.</p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p>The identifier for the DB snapshot to modify the attributes for.</p>
     */
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the DB snapshot to modify the attributes for.</p>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the DB snapshot to modify the attributes for.</p>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier for the DB snapshot to modify the attributes for.</p>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the DB snapshot to modify the attributes for.</p>
     */
    inline ModifyDBSnapshotAttributeRequest& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the DB snapshot to modify the attributes for.</p>
     */
    inline ModifyDBSnapshotAttributeRequest& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the DB snapshot to modify the attributes for.</p>
     */
    inline ModifyDBSnapshotAttributeRequest& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}


    /**
     * <p>The name of the DB snapshot attribute to modify.</p> <p>To manage
     * authorization for other Amazon Web Services accounts to copy or restore a manual
     * DB snapshot, set this value to <code>restore</code>.</p>  <p>To view the
     * list of attributes available to modify, use the
     * <a>DescribeDBSnapshotAttributes</a> API operation.</p> 
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the DB snapshot attribute to modify.</p> <p>To manage
     * authorization for other Amazon Web Services accounts to copy or restore a manual
     * DB snapshot, set this value to <code>restore</code>.</p>  <p>To view the
     * list of attributes available to modify, use the
     * <a>DescribeDBSnapshotAttributes</a> API operation.</p> 
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the DB snapshot attribute to modify.</p> <p>To manage
     * authorization for other Amazon Web Services accounts to copy or restore a manual
     * DB snapshot, set this value to <code>restore</code>.</p>  <p>To view the
     * list of attributes available to modify, use the
     * <a>DescribeDBSnapshotAttributes</a> API operation.</p> 
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the DB snapshot attribute to modify.</p> <p>To manage
     * authorization for other Amazon Web Services accounts to copy or restore a manual
     * DB snapshot, set this value to <code>restore</code>.</p>  <p>To view the
     * list of attributes available to modify, use the
     * <a>DescribeDBSnapshotAttributes</a> API operation.</p> 
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the DB snapshot attribute to modify.</p> <p>To manage
     * authorization for other Amazon Web Services accounts to copy or restore a manual
     * DB snapshot, set this value to <code>restore</code>.</p>  <p>To view the
     * list of attributes available to modify, use the
     * <a>DescribeDBSnapshotAttributes</a> API operation.</p> 
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the DB snapshot attribute to modify.</p> <p>To manage
     * authorization for other Amazon Web Services accounts to copy or restore a manual
     * DB snapshot, set this value to <code>restore</code>.</p>  <p>To view the
     * list of attributes available to modify, use the
     * <a>DescribeDBSnapshotAttributes</a> API operation.</p> 
     */
    inline ModifyDBSnapshotAttributeRequest& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the DB snapshot attribute to modify.</p> <p>To manage
     * authorization for other Amazon Web Services accounts to copy or restore a manual
     * DB snapshot, set this value to <code>restore</code>.</p>  <p>To view the
     * list of attributes available to modify, use the
     * <a>DescribeDBSnapshotAttributes</a> API operation.</p> 
     */
    inline ModifyDBSnapshotAttributeRequest& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB snapshot attribute to modify.</p> <p>To manage
     * authorization for other Amazon Web Services accounts to copy or restore a manual
     * DB snapshot, set this value to <code>restore</code>.</p>  <p>To view the
     * list of attributes available to modify, use the
     * <a>DescribeDBSnapshotAttributes</a> API operation.</p> 
     */
    inline ModifyDBSnapshotAttributeRequest& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>A list of DB snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other Amazon Web Services
     * accounts to copy or restore a manual snapshot, set this list to include one or
     * more Amazon Web Services account IDs, or <code>all</code> to make the manual DB
     * snapshot restorable by any Amazon Web Services account. Do not add the
     * <code>all</code> value for any manual DB snapshots that contain private
     * information that you don't want available to all Amazon Web Services
     * accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValuesToAdd() const{ return m_valuesToAdd; }

    /**
     * <p>A list of DB snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other Amazon Web Services
     * accounts to copy or restore a manual snapshot, set this list to include one or
     * more Amazon Web Services account IDs, or <code>all</code> to make the manual DB
     * snapshot restorable by any Amazon Web Services account. Do not add the
     * <code>all</code> value for any manual DB snapshots that contain private
     * information that you don't want available to all Amazon Web Services
     * accounts.</p>
     */
    inline bool ValuesToAddHasBeenSet() const { return m_valuesToAddHasBeenSet; }

    /**
     * <p>A list of DB snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other Amazon Web Services
     * accounts to copy or restore a manual snapshot, set this list to include one or
     * more Amazon Web Services account IDs, or <code>all</code> to make the manual DB
     * snapshot restorable by any Amazon Web Services account. Do not add the
     * <code>all</code> value for any manual DB snapshots that contain private
     * information that you don't want available to all Amazon Web Services
     * accounts.</p>
     */
    inline void SetValuesToAdd(const Aws::Vector<Aws::String>& value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd = value; }

    /**
     * <p>A list of DB snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other Amazon Web Services
     * accounts to copy or restore a manual snapshot, set this list to include one or
     * more Amazon Web Services account IDs, or <code>all</code> to make the manual DB
     * snapshot restorable by any Amazon Web Services account. Do not add the
     * <code>all</code> value for any manual DB snapshots that contain private
     * information that you don't want available to all Amazon Web Services
     * accounts.</p>
     */
    inline void SetValuesToAdd(Aws::Vector<Aws::String>&& value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd = std::move(value); }

    /**
     * <p>A list of DB snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other Amazon Web Services
     * accounts to copy or restore a manual snapshot, set this list to include one or
     * more Amazon Web Services account IDs, or <code>all</code> to make the manual DB
     * snapshot restorable by any Amazon Web Services account. Do not add the
     * <code>all</code> value for any manual DB snapshots that contain private
     * information that you don't want available to all Amazon Web Services
     * accounts.</p>
     */
    inline ModifyDBSnapshotAttributeRequest& WithValuesToAdd(const Aws::Vector<Aws::String>& value) { SetValuesToAdd(value); return *this;}

    /**
     * <p>A list of DB snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other Amazon Web Services
     * accounts to copy or restore a manual snapshot, set this list to include one or
     * more Amazon Web Services account IDs, or <code>all</code> to make the manual DB
     * snapshot restorable by any Amazon Web Services account. Do not add the
     * <code>all</code> value for any manual DB snapshots that contain private
     * information that you don't want available to all Amazon Web Services
     * accounts.</p>
     */
    inline ModifyDBSnapshotAttributeRequest& WithValuesToAdd(Aws::Vector<Aws::String>&& value) { SetValuesToAdd(std::move(value)); return *this;}

    /**
     * <p>A list of DB snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other Amazon Web Services
     * accounts to copy or restore a manual snapshot, set this list to include one or
     * more Amazon Web Services account IDs, or <code>all</code> to make the manual DB
     * snapshot restorable by any Amazon Web Services account. Do not add the
     * <code>all</code> value for any manual DB snapshots that contain private
     * information that you don't want available to all Amazon Web Services
     * accounts.</p>
     */
    inline ModifyDBSnapshotAttributeRequest& AddValuesToAdd(const Aws::String& value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd.push_back(value); return *this; }

    /**
     * <p>A list of DB snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other Amazon Web Services
     * accounts to copy or restore a manual snapshot, set this list to include one or
     * more Amazon Web Services account IDs, or <code>all</code> to make the manual DB
     * snapshot restorable by any Amazon Web Services account. Do not add the
     * <code>all</code> value for any manual DB snapshots that contain private
     * information that you don't want available to all Amazon Web Services
     * accounts.</p>
     */
    inline ModifyDBSnapshotAttributeRequest& AddValuesToAdd(Aws::String&& value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of DB snapshot attributes to add to the attribute specified by
     * <code>AttributeName</code>.</p> <p>To authorize other Amazon Web Services
     * accounts to copy or restore a manual snapshot, set this list to include one or
     * more Amazon Web Services account IDs, or <code>all</code> to make the manual DB
     * snapshot restorable by any Amazon Web Services account. Do not add the
     * <code>all</code> value for any manual DB snapshots that contain private
     * information that you don't want available to all Amazon Web Services
     * accounts.</p>
     */
    inline ModifyDBSnapshotAttributeRequest& AddValuesToAdd(const char* value) { m_valuesToAddHasBeenSet = true; m_valuesToAdd.push_back(value); return *this; }


    /**
     * <p>A list of DB snapshot attributes to remove from the attribute specified by
     * <code>AttributeName</code>.</p> <p>To remove authorization for other Amazon Web
     * Services accounts to copy or restore a manual snapshot, set this list to include
     * one or more Amazon Web Services account identifiers, or <code>all</code> to
     * remove authorization for any Amazon Web Services account to copy or restore the
     * DB snapshot. If you specify <code>all</code>, an Amazon Web Services account
     * whose account ID is explicitly added to the <code>restore</code> attribute can
     * still copy or restore the manual DB snapshot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValuesToRemove() const{ return m_valuesToRemove; }

    /**
     * <p>A list of DB snapshot attributes to remove from the attribute specified by
     * <code>AttributeName</code>.</p> <p>To remove authorization for other Amazon Web
     * Services accounts to copy or restore a manual snapshot, set this list to include
     * one or more Amazon Web Services account identifiers, or <code>all</code> to
     * remove authorization for any Amazon Web Services account to copy or restore the
     * DB snapshot. If you specify <code>all</code>, an Amazon Web Services account
     * whose account ID is explicitly added to the <code>restore</code> attribute can
     * still copy or restore the manual DB snapshot.</p>
     */
    inline bool ValuesToRemoveHasBeenSet() const { return m_valuesToRemoveHasBeenSet; }

    /**
     * <p>A list of DB snapshot attributes to remove from the attribute specified by
     * <code>AttributeName</code>.</p> <p>To remove authorization for other Amazon Web
     * Services accounts to copy or restore a manual snapshot, set this list to include
     * one or more Amazon Web Services account identifiers, or <code>all</code> to
     * remove authorization for any Amazon Web Services account to copy or restore the
     * DB snapshot. If you specify <code>all</code>, an Amazon Web Services account
     * whose account ID is explicitly added to the <code>restore</code> attribute can
     * still copy or restore the manual DB snapshot.</p>
     */
    inline void SetValuesToRemove(const Aws::Vector<Aws::String>& value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove = value; }

    /**
     * <p>A list of DB snapshot attributes to remove from the attribute specified by
     * <code>AttributeName</code>.</p> <p>To remove authorization for other Amazon Web
     * Services accounts to copy or restore a manual snapshot, set this list to include
     * one or more Amazon Web Services account identifiers, or <code>all</code> to
     * remove authorization for any Amazon Web Services account to copy or restore the
     * DB snapshot. If you specify <code>all</code>, an Amazon Web Services account
     * whose account ID is explicitly added to the <code>restore</code> attribute can
     * still copy or restore the manual DB snapshot.</p>
     */
    inline void SetValuesToRemove(Aws::Vector<Aws::String>&& value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove = std::move(value); }

    /**
     * <p>A list of DB snapshot attributes to remove from the attribute specified by
     * <code>AttributeName</code>.</p> <p>To remove authorization for other Amazon Web
     * Services accounts to copy or restore a manual snapshot, set this list to include
     * one or more Amazon Web Services account identifiers, or <code>all</code> to
     * remove authorization for any Amazon Web Services account to copy or restore the
     * DB snapshot. If you specify <code>all</code>, an Amazon Web Services account
     * whose account ID is explicitly added to the <code>restore</code> attribute can
     * still copy or restore the manual DB snapshot.</p>
     */
    inline ModifyDBSnapshotAttributeRequest& WithValuesToRemove(const Aws::Vector<Aws::String>& value) { SetValuesToRemove(value); return *this;}

    /**
     * <p>A list of DB snapshot attributes to remove from the attribute specified by
     * <code>AttributeName</code>.</p> <p>To remove authorization for other Amazon Web
     * Services accounts to copy or restore a manual snapshot, set this list to include
     * one or more Amazon Web Services account identifiers, or <code>all</code> to
     * remove authorization for any Amazon Web Services account to copy or restore the
     * DB snapshot. If you specify <code>all</code>, an Amazon Web Services account
     * whose account ID is explicitly added to the <code>restore</code> attribute can
     * still copy or restore the manual DB snapshot.</p>
     */
    inline ModifyDBSnapshotAttributeRequest& WithValuesToRemove(Aws::Vector<Aws::String>&& value) { SetValuesToRemove(std::move(value)); return *this;}

    /**
     * <p>A list of DB snapshot attributes to remove from the attribute specified by
     * <code>AttributeName</code>.</p> <p>To remove authorization for other Amazon Web
     * Services accounts to copy or restore a manual snapshot, set this list to include
     * one or more Amazon Web Services account identifiers, or <code>all</code> to
     * remove authorization for any Amazon Web Services account to copy or restore the
     * DB snapshot. If you specify <code>all</code>, an Amazon Web Services account
     * whose account ID is explicitly added to the <code>restore</code> attribute can
     * still copy or restore the manual DB snapshot.</p>
     */
    inline ModifyDBSnapshotAttributeRequest& AddValuesToRemove(const Aws::String& value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove.push_back(value); return *this; }

    /**
     * <p>A list of DB snapshot attributes to remove from the attribute specified by
     * <code>AttributeName</code>.</p> <p>To remove authorization for other Amazon Web
     * Services accounts to copy or restore a manual snapshot, set this list to include
     * one or more Amazon Web Services account identifiers, or <code>all</code> to
     * remove authorization for any Amazon Web Services account to copy or restore the
     * DB snapshot. If you specify <code>all</code>, an Amazon Web Services account
     * whose account ID is explicitly added to the <code>restore</code> attribute can
     * still copy or restore the manual DB snapshot.</p>
     */
    inline ModifyDBSnapshotAttributeRequest& AddValuesToRemove(Aws::String&& value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of DB snapshot attributes to remove from the attribute specified by
     * <code>AttributeName</code>.</p> <p>To remove authorization for other Amazon Web
     * Services accounts to copy or restore a manual snapshot, set this list to include
     * one or more Amazon Web Services account identifiers, or <code>all</code> to
     * remove authorization for any Amazon Web Services account to copy or restore the
     * DB snapshot. If you specify <code>all</code>, an Amazon Web Services account
     * whose account ID is explicitly added to the <code>restore</code> attribute can
     * still copy or restore the manual DB snapshot.</p>
     */
    inline ModifyDBSnapshotAttributeRequest& AddValuesToRemove(const char* value) { m_valuesToRemoveHasBeenSet = true; m_valuesToRemove.push_back(value); return *this; }

  private:

    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet = false;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_valuesToAdd;
    bool m_valuesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_valuesToRemove;
    bool m_valuesToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
