/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/Document.h>
#include <aws/qconnect/model/DataSummary.h>
#include <aws/qconnect/model/QueryResultType.h>
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
   * <p>Information about the result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ResultData">AWS
   * API Reference</a></p>
   */
  class ResultData
  {
  public:
    AWS_QCONNECT_API ResultData() = default;
    AWS_QCONNECT_API ResultData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ResultData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the result data.</p>
     */
    inline const Aws::String& GetResultId() const { return m_resultId; }
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }
    template<typename ResultIdT = Aws::String>
    void SetResultId(ResultIdT&& value) { m_resultIdHasBeenSet = true; m_resultId = std::forward<ResultIdT>(value); }
    template<typename ResultIdT = Aws::String>
    ResultData& WithResultId(ResultIdT&& value) { SetResultId(std::forward<ResultIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document.</p>
     */
    inline const Document& GetDocument() const { return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    template<typename DocumentT = Document>
    void SetDocument(DocumentT&& value) { m_documentHasBeenSet = true; m_document = std::forward<DocumentT>(value); }
    template<typename DocumentT = Document>
    ResultData& WithDocument(DocumentT&& value) { SetDocument(std::forward<DocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relevance score of the results.</p>
     */
    inline double GetRelevanceScore() const { return m_relevanceScore; }
    inline bool RelevanceScoreHasBeenSet() const { return m_relevanceScoreHasBeenSet; }
    inline void SetRelevanceScore(double value) { m_relevanceScoreHasBeenSet = true; m_relevanceScore = value; }
    inline ResultData& WithRelevanceScore(double value) { SetRelevanceScore(value); return *this;}
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
    ResultData& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the query result.</p>
     */
    inline QueryResultType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(QueryResultType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ResultData& WithType(QueryResultType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;

    Document m_document;
    bool m_documentHasBeenSet = false;

    double m_relevanceScore{0.0};
    bool m_relevanceScoreHasBeenSet = false;

    DataSummary m_data;
    bool m_dataHasBeenSet = false;

    QueryResultType m_type{QueryResultType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
