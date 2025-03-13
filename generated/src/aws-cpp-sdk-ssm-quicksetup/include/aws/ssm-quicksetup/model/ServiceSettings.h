/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSMQuickSetup
{
namespace Model
{

  /**
   * <p>Settings configured for Quick Setup.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/ServiceSettings">AWS
   * API Reference</a></p>
   */
  class ServiceSettings
  {
  public:
    AWS_SSMQUICKSETUP_API ServiceSettings() = default;
    AWS_SSMQUICKSETUP_API ServiceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API ServiceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IAM role used to enable Explorer.</p>
     */
    inline const Aws::String& GetExplorerEnablingRoleArn() const { return m_explorerEnablingRoleArn; }
    inline bool ExplorerEnablingRoleArnHasBeenSet() const { return m_explorerEnablingRoleArnHasBeenSet; }
    template<typename ExplorerEnablingRoleArnT = Aws::String>
    void SetExplorerEnablingRoleArn(ExplorerEnablingRoleArnT&& value) { m_explorerEnablingRoleArnHasBeenSet = true; m_explorerEnablingRoleArn = std::forward<ExplorerEnablingRoleArnT>(value); }
    template<typename ExplorerEnablingRoleArnT = Aws::String>
    ServiceSettings& WithExplorerEnablingRoleArn(ExplorerEnablingRoleArnT&& value) { SetExplorerEnablingRoleArn(std::forward<ExplorerEnablingRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_explorerEnablingRoleArn;
    bool m_explorerEnablingRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
