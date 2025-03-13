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
   * <p>Information about the Quick Setup type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/QuickSetupTypeOutput">AWS
   * API Reference</a></p>
   */
  class QuickSetupTypeOutput
  {
  public:
    AWS_SSMQUICKSETUP_API QuickSetupTypeOutput() = default;
    AWS_SSMQUICKSETUP_API QuickSetupTypeOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API QuickSetupTypeOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The latest version number of the configuration.</p>
     */
    inline const Aws::String& GetLatestVersion() const { return m_latestVersion; }
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }
    template<typename LatestVersionT = Aws::String>
    void SetLatestVersion(LatestVersionT&& value) { m_latestVersionHasBeenSet = true; m_latestVersion = std::forward<LatestVersionT>(value); }
    template<typename LatestVersionT = Aws::String>
    QuickSetupTypeOutput& WithLatestVersion(LatestVersionT&& value) { SetLatestVersion(std::forward<LatestVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Quick Setup configuration.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    QuickSetupTypeOutput& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_latestVersion;
    bool m_latestVersionHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
