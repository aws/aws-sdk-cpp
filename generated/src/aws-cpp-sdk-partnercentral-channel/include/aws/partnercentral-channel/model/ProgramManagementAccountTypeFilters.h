/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/Program.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {

/**
 * <p>Type-specific filters for program management accounts.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ProgramManagementAccountTypeFilters">AWS
 * API Reference</a></p>
 */
class ProgramManagementAccountTypeFilters {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ProgramManagementAccountTypeFilters() = default;
  AWS_PARTNERCENTRALCHANNEL_API ProgramManagementAccountTypeFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ProgramManagementAccountTypeFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter by program types.</p>
   */
  inline const Aws::Vector<Program>& GetPrograms() const { return m_programs; }
  inline bool ProgramsHasBeenSet() const { return m_programsHasBeenSet; }
  template <typename ProgramsT = Aws::Vector<Program>>
  void SetPrograms(ProgramsT&& value) {
    m_programsHasBeenSet = true;
    m_programs = std::forward<ProgramsT>(value);
  }
  template <typename ProgramsT = Aws::Vector<Program>>
  ProgramManagementAccountTypeFilters& WithPrograms(ProgramsT&& value) {
    SetPrograms(std::forward<ProgramsT>(value));
    return *this;
  }
  inline ProgramManagementAccountTypeFilters& AddPrograms(Program value) {
    m_programsHasBeenSet = true;
    m_programs.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Program> m_programs;
  bool m_programsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
