/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/AddRegionAction.h>
#include <aws/ssm-incidents/model/DeleteRegionAction.h>
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
   * <p>Details used when updating the replication set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateReplicationSetAction">AWS
   * API Reference</a></p>
   */
  class UpdateReplicationSetAction
  {
  public:
    AWS_SSMINCIDENTS_API UpdateReplicationSetAction();
    AWS_SSMINCIDENTS_API UpdateReplicationSetAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API UpdateReplicationSetAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the Amazon Web Services Region that you're adding to the
     * replication set.</p>
     */
    inline const AddRegionAction& GetAddRegionAction() const{ return m_addRegionAction; }

    /**
     * <p>Details about the Amazon Web Services Region that you're adding to the
     * replication set.</p>
     */
    inline bool AddRegionActionHasBeenSet() const { return m_addRegionActionHasBeenSet; }

    /**
     * <p>Details about the Amazon Web Services Region that you're adding to the
     * replication set.</p>
     */
    inline void SetAddRegionAction(const AddRegionAction& value) { m_addRegionActionHasBeenSet = true; m_addRegionAction = value; }

    /**
     * <p>Details about the Amazon Web Services Region that you're adding to the
     * replication set.</p>
     */
    inline void SetAddRegionAction(AddRegionAction&& value) { m_addRegionActionHasBeenSet = true; m_addRegionAction = std::move(value); }

    /**
     * <p>Details about the Amazon Web Services Region that you're adding to the
     * replication set.</p>
     */
    inline UpdateReplicationSetAction& WithAddRegionAction(const AddRegionAction& value) { SetAddRegionAction(value); return *this;}

    /**
     * <p>Details about the Amazon Web Services Region that you're adding to the
     * replication set.</p>
     */
    inline UpdateReplicationSetAction& WithAddRegionAction(AddRegionAction&& value) { SetAddRegionAction(std::move(value)); return *this;}


    /**
     * <p>Details about the Amazon Web Services Region that you're deleting to the
     * replication set.</p>
     */
    inline const DeleteRegionAction& GetDeleteRegionAction() const{ return m_deleteRegionAction; }

    /**
     * <p>Details about the Amazon Web Services Region that you're deleting to the
     * replication set.</p>
     */
    inline bool DeleteRegionActionHasBeenSet() const { return m_deleteRegionActionHasBeenSet; }

    /**
     * <p>Details about the Amazon Web Services Region that you're deleting to the
     * replication set.</p>
     */
    inline void SetDeleteRegionAction(const DeleteRegionAction& value) { m_deleteRegionActionHasBeenSet = true; m_deleteRegionAction = value; }

    /**
     * <p>Details about the Amazon Web Services Region that you're deleting to the
     * replication set.</p>
     */
    inline void SetDeleteRegionAction(DeleteRegionAction&& value) { m_deleteRegionActionHasBeenSet = true; m_deleteRegionAction = std::move(value); }

    /**
     * <p>Details about the Amazon Web Services Region that you're deleting to the
     * replication set.</p>
     */
    inline UpdateReplicationSetAction& WithDeleteRegionAction(const DeleteRegionAction& value) { SetDeleteRegionAction(value); return *this;}

    /**
     * <p>Details about the Amazon Web Services Region that you're deleting to the
     * replication set.</p>
     */
    inline UpdateReplicationSetAction& WithDeleteRegionAction(DeleteRegionAction&& value) { SetDeleteRegionAction(std::move(value)); return *this;}

  private:

    AddRegionAction m_addRegionAction;
    bool m_addRegionActionHasBeenSet = false;

    DeleteRegionAction m_deleteRegionAction;
    bool m_deleteRegionActionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
