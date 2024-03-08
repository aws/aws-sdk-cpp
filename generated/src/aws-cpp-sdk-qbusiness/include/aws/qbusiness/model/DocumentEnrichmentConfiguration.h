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
    AWS_QBUSINESS_API DocumentEnrichmentConfiguration();
    AWS_QBUSINESS_API DocumentEnrichmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentEnrichmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration information to alter document attributes or metadata fields and
     * content when ingesting documents into Amazon Q.</p>
     */
    inline const Aws::Vector<InlineDocumentEnrichmentConfiguration>& GetInlineConfigurations() const{ return m_inlineConfigurations; }

    /**
     * <p>Configuration information to alter document attributes or metadata fields and
     * content when ingesting documents into Amazon Q.</p>
     */
    inline bool InlineConfigurationsHasBeenSet() const { return m_inlineConfigurationsHasBeenSet; }

    /**
     * <p>Configuration information to alter document attributes or metadata fields and
     * content when ingesting documents into Amazon Q.</p>
     */
    inline void SetInlineConfigurations(const Aws::Vector<InlineDocumentEnrichmentConfiguration>& value) { m_inlineConfigurationsHasBeenSet = true; m_inlineConfigurations = value; }

    /**
     * <p>Configuration information to alter document attributes or metadata fields and
     * content when ingesting documents into Amazon Q.</p>
     */
    inline void SetInlineConfigurations(Aws::Vector<InlineDocumentEnrichmentConfiguration>&& value) { m_inlineConfigurationsHasBeenSet = true; m_inlineConfigurations = std::move(value); }

    /**
     * <p>Configuration information to alter document attributes or metadata fields and
     * content when ingesting documents into Amazon Q.</p>
     */
    inline DocumentEnrichmentConfiguration& WithInlineConfigurations(const Aws::Vector<InlineDocumentEnrichmentConfiguration>& value) { SetInlineConfigurations(value); return *this;}

    /**
     * <p>Configuration information to alter document attributes or metadata fields and
     * content when ingesting documents into Amazon Q.</p>
     */
    inline DocumentEnrichmentConfiguration& WithInlineConfigurations(Aws::Vector<InlineDocumentEnrichmentConfiguration>&& value) { SetInlineConfigurations(std::move(value)); return *this;}

    /**
     * <p>Configuration information to alter document attributes or metadata fields and
     * content when ingesting documents into Amazon Q.</p>
     */
    inline DocumentEnrichmentConfiguration& AddInlineConfigurations(const InlineDocumentEnrichmentConfiguration& value) { m_inlineConfigurationsHasBeenSet = true; m_inlineConfigurations.push_back(value); return *this; }

    /**
     * <p>Configuration information to alter document attributes or metadata fields and
     * content when ingesting documents into Amazon Q.</p>
     */
    inline DocumentEnrichmentConfiguration& AddInlineConfigurations(InlineDocumentEnrichmentConfiguration&& value) { m_inlineConfigurationsHasBeenSet = true; m_inlineConfigurations.push_back(std::move(value)); return *this; }


    
    inline const HookConfiguration& GetPostExtractionHookConfiguration() const{ return m_postExtractionHookConfiguration; }

    
    inline bool PostExtractionHookConfigurationHasBeenSet() const { return m_postExtractionHookConfigurationHasBeenSet; }

    
    inline void SetPostExtractionHookConfiguration(const HookConfiguration& value) { m_postExtractionHookConfigurationHasBeenSet = true; m_postExtractionHookConfiguration = value; }

    
    inline void SetPostExtractionHookConfiguration(HookConfiguration&& value) { m_postExtractionHookConfigurationHasBeenSet = true; m_postExtractionHookConfiguration = std::move(value); }

    
    inline DocumentEnrichmentConfiguration& WithPostExtractionHookConfiguration(const HookConfiguration& value) { SetPostExtractionHookConfiguration(value); return *this;}

    
    inline DocumentEnrichmentConfiguration& WithPostExtractionHookConfiguration(HookConfiguration&& value) { SetPostExtractionHookConfiguration(std::move(value)); return *this;}


    
    inline const HookConfiguration& GetPreExtractionHookConfiguration() const{ return m_preExtractionHookConfiguration; }

    
    inline bool PreExtractionHookConfigurationHasBeenSet() const { return m_preExtractionHookConfigurationHasBeenSet; }

    
    inline void SetPreExtractionHookConfiguration(const HookConfiguration& value) { m_preExtractionHookConfigurationHasBeenSet = true; m_preExtractionHookConfiguration = value; }

    
    inline void SetPreExtractionHookConfiguration(HookConfiguration&& value) { m_preExtractionHookConfigurationHasBeenSet = true; m_preExtractionHookConfiguration = std::move(value); }

    
    inline DocumentEnrichmentConfiguration& WithPreExtractionHookConfiguration(const HookConfiguration& value) { SetPreExtractionHookConfiguration(value); return *this;}

    
    inline DocumentEnrichmentConfiguration& WithPreExtractionHookConfiguration(HookConfiguration&& value) { SetPreExtractionHookConfiguration(std::move(value)); return *this;}

  private:

    Aws::Vector<InlineDocumentEnrichmentConfiguration> m_inlineConfigurations;
    bool m_inlineConfigurationsHasBeenSet = false;

    HookConfiguration m_postExtractionHookConfiguration;
    bool m_postExtractionHookConfigurationHasBeenSet = false;

    HookConfiguration m_preExtractionHookConfiguration;
    bool m_preExtractionHookConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
