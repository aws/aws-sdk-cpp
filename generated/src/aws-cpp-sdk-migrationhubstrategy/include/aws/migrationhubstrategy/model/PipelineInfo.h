/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/PipelineType.h>
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
   * <p>Detailed information of the pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/PipelineInfo">AWS
   * API Reference</a></p>
   */
  class PipelineInfo
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API PipelineInfo() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API PipelineInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API PipelineInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when the pipeline info was configured.</p>
     */
    inline const Aws::String& GetPipelineConfigurationTimeStamp() const { return m_pipelineConfigurationTimeStamp; }
    inline bool PipelineConfigurationTimeStampHasBeenSet() const { return m_pipelineConfigurationTimeStampHasBeenSet; }
    template<typename PipelineConfigurationTimeStampT = Aws::String>
    void SetPipelineConfigurationTimeStamp(PipelineConfigurationTimeStampT&& value) { m_pipelineConfigurationTimeStampHasBeenSet = true; m_pipelineConfigurationTimeStamp = std::forward<PipelineConfigurationTimeStampT>(value); }
    template<typename PipelineConfigurationTimeStampT = Aws::String>
    PipelineInfo& WithPipelineConfigurationTimeStamp(PipelineConfigurationTimeStampT&& value) { SetPipelineConfigurationTimeStamp(std::forward<PipelineConfigurationTimeStampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of pipeline.</p>
     */
    inline PipelineType GetPipelineType() const { return m_pipelineType; }
    inline bool PipelineTypeHasBeenSet() const { return m_pipelineTypeHasBeenSet; }
    inline void SetPipelineType(PipelineType value) { m_pipelineTypeHasBeenSet = true; m_pipelineType = value; }
    inline PipelineInfo& WithPipelineType(PipelineType value) { SetPipelineType(value); return *this;}
    ///@}
  private:

    Aws::String m_pipelineConfigurationTimeStamp;
    bool m_pipelineConfigurationTimeStampHasBeenSet = false;

    PipelineType m_pipelineType{PipelineType::NOT_SET};
    bool m_pipelineTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
