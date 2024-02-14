/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/DocumentAttributeCondition.h>
#include <aws/qbusiness/model/DocumentContentOperator.h>
#include <aws/qbusiness/model/DocumentAttributeTarget.h>
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
   * <p>Provides the configuration information for applying basic logic to alter
   * document metadata and content when ingesting documents into Amazon Q.</p> <p>To
   * apply advanced logic, to go beyond what you can do with basic logic, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_HookConfiguration.html">
   * <code>HookConfiguration</code> </a>.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/custom-document-enrichment.html">Custom
   * document enrichment</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/InlineDocumentEnrichmentConfiguration">AWS
   * API Reference</a></p>
   */
  class InlineDocumentEnrichmentConfiguration
  {
  public:
    AWS_QBUSINESS_API InlineDocumentEnrichmentConfiguration();
    AWS_QBUSINESS_API InlineDocumentEnrichmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API InlineDocumentEnrichmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const DocumentAttributeCondition& GetCondition() const{ return m_condition; }

    
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    
    inline void SetCondition(const DocumentAttributeCondition& value) { m_conditionHasBeenSet = true; m_condition = value; }

    
    inline void SetCondition(DocumentAttributeCondition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    
    inline InlineDocumentEnrichmentConfiguration& WithCondition(const DocumentAttributeCondition& value) { SetCondition(value); return *this;}

    
    inline InlineDocumentEnrichmentConfiguration& WithCondition(DocumentAttributeCondition&& value) { SetCondition(std::move(value)); return *this;}


    /**
     * <p> <code>TRUE</code> to delete content if the condition used for the target
     * attribute is met.</p>
     */
    inline const DocumentContentOperator& GetDocumentContentOperator() const{ return m_documentContentOperator; }

    /**
     * <p> <code>TRUE</code> to delete content if the condition used for the target
     * attribute is met.</p>
     */
    inline bool DocumentContentOperatorHasBeenSet() const { return m_documentContentOperatorHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to delete content if the condition used for the target
     * attribute is met.</p>
     */
    inline void SetDocumentContentOperator(const DocumentContentOperator& value) { m_documentContentOperatorHasBeenSet = true; m_documentContentOperator = value; }

    /**
     * <p> <code>TRUE</code> to delete content if the condition used for the target
     * attribute is met.</p>
     */
    inline void SetDocumentContentOperator(DocumentContentOperator&& value) { m_documentContentOperatorHasBeenSet = true; m_documentContentOperator = std::move(value); }

    /**
     * <p> <code>TRUE</code> to delete content if the condition used for the target
     * attribute is met.</p>
     */
    inline InlineDocumentEnrichmentConfiguration& WithDocumentContentOperator(const DocumentContentOperator& value) { SetDocumentContentOperator(value); return *this;}

    /**
     * <p> <code>TRUE</code> to delete content if the condition used for the target
     * attribute is met.</p>
     */
    inline InlineDocumentEnrichmentConfiguration& WithDocumentContentOperator(DocumentContentOperator&& value) { SetDocumentContentOperator(std::move(value)); return *this;}


    
    inline const DocumentAttributeTarget& GetTarget() const{ return m_target; }

    
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    
    inline void SetTarget(const DocumentAttributeTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    
    inline void SetTarget(DocumentAttributeTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    
    inline InlineDocumentEnrichmentConfiguration& WithTarget(const DocumentAttributeTarget& value) { SetTarget(value); return *this;}

    
    inline InlineDocumentEnrichmentConfiguration& WithTarget(DocumentAttributeTarget&& value) { SetTarget(std::move(value)); return *this;}

  private:

    DocumentAttributeCondition m_condition;
    bool m_conditionHasBeenSet = false;

    DocumentContentOperator m_documentContentOperator;
    bool m_documentContentOperatorHasBeenSet = false;

    DocumentAttributeTarget m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
