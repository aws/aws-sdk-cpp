/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/HookConfiguration.h>
#include <aws/qbusiness/model/InlineDocumentEnrichmentConfiguration.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides the configuration information for altering document metadata and
   * content during the document ingestion process.</p> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/custom-document-enrichment.html">Custom
   * document enrichment</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DocumentEnrichmentConfiguration">AWS
   * API Reference</a></p>
   */
  class DocumentEnrichmentConfiguration
  {
  public:
    AWS_QBUSINESS_API DocumentEnrichmentConfiguration() = default;
    AWS_QBUSINESS_API DocumentEnrichmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentEnrichmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration information to alter document attributes or metadata fields and
     * content when ingesting documents into Amazon Q Business.</p>
     */
    inline const Aws::Vector<InlineDocumentEnrichmentConfiguration>& GetInlineConfigurations() const { return m_inlineConfigurations; }
    inline bool InlineConfigurationsHasBeenSet() const { return m_inlineConfigurationsHasBeenSet; }
    template<typename InlineConfigurationsT = Aws::Vector<InlineDocumentEnrichmentConfiguration>>
    void SetInlineConfigurations(InlineConfigurationsT&& value) { m_inlineConfigurationsHasBeenSet = true; m_inlineConfigurations = std::forward<InlineConfigurationsT>(value); }
    template<typename InlineConfigurationsT = Aws::Vector<InlineDocumentEnrichmentConfiguration>>
    DocumentEnrichmentConfiguration& WithInlineConfigurations(InlineConfigurationsT&& value) { SetInlineConfigurations(std::forward<InlineConfigurationsT>(value)); return *this;}
    template<typename InlineConfigurationsT = InlineDocumentEnrichmentConfiguration>
    DocumentEnrichmentConfiguration& AddInlineConfigurations(InlineConfigurationsT&& value) { m_inlineConfigurationsHasBeenSet = true; m_inlineConfigurations.emplace_back(std::forward<InlineConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const HookConfiguration& GetPreExtractionHookConfiguration() const { return m_preExtractionHookConfiguration; }
    inline bool PreExtractionHookConfigurationHasBeenSet() const { return m_preExtractionHookConfigurationHasBeenSet; }
    template<typename PreExtractionHookConfigurationT = HookConfiguration>
    void SetPreExtractionHookConfiguration(PreExtractionHookConfigurationT&& value) { m_preExtractionHookConfigurationHasBeenSet = true; m_preExtractionHookConfiguration = std::forward<PreExtractionHookConfigurationT>(value); }
    template<typename PreExtractionHookConfigurationT = HookConfiguration>
    DocumentEnrichmentConfiguration& WithPreExtractionHookConfiguration(PreExtractionHookConfigurationT&& value) { SetPreExtractionHookConfiguration(std::forward<PreExtractionHookConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HookConfiguration& GetPostExtractionHookConfiguration() const { return m_postExtractionHookConfiguration; }
    inline bool PostExtractionHookConfigurationHasBeenSet() const { return m_postExtractionHookConfigurationHasBeenSet; }
    template<typename PostExtractionHookConfigurationT = HookConfiguration>
    void SetPostExtractionHookConfiguration(PostExtractionHookConfigurationT&& value) { m_postExtractionHookConfigurationHasBeenSet = true; m_postExtractionHookConfiguration = std::forward<PostExtractionHookConfigurationT>(value); }
    template<typename PostExtractionHookConfigurationT = HookConfiguration>
    DocumentEnrichmentConfiguration& WithPostExtractionHookConfiguration(PostExtractionHookConfigurationT&& value) { SetPostExtractionHookConfiguration(std::forward<PostExtractionHookConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InlineDocumentEnrichmentConfiguration> m_inlineConfigurations;
    bool m_inlineConfigurationsHasBeenSet = false;

    HookConfiguration m_preExtractionHookConfiguration;
    bool m_preExtractionHookConfigurationHasBeenSet = false;

    HookConfiguration m_postExtractionHookConfiguration;
    bool m_postExtractionHookConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
