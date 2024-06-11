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


    ///@{
    /**
     * <p>The name of the blueprint.</p>
     */
    inline const Aws::String& GetBlueprintName() const{ return m_blueprintName; }
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }
    inline void SetBlueprintName(const Aws::String& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = value; }
    inline void SetBlueprintName(Aws::String&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::move(value); }
    inline void SetBlueprintName(const char* value) { m_blueprintNameHasBeenSet = true; m_blueprintName.assign(value); }
    inline PipelineBlueprint& WithBlueprintName(const Aws::String& value) { SetBlueprintName(value); return *this;}
    inline PipelineBlueprint& WithBlueprintName(Aws::String&& value) { SetBlueprintName(std::move(value)); return *this;}
    inline PipelineBlueprint& WithBlueprintName(const char* value) { SetBlueprintName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The YAML configuration of the blueprint.</p>
     */
    inline const Aws::String& GetPipelineConfigurationBody() const{ return m_pipelineConfigurationBody; }
    inline bool PipelineConfigurationBodyHasBeenSet() const { return m_pipelineConfigurationBodyHasBeenSet; }
    inline void SetPipelineConfigurationBody(const Aws::String& value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody = value; }
    inline void SetPipelineConfigurationBody(Aws::String&& value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody = std::move(value); }
    inline void SetPipelineConfigurationBody(const char* value) { m_pipelineConfigurationBodyHasBeenSet = true; m_pipelineConfigurationBody.assign(value); }
    inline PipelineBlueprint& WithPipelineConfigurationBody(const Aws::String& value) { SetPipelineConfigurationBody(value); return *this;}
    inline PipelineBlueprint& WithPipelineConfigurationBody(Aws::String&& value) { SetPipelineConfigurationBody(std::move(value)); return *this;}
    inline PipelineBlueprint& WithPipelineConfigurationBody(const char* value) { SetPipelineConfigurationBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the blueprint.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline PipelineBlueprint& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline PipelineBlueprint& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline PipelineBlueprint& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the blueprint.</p>
     */
    inline const Aws::String& GetDisplayDescription() const{ return m_displayDescription; }
    inline bool DisplayDescriptionHasBeenSet() const { return m_displayDescriptionHasBeenSet; }
    inline void SetDisplayDescription(const Aws::String& value) { m_displayDescriptionHasBeenSet = true; m_displayDescription = value; }
    inline void SetDisplayDescription(Aws::String&& value) { m_displayDescriptionHasBeenSet = true; m_displayDescription = std::move(value); }
    inline void SetDisplayDescription(const char* value) { m_displayDescriptionHasBeenSet = true; m_displayDescription.assign(value); }
    inline PipelineBlueprint& WithDisplayDescription(const Aws::String& value) { SetDisplayDescription(value); return *this;}
    inline PipelineBlueprint& WithDisplayDescription(Aws::String&& value) { SetDisplayDescription(std::move(value)); return *this;}
    inline PipelineBlueprint& WithDisplayDescription(const char* value) { SetDisplayDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service that the blueprint is associated with.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline PipelineBlueprint& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline PipelineBlueprint& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline PipelineBlueprint& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The use case that the blueprint relates to.</p>
     */
    inline const Aws::String& GetUseCase() const{ return m_useCase; }
    inline bool UseCaseHasBeenSet() const { return m_useCaseHasBeenSet; }
    inline void SetUseCase(const Aws::String& value) { m_useCaseHasBeenSet = true; m_useCase = value; }
    inline void SetUseCase(Aws::String&& value) { m_useCaseHasBeenSet = true; m_useCase = std::move(value); }
    inline void SetUseCase(const char* value) { m_useCaseHasBeenSet = true; m_useCase.assign(value); }
    inline PipelineBlueprint& WithUseCase(const Aws::String& value) { SetUseCase(value); return *this;}
    inline PipelineBlueprint& WithUseCase(Aws::String&& value) { SetUseCase(std::move(value)); return *this;}
    inline PipelineBlueprint& WithUseCase(const char* value) { SetUseCase(value); return *this;}
    ///@}
  private:

    Aws::String m_blueprintName;
    bool m_blueprintNameHasBeenSet = false;

    Aws::String m_pipelineConfigurationBody;
    bool m_pipelineConfigurationBodyHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_displayDescription;
    bool m_displayDescriptionHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_useCase;
    bool m_useCaseHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
