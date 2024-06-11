/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/DataSummary.h>
#include <aws/qconnect/model/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_QCONNECT_API ResultData();
    AWS_QCONNECT_API ResultData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ResultData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Summary of the recommended content.</p>
     */
    inline const DataSummary& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const DataSummary& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(DataSummary&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline ResultData& WithData(const DataSummary& value) { SetData(value); return *this;}
    inline ResultData& WithData(DataSummary&& value) { SetData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document.</p>
     */
    inline const Document& GetDocument() const{ return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    inline void SetDocument(const Document& value) { m_documentHasBeenSet = true; m_document = value; }
    inline void SetDocument(Document&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }
    inline ResultData& WithDocument(const Document& value) { SetDocument(value); return *this;}
    inline ResultData& WithDocument(Document&& value) { SetDocument(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relevance score of the results.</p>
     */
    inline double GetRelevanceScore() const{ return m_relevanceScore; }
    inline bool RelevanceScoreHasBeenSet() const { return m_relevanceScoreHasBeenSet; }
    inline void SetRelevanceScore(double value) { m_relevanceScoreHasBeenSet = true; m_relevanceScore = value; }
    inline ResultData& WithRelevanceScore(double value) { SetRelevanceScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the result data.</p>
     */
    inline const Aws::String& GetResultId() const{ return m_resultId; }
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }
    inline void SetResultId(const Aws::String& value) { m_resultIdHasBeenSet = true; m_resultId = value; }
    inline void SetResultId(Aws::String&& value) { m_resultIdHasBeenSet = true; m_resultId = std::move(value); }
    inline void SetResultId(const char* value) { m_resultIdHasBeenSet = true; m_resultId.assign(value); }
    inline ResultData& WithResultId(const Aws::String& value) { SetResultId(value); return *this;}
    inline ResultData& WithResultId(Aws::String&& value) { SetResultId(std::move(value)); return *this;}
    inline ResultData& WithResultId(const char* value) { SetResultId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the query result.</p>
     */
    inline const QueryResultType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const QueryResultType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(QueryResultType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ResultData& WithType(const QueryResultType& value) { SetType(value); return *this;}
    inline ResultData& WithType(QueryResultType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    DataSummary m_data;
    bool m_dataHasBeenSet = false;

    Document m_document;
    bool m_documentHasBeenSet = false;

    double m_relevanceScore;
    bool m_relevanceScoreHasBeenSet = false;

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;

    QueryResultType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
