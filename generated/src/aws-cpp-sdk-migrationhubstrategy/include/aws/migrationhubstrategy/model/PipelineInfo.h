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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API PipelineInfo();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API PipelineInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API PipelineInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time when the pipeline info was configured.</p>
     */
    inline const Aws::String& GetPipelineConfigurationTimeStamp() const{ return m_pipelineConfigurationTimeStamp; }

    /**
     * <p>The time when the pipeline info was configured.</p>
     */
    inline bool PipelineConfigurationTimeStampHasBeenSet() const { return m_pipelineConfigurationTimeStampHasBeenSet; }

    /**
     * <p>The time when the pipeline info was configured.</p>
     */
    inline void SetPipelineConfigurationTimeStamp(const Aws::String& value) { m_pipelineConfigurationTimeStampHasBeenSet = true; m_pipelineConfigurationTimeStamp = value; }

    /**
     * <p>The time when the pipeline info was configured.</p>
     */
    inline void SetPipelineConfigurationTimeStamp(Aws::String&& value) { m_pipelineConfigurationTimeStampHasBeenSet = true; m_pipelineConfigurationTimeStamp = std::move(value); }

    /**
     * <p>The time when the pipeline info was configured.</p>
     */
    inline void SetPipelineConfigurationTimeStamp(const char* value) { m_pipelineConfigurationTimeStampHasBeenSet = true; m_pipelineConfigurationTimeStamp.assign(value); }

    /**
     * <p>The time when the pipeline info was configured.</p>
     */
    inline PipelineInfo& WithPipelineConfigurationTimeStamp(const Aws::String& value) { SetPipelineConfigurationTimeStamp(value); return *this;}

    /**
     * <p>The time when the pipeline info was configured.</p>
     */
    inline PipelineInfo& WithPipelineConfigurationTimeStamp(Aws::String&& value) { SetPipelineConfigurationTimeStamp(std::move(value)); return *this;}

    /**
     * <p>The time when the pipeline info was configured.</p>
     */
    inline PipelineInfo& WithPipelineConfigurationTimeStamp(const char* value) { SetPipelineConfigurationTimeStamp(value); return *this;}


    /**
     * <p>The type of pipeline.</p>
     */
    inline const PipelineType& GetPipelineType() const{ return m_pipelineType; }

    /**
     * <p>The type of pipeline.</p>
     */
    inline bool PipelineTypeHasBeenSet() const { return m_pipelineTypeHasBeenSet; }

    /**
     * <p>The type of pipeline.</p>
     */
    inline void SetPipelineType(const PipelineType& value) { m_pipelineTypeHasBeenSet = true; m_pipelineType = value; }

    /**
     * <p>The type of pipeline.</p>
     */
    inline void SetPipelineType(PipelineType&& value) { m_pipelineTypeHasBeenSet = true; m_pipelineType = std::move(value); }

    /**
     * <p>The type of pipeline.</p>
     */
    inline PipelineInfo& WithPipelineType(const PipelineType& value) { SetPipelineType(value); return *this;}

    /**
     * <p>The type of pipeline.</p>
     */
    inline PipelineInfo& WithPipelineType(PipelineType&& value) { SetPipelineType(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineConfigurationTimeStamp;
    bool m_pipelineConfigurationTimeStampHasBeenSet = false;

    PipelineType m_pipelineType;
    bool m_pipelineTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
