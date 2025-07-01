/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/model/IormLifecycleState.h>
#include <aws/odb/model/Objective.h>
#include <aws/odb/model/DbIormConfig.h>
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
namespace odb
{
namespace Model
{

  /**
   * <p>The IORM settings of the Exadata DB system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ExadataIormConfig">AWS
   * API Reference</a></p>
   */
  class ExadataIormConfig
  {
  public:
    AWS_ODB_API ExadataIormConfig() = default;
    AWS_ODB_API ExadataIormConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API ExadataIormConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of IORM settings for all the database in the Exadata DB system.</p>
     */
    inline const Aws::Vector<DbIormConfig>& GetDbPlans() const { return m_dbPlans; }
    inline bool DbPlansHasBeenSet() const { return m_dbPlansHasBeenSet; }
    template<typename DbPlansT = Aws::Vector<DbIormConfig>>
    void SetDbPlans(DbPlansT&& value) { m_dbPlansHasBeenSet = true; m_dbPlans = std::forward<DbPlansT>(value); }
    template<typename DbPlansT = Aws::Vector<DbIormConfig>>
    ExadataIormConfig& WithDbPlans(DbPlansT&& value) { SetDbPlans(std::forward<DbPlansT>(value)); return *this;}
    template<typename DbPlansT = DbIormConfig>
    ExadataIormConfig& AddDbPlans(DbPlansT&& value) { m_dbPlansHasBeenSet = true; m_dbPlans.emplace_back(std::forward<DbPlansT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Additional information about the current lifecycleState.</p>
     */
    inline const Aws::String& GetLifecycleDetails() const { return m_lifecycleDetails; }
    inline bool LifecycleDetailsHasBeenSet() const { return m_lifecycleDetailsHasBeenSet; }
    template<typename LifecycleDetailsT = Aws::String>
    void SetLifecycleDetails(LifecycleDetailsT&& value) { m_lifecycleDetailsHasBeenSet = true; m_lifecycleDetails = std::forward<LifecycleDetailsT>(value); }
    template<typename LifecycleDetailsT = Aws::String>
    ExadataIormConfig& WithLifecycleDetails(LifecycleDetailsT&& value) { SetLifecycleDetails(std::forward<LifecycleDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of IORM configuration for the Exadata DB system.</p>
     */
    inline IormLifecycleState GetLifecycleState() const { return m_lifecycleState; }
    inline bool LifecycleStateHasBeenSet() const { return m_lifecycleStateHasBeenSet; }
    inline void SetLifecycleState(IormLifecycleState value) { m_lifecycleStateHasBeenSet = true; m_lifecycleState = value; }
    inline ExadataIormConfig& WithLifecycleState(IormLifecycleState value) { SetLifecycleState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current value for the IORM objective. The default is AUTO.</p>
     */
    inline Objective GetObjective() const { return m_objective; }
    inline bool ObjectiveHasBeenSet() const { return m_objectiveHasBeenSet; }
    inline void SetObjective(Objective value) { m_objectiveHasBeenSet = true; m_objective = value; }
    inline ExadataIormConfig& WithObjective(Objective value) { SetObjective(value); return *this;}
    ///@}
  private:

    Aws::Vector<DbIormConfig> m_dbPlans;
    bool m_dbPlansHasBeenSet = false;

    Aws::String m_lifecycleDetails;
    bool m_lifecycleDetailsHasBeenSet = false;

    IormLifecycleState m_lifecycleState{IormLifecycleState::NOT_SET};
    bool m_lifecycleStateHasBeenSet = false;

    Objective m_objective{Objective::NOT_SET};
    bool m_objectiveHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
