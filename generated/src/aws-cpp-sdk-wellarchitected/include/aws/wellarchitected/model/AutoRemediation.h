/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>The per-resource auto-remediation for a single affected resource. Represents
 * one AWS Systems Manager (SSM) runbook execution that targets the resource.
 * Present only when the resource's check is backed by an SSM automation
 * runbook.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AutoRemediation">AWS
 * API Reference</a></p>
 */
class AutoRemediation {
 public:
  AWS_WELLARCHITECTED_API AutoRemediation() = default;
  AWS_WELLARCHITECTED_API AutoRemediation(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API AutoRemediation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A deep link to the SSM runbook execution page in the AWS Management Console
   * for this resource, with the execution parameters prefilled.</p>
   */
  inline const Aws::String& GetDeepLink() const { return m_deepLink; }
  inline bool DeepLinkHasBeenSet() const { return m_deepLinkHasBeenSet; }
  template <typename DeepLinkT = Aws::String>
  void SetDeepLink(DeepLinkT&& value) {
    m_deepLinkHasBeenSet = true;
    m_deepLink = std::forward<DeepLinkT>(value);
  }
  template <typename DeepLinkT = Aws::String>
  AutoRemediation& WithDeepLink(DeepLinkT&& value) {
    SetDeepLink(std::forward<DeepLinkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS CLI command that triggers the same SSM runbook execution for this
   * resource. You can copy and run this command as-is.</p>
   */
  inline const Aws::String& GetCliCommand() const { return m_cliCommand; }
  inline bool CliCommandHasBeenSet() const { return m_cliCommandHasBeenSet; }
  template <typename CliCommandT = Aws::String>
  void SetCliCommand(CliCommandT&& value) {
    m_cliCommandHasBeenSet = true;
    m_cliCommand = std::forward<CliCommandT>(value);
  }
  template <typename CliCommandT = Aws::String>
  AutoRemediation& WithCliCommand(CliCommandT&& value) {
    SetCliCommand(std::forward<CliCommandT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_deepLink;

  Aws::String m_cliCommand;
  bool m_deepLinkHasBeenSet = false;
  bool m_cliCommandHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
