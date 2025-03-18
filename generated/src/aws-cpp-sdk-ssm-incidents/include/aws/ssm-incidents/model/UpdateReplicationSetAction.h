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
    AWS_SSMINCIDENTS_API UpdateReplicationSetAction() = default;
    AWS_SSMINCIDENTS_API UpdateReplicationSetAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API UpdateReplicationSetAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the Amazon Web Services Region that you're adding to the
     * replication set.</p>
     */
    inline const AddRegionAction& GetAddRegionAction() const { return m_addRegionAction; }
    inline bool AddRegionActionHasBeenSet() const { return m_addRegionActionHasBeenSet; }
    template<typename AddRegionActionT = AddRegionAction>
    void SetAddRegionAction(AddRegionActionT&& value) { m_addRegionActionHasBeenSet = true; m_addRegionAction = std::forward<AddRegionActionT>(value); }
    template<typename AddRegionActionT = AddRegionAction>
    UpdateReplicationSetAction& WithAddRegionAction(AddRegionActionT&& value) { SetAddRegionAction(std::forward<AddRegionActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the Amazon Web Services Region that you're deleting to the
     * replication set.</p>
     */
    inline const DeleteRegionAction& GetDeleteRegionAction() const { return m_deleteRegionAction; }
    inline bool DeleteRegionActionHasBeenSet() const { return m_deleteRegionActionHasBeenSet; }
    template<typename DeleteRegionActionT = DeleteRegionAction>
    void SetDeleteRegionAction(DeleteRegionActionT&& value) { m_deleteRegionActionHasBeenSet = true; m_deleteRegionAction = std::forward<DeleteRegionActionT>(value); }
    template<typename DeleteRegionActionT = DeleteRegionAction>
    UpdateReplicationSetAction& WithDeleteRegionAction(DeleteRegionActionT&& value) { SetDeleteRegionAction(std::forward<DeleteRegionActionT>(value)); return *this;}
    ///@}
  private:

    AddRegionAction m_addRegionAction;
    bool m_addRegionActionHasBeenSet = false;

    DeleteRegionAction m_deleteRegionAction;
    bool m_deleteRegionActionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
