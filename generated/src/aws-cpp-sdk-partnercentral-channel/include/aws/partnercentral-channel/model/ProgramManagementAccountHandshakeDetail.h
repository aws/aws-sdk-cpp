/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Details specific to program management account handshakes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ProgramManagementAccountHandshakeDetail">AWS
 * API Reference</a></p>
 */
class ProgramManagementAccountHandshakeDetail {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ProgramManagementAccountHandshakeDetail() = default;
  AWS_PARTNERCENTRALCHANNEL_API ProgramManagementAccountHandshakeDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ProgramManagementAccountHandshakeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The program associated with the handshake.</p>
   */
  inline Program GetProgram() const { return m_program; }
  inline bool ProgramHasBeenSet() const { return m_programHasBeenSet; }
  inline void SetProgram(Program value) {
    m_programHasBeenSet = true;
    m_program = value;
  }
  inline ProgramManagementAccountHandshakeDetail& WithProgram(Program value) {
    SetProgram(value);
    return *this;
  }
  ///@}
 private:
  Program m_program{Program::NOT_SET};
  bool m_programHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
