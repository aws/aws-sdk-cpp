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
    AWS_OSIS_API PipelineBlueprintSummary() = default;
    AWS_OSIS_API PipelineBlueprintSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API PipelineBlueprintSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the blueprint.</p>
     */
    inline const Aws::String& GetBlueprintName() const { return m_blueprintName; }
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }
    template<typename BlueprintNameT = Aws::String>
    void SetBlueprintName(BlueprintNameT&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::forward<BlueprintNameT>(value); }
    template<typename BlueprintNameT = Aws::String>
    PipelineBlueprintSummary& WithBlueprintName(BlueprintNameT&& value) { SetBlueprintName(std::forward<BlueprintNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the blueprint.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    PipelineBlueprintSummary& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the blueprint.</p>
     */
    inline const Aws::String& GetDisplayDescription() const { return m_displayDescription; }
    inline bool DisplayDescriptionHasBeenSet() const { return m_displayDescriptionHasBeenSet; }
    template<typename DisplayDescriptionT = Aws::String>
    void SetDisplayDescription(DisplayDescriptionT&& value) { m_displayDescriptionHasBeenSet = true; m_displayDescription = std::forward<DisplayDescriptionT>(value); }
    template<typename DisplayDescriptionT = Aws::String>
    PipelineBlueprintSummary& WithDisplayDescription(DisplayDescriptionT&& value) { SetDisplayDescription(std::forward<DisplayDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service that the blueprint is associated with.</p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    PipelineBlueprintSummary& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The use case that the blueprint relates to.</p>
     */
    inline const Aws::String& GetUseCase() const { return m_useCase; }
    inline bool UseCaseHasBeenSet() const { return m_useCaseHasBeenSet; }
    template<typename UseCaseT = Aws::String>
    void SetUseCase(UseCaseT&& value) { m_useCaseHasBeenSet = true; m_useCase = std::forward<UseCaseT>(value); }
    template<typename UseCaseT = Aws::String>
    PipelineBlueprintSummary& WithUseCase(UseCaseT&& value) { SetUseCase(std::forward<UseCaseT>(value)); return *this;}
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
