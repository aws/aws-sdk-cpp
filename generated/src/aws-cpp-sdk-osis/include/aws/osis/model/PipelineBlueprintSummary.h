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
   * <p>A summary of an OpenSearch Ingestion blueprint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/PipelineBlueprintSummary">AWS
   * API Reference</a></p>
   */
  class PipelineBlueprintSummary
  {
  public:
    AWS_OSIS_API PipelineBlueprintSummary();
    AWS_OSIS_API PipelineBlueprintSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API PipelineBlueprintSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline PipelineBlueprintSummary& WithBlueprintName(const Aws::String& value) { SetBlueprintName(value); return *this;}
    inline PipelineBlueprintSummary& WithBlueprintName(Aws::String&& value) { SetBlueprintName(std::move(value)); return *this;}
    inline PipelineBlueprintSummary& WithBlueprintName(const char* value) { SetBlueprintName(value); return *this;}
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
    inline PipelineBlueprintSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline PipelineBlueprintSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline PipelineBlueprintSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
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
    inline PipelineBlueprintSummary& WithDisplayDescription(const Aws::String& value) { SetDisplayDescription(value); return *this;}
    inline PipelineBlueprintSummary& WithDisplayDescription(Aws::String&& value) { SetDisplayDescription(std::move(value)); return *this;}
    inline PipelineBlueprintSummary& WithDisplayDescription(const char* value) { SetDisplayDescription(value); return *this;}
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
    inline PipelineBlueprintSummary& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline PipelineBlueprintSummary& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline PipelineBlueprintSummary& WithService(const char* value) { SetService(value); return *this;}
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
    inline PipelineBlueprintSummary& WithUseCase(const Aws::String& value) { SetUseCase(value); return *this;}
    inline PipelineBlueprintSummary& WithUseCase(Aws::String&& value) { SetUseCase(std::move(value)); return *this;}
    inline PipelineBlueprintSummary& WithUseCase(const char* value) { SetUseCase(value); return *this;}
    ///@}
  private:

    Aws::String m_blueprintName;
    bool m_blueprintNameHasBeenSet = false;

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
