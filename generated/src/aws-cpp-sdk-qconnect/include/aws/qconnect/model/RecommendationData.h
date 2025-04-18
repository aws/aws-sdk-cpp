/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/Document.h>
#include <aws/qconnect/model/RelevanceLevel.h>
#include <aws/qconnect/model/RecommendationType.h>
#include <aws/qconnect/model/DataSummary.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>Information about the recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/RecommendationData">AWS
   * API Reference</a></p>
   */
  class RecommendationData
  {
  public:
    AWS_QCONNECT_API RecommendationData() = default;
    AWS_QCONNECT_API RecommendationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API RecommendationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    RecommendationData& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended document.</p>
     */
    inline const Document& GetDocument() const { return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    template<typename DocumentT = Document>
    void SetDocument(DocumentT&& value) { m_documentHasBeenSet = true; m_document = std::forward<DocumentT>(value); }
    template<typename DocumentT = Document>
    RecommendationData& WithDocument(DocumentT&& value) { SetDocument(std::forward<DocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relevance score of the recommendation.</p>
     */
    inline double GetRelevanceScore() const { return m_relevanceScore; }
    inline bool RelevanceScoreHasBeenSet() const { return m_relevanceScoreHasBeenSet; }
    inline void SetRelevanceScore(double value) { m_relevanceScoreHasBeenSet = true; m_relevanceScore = value; }
    inline RecommendationData& WithRelevanceScore(double value) { SetRelevanceScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relevance level of the recommendation.</p>
     */
    inline RelevanceLevel GetRelevanceLevel() const { return m_relevanceLevel; }
    inline bool RelevanceLevelHasBeenSet() const { return m_relevanceLevelHasBeenSet; }
    inline void SetRelevanceLevel(RelevanceLevel value) { m_relevanceLevelHasBeenSet = true; m_relevanceLevel = value; }
    inline RecommendationData& WithRelevanceLevel(RelevanceLevel value) { SetRelevanceLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of recommendation.</p>
     */
    inline RecommendationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RecommendationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RecommendationData& WithType(RecommendationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Summary of the recommended content.</p>
     */
    inline const DataSummary& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = DataSummary>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = DataSummary>
    RecommendationData& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Document m_document;
    bool m_documentHasBeenSet = false;

    double m_relevanceScore{0.0};
    bool m_relevanceScoreHasBeenSet = false;

    RelevanceLevel m_relevanceLevel{RelevanceLevel::NOT_SET};
    bool m_relevanceLevelHasBeenSet = false;

    RecommendationType m_type{RecommendationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    DataSummary m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
