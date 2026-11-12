/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/model/TeamConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MWAA {
namespace Model {

/**
 * <p>Defines the changes to the teams configured for Apache Airflow multi-team
 * support when you update your Amazon MWAA environment. Use
 * <code>AddOrUpdate</code> to add or modify teams, and <code>Remove</code> to
 * remove teams by name.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/UpdateTeamsInput">AWS
 * API Reference</a></p>
 */
class UpdateTeamsInput {
 public:
  AWS_MWAA_API UpdateTeamsInput() = default;
  AWS_MWAA_API UpdateTeamsInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAA_API UpdateTeamsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map of teams to add to your environment, or to update if they already
   * exist. Each entry maps a team name to its settings. Each team name must match
   * the display name of an Amazon Web Services IAM Identity Center group associated
   * with your environment. You can configure between <code>1</code> and
   * <code>20</code> teams.</p>
   */
  inline const Aws::Map<Aws::String, TeamConfig>& GetAddOrUpdate() const { return m_addOrUpdate; }
  inline bool AddOrUpdateHasBeenSet() const { return m_addOrUpdateHasBeenSet; }
  template <typename AddOrUpdateT = Aws::Map<Aws::String, TeamConfig>>
  void SetAddOrUpdate(AddOrUpdateT&& value) {
    m_addOrUpdateHasBeenSet = true;
    m_addOrUpdate = std::forward<AddOrUpdateT>(value);
  }
  template <typename AddOrUpdateT = Aws::Map<Aws::String, TeamConfig>>
  UpdateTeamsInput& WithAddOrUpdate(AddOrUpdateT&& value) {
    SetAddOrUpdate(std::forward<AddOrUpdateT>(value));
    return *this;
  }
  template <typename AddOrUpdateKeyT = Aws::String, typename AddOrUpdateValueT = TeamConfig>
  UpdateTeamsInput& AddAddOrUpdate(AddOrUpdateKeyT&& key, AddOrUpdateValueT&& value) {
    m_addOrUpdateHasBeenSet = true;
    m_addOrUpdate.emplace(std::forward<AddOrUpdateKeyT>(key), std::forward<AddOrUpdateValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of team names to remove from your environment. For example,
   * <code>team-a</code>. You can remove between <code>1</code> and <code>20</code>
   * teams in a single update. Removing a team does not delete the team's DAG code
   * from Amazon S3.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRemove() const { return m_remove; }
  inline bool RemoveHasBeenSet() const { return m_removeHasBeenSet; }
  template <typename RemoveT = Aws::Vector<Aws::String>>
  void SetRemove(RemoveT&& value) {
    m_removeHasBeenSet = true;
    m_remove = std::forward<RemoveT>(value);
  }
  template <typename RemoveT = Aws::Vector<Aws::String>>
  UpdateTeamsInput& WithRemove(RemoveT&& value) {
    SetRemove(std::forward<RemoveT>(value));
    return *this;
  }
  template <typename RemoveT = Aws::String>
  UpdateTeamsInput& AddRemove(RemoveT&& value) {
    m_removeHasBeenSet = true;
    m_remove.emplace_back(std::forward<RemoveT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, TeamConfig> m_addOrUpdate;

  Aws::Vector<Aws::String> m_remove;
  bool m_addOrUpdateHasBeenSet = false;
  bool m_removeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAA
}  // namespace Aws
