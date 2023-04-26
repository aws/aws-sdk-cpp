/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
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
namespace OSIS
{
namespace Model
{

  /**
   * <p>Container for information about an OpenSearch Ingestion
   * blueprint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/PipelineBlueprint">AWS
   * API Reference</a></p>
   */
  class PipelineBlueprint
  {
  public:
    AWS_OSIS_API PipelineBlueprint();
    AWS_OSIS_API PipelineBlueprint(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API PipelineBlueprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the blueprint.</p>
     */
    inline const Aws::String& GetBlueprintName() const{ return m_blueprintName; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetBlueprintName(const Aws::String& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = value; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetBlueprintName(Aws::String&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::move(value); }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetBlueprintName(const char* value) { m_blueprintNameHasBeenSet = true; m_blueprintName.assign(value); }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline PipelineBlueprint& WithBlueprintName(const Aws::String& value) { SetBlueprintName(value); return *this;}

    /**
     * <p>The name of the blueprint.</p>
     */
    inline PipelineBlueprint& WithBlueprintName(Aws::String&& value) { SetBlueprintName(std::move(value)); return *this;}

    /**
     * <p>The name of the blueprint.</p>
     */
    inline PipelineBlueprint& WithBlueprintName(const char* value) { SetBlueprintName(value); return *this;}


    /**
     * <p>The YAML configuration of the blueprint.</p>
     */
    inline const Aws::String& GetPipelineConfigurationBody() const{ return m_pipelineConfigurationBody; }

    /**
     * <p>The YAML configuration of the blueprint.</p>
     */
    inline bool PipelineConfigurationBodyHasBeenSet() const { return m_pipelineConfigurationBodyHasBeenSet; }

    /**
     * <p>The YAML configuration of the blueprint.</p>
     */
    inline void SetPipelineConfigurationBody(const Aws::String& value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody = value; }

    /**
     * <p>The YAML configuration of the blueprint.</p>
     */
    inline void SetPipelineConfigurationBody(Aws::String&& value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody = std::move(value); }

    /**
     * <p>The YAML configuration of the blueprint.</p>
     */
    inline void SetPipelineConfigurationBody(const char* value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody.assign(value); }

    /**
     * <p>The YAML configuration of the blueprint.</p>
     */
    inline PipelineBlueprint& WithPipelineConfigurationBody(const Aws::String& value) { SetPipelineConfigurationBody(value); return *this;}

    /**
     * <p>The YAML configuration of the blueprint.</p>
     */
    inline PipelineBlueprint& WithPipelineConfigurationBody(Aws::String&& value) { SetPipelineConfigurationBody(std::move(value)); return *this;}

    /**
     * <p>The YAML configuration of the blueprint.</p>
     */
    inline PipelineBlueprint& WithPipelineConfigurationBody(const char* value) { SetPipelineConfigurationBody(value); return *this;}

  private:

    Aws::String m_blueprintName;
    bool m_blueprintNameHasBeenSet = false;

    Aws::String m_pipelineConfigurationBody;
    bool m_pipelineConfigurationBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
