/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/textract/model/Document.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/HumanLoopConfig.h>
#include <aws/textract/model/QueriesConfig.h>
#include <aws/textract/model/AdaptersConfig.h>
#include <aws/textract/model/FeatureType.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class AnalyzeDocumentRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API AnalyzeDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AnalyzeDocument"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The input document as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Textract operations, you can't pass image bytes. The
     * document must be an image in JPEG, PNG, PDF, or TIFF format.</p> <p>If you're
     * using an AWS SDK to call Amazon Textract, you might not need to base64-encode
     * image bytes that are passed using the <code>Bytes</code> field. </p>
     */
    inline const Document& GetDocument() const{ return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    inline void SetDocument(const Document& value) { m_documentHasBeenSet = true; m_document = value; }
    inline void SetDocument(Document&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }
    inline AnalyzeDocumentRequest& WithDocument(const Document& value) { SetDocument(value); return *this;}
    inline AnalyzeDocumentRequest& WithDocument(Document&& value) { SetDocument(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the types of analysis to perform. Add TABLES to the list to return
     * information about the tables that are detected in the input document. Add FORMS
     * to return detected form data. Add SIGNATURES to return the locations of detected
     * signatures. Add LAYOUT to the list to return information about the layout of the
     * document. All lines and words detected in the document are included in the
     * response (including text that isn't related to the value of
     * <code>FeatureTypes</code>). </p>
     */
    inline const Aws::Vector<FeatureType>& GetFeatureTypes() const{ return m_featureTypes; }
    inline bool FeatureTypesHasBeenSet() const { return m_featureTypesHasBeenSet; }
    inline void SetFeatureTypes(const Aws::Vector<FeatureType>& value) { m_featureTypesHasBeenSet = true; m_featureTypes = value; }
    inline void SetFeatureTypes(Aws::Vector<FeatureType>&& value) { m_featureTypesHasBeenSet = true; m_featureTypes = std::move(value); }
    inline AnalyzeDocumentRequest& WithFeatureTypes(const Aws::Vector<FeatureType>& value) { SetFeatureTypes(value); return *this;}
    inline AnalyzeDocumentRequest& WithFeatureTypes(Aws::Vector<FeatureType>&& value) { SetFeatureTypes(std::move(value)); return *this;}
    inline AnalyzeDocumentRequest& AddFeatureTypes(const FeatureType& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(value); return *this; }
    inline AnalyzeDocumentRequest& AddFeatureTypes(FeatureType&& value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Sets the configuration for the human in the loop workflow for analyzing
     * documents.</p>
     */
    inline const HumanLoopConfig& GetHumanLoopConfig() const{ return m_humanLoopConfig; }
    inline bool HumanLoopConfigHasBeenSet() const { return m_humanLoopConfigHasBeenSet; }
    inline void SetHumanLoopConfig(const HumanLoopConfig& value) { m_humanLoopConfigHasBeenSet = true; m_humanLoopConfig = value; }
    inline void SetHumanLoopConfig(HumanLoopConfig&& value) { m_humanLoopConfigHasBeenSet = true; m_humanLoopConfig = std::move(value); }
    inline AnalyzeDocumentRequest& WithHumanLoopConfig(const HumanLoopConfig& value) { SetHumanLoopConfig(value); return *this;}
    inline AnalyzeDocumentRequest& WithHumanLoopConfig(HumanLoopConfig&& value) { SetHumanLoopConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains Queries and the alias for those Queries, as determined by the input.
     * </p>
     */
    inline const QueriesConfig& GetQueriesConfig() const{ return m_queriesConfig; }
    inline bool QueriesConfigHasBeenSet() const { return m_queriesConfigHasBeenSet; }
    inline void SetQueriesConfig(const QueriesConfig& value) { m_queriesConfigHasBeenSet = true; m_queriesConfig = value; }
    inline void SetQueriesConfig(QueriesConfig&& value) { m_queriesConfigHasBeenSet = true; m_queriesConfig = std::move(value); }
    inline AnalyzeDocumentRequest& WithQueriesConfig(const QueriesConfig& value) { SetQueriesConfig(value); return *this;}
    inline AnalyzeDocumentRequest& WithQueriesConfig(QueriesConfig&& value) { SetQueriesConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the adapter to be used when analyzing a document.</p>
     */
    inline const AdaptersConfig& GetAdaptersConfig() const{ return m_adaptersConfig; }
    inline bool AdaptersConfigHasBeenSet() const { return m_adaptersConfigHasBeenSet; }
    inline void SetAdaptersConfig(const AdaptersConfig& value) { m_adaptersConfigHasBeenSet = true; m_adaptersConfig = value; }
    inline void SetAdaptersConfig(AdaptersConfig&& value) { m_adaptersConfigHasBeenSet = true; m_adaptersConfig = std::move(value); }
    inline AnalyzeDocumentRequest& WithAdaptersConfig(const AdaptersConfig& value) { SetAdaptersConfig(value); return *this;}
    inline AnalyzeDocumentRequest& WithAdaptersConfig(AdaptersConfig&& value) { SetAdaptersConfig(std::move(value)); return *this;}
    ///@}
  private:

    Document m_document;
    bool m_documentHasBeenSet = false;

    Aws::Vector<FeatureType> m_featureTypes;
    bool m_featureTypesHasBeenSet = false;

    HumanLoopConfig m_humanLoopConfig;
    bool m_humanLoopConfigHasBeenSet = false;

    QueriesConfig m_queriesConfig;
    bool m_queriesConfigHasBeenSet = false;

    AdaptersConfig m_adaptersConfig;
    bool m_adaptersConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
