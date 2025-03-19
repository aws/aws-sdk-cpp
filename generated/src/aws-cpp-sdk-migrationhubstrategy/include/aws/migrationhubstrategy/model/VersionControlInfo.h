/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/VersionControlType.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p>Details about the version control configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/VersionControlInfo">AWS
   * API Reference</a></p>
   */
  class VersionControlInfo
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API VersionControlInfo() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API VersionControlInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API VersionControlInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when the version control system was last configured.</p>
     */
    inline const Aws::String& GetVersionControlConfigurationTimeStamp() const { return m_versionControlConfigurationTimeStamp; }
    inline bool VersionControlConfigurationTimeStampHasBeenSet() const { return m_versionControlConfigurationTimeStampHasBeenSet; }
    template<typename VersionControlConfigurationTimeStampT = Aws::String>
    void SetVersionControlConfigurationTimeStamp(VersionControlConfigurationTimeStampT&& value) { m_versionControlConfigurationTimeStampHasBeenSet = true; m_versionControlConfigurationTimeStamp = std::forward<VersionControlConfigurationTimeStampT>(value); }
    template<typename VersionControlConfigurationTimeStampT = Aws::String>
    VersionControlInfo& WithVersionControlConfigurationTimeStamp(VersionControlConfigurationTimeStampT&& value) { SetVersionControlConfigurationTimeStamp(std::forward<VersionControlConfigurationTimeStampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of version control.</p>
     */
    inline VersionControlType GetVersionControlType() const { return m_versionControlType; }
    inline bool VersionControlTypeHasBeenSet() const { return m_versionControlTypeHasBeenSet; }
    inline void SetVersionControlType(VersionControlType value) { m_versionControlTypeHasBeenSet = true; m_versionControlType = value; }
    inline VersionControlInfo& WithVersionControlType(VersionControlType value) { SetVersionControlType(value); return *this;}
    ///@}
  private:

    Aws::String m_versionControlConfigurationTimeStamp;
    bool m_versionControlConfigurationTimeStampHasBeenSet = false;

    VersionControlType m_versionControlType{VersionControlType::NOT_SET};
    bool m_versionControlTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
