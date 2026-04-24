/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Filters for listing network migration mapping jobs.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListNetworkMigrationMappingsFilters">AWS
 * API Reference</a></p>
 */
class ListNetworkMigrationMappingsFilters {
 public:
  AWS_MGN_API ListNetworkMigrationMappingsFilters() = default;
  AWS_MGN_API ListNetworkMigrationMappingsFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API ListNetworkMigrationMappingsFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of job IDs to filter by.</p>
   */
  inline const Aws::Vector<Aws::String>& GetJobIDs() const { return m_jobIDs; }
  inline bool JobIDsHasBeenSet() const { return m_jobIDsHasBeenSet; }
  template <typename JobIDsT = Aws::Vector<Aws::String>>
  void SetJobIDs(JobIDsT&& value) {
    m_jobIDsHasBeenSet = true;
    m_jobIDs = std::forward<JobIDsT>(value);
  }
  template <typename JobIDsT = Aws::Vector<Aws::String>>
  ListNetworkMigrationMappingsFilters& WithJobIDs(JobIDsT&& value) {
    SetJobIDs(std::forward<JobIDsT>(value));
    return *this;
  }
  template <typename JobIDsT = Aws::String>
  ListNetworkMigrationMappingsFilters& AddJobIDs(JobIDsT&& value) {
    m_jobIDsHasBeenSet = true;
    m_jobIDs.emplace_back(std::forward<JobIDsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_jobIDs;
  bool m_jobIDsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
