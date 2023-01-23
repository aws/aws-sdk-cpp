/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/Document.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>Information about the result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ResultData">AWS
   * API Reference</a></p>
   */
  class ResultData
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API ResultData();
    AWS_CONNECTWISDOMSERVICE_API ResultData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API ResultData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The document.</p>
     */
    inline const Document& GetDocument() const{ return m_document; }

    /**
     * <p>The document.</p>
     */
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }

    /**
     * <p>The document.</p>
     */
    inline void SetDocument(const Document& value) { m_documentHasBeenSet = true; m_document = value; }

    /**
     * <p>The document.</p>
     */
    inline void SetDocument(Document&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }

    /**
     * <p>The document.</p>
     */
    inline ResultData& WithDocument(const Document& value) { SetDocument(value); return *this;}

    /**
     * <p>The document.</p>
     */
    inline ResultData& WithDocument(Document&& value) { SetDocument(std::move(value)); return *this;}


    /**
     * <p>The relevance score of the results.</p>
     */
    inline double GetRelevanceScore() const{ return m_relevanceScore; }

    /**
     * <p>The relevance score of the results.</p>
     */
    inline bool RelevanceScoreHasBeenSet() const { return m_relevanceScoreHasBeenSet; }

    /**
     * <p>The relevance score of the results.</p>
     */
    inline void SetRelevanceScore(double value) { m_relevanceScoreHasBeenSet = true; m_relevanceScore = value; }

    /**
     * <p>The relevance score of the results.</p>
     */
    inline ResultData& WithRelevanceScore(double value) { SetRelevanceScore(value); return *this;}


    /**
     * <p>The identifier of the result data.</p>
     */
    inline const Aws::String& GetResultId() const{ return m_resultId; }

    /**
     * <p>The identifier of the result data.</p>
     */
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }

    /**
     * <p>The identifier of the result data.</p>
     */
    inline void SetResultId(const Aws::String& value) { m_resultIdHasBeenSet = true; m_resultId = value; }

    /**
     * <p>The identifier of the result data.</p>
     */
    inline void SetResultId(Aws::String&& value) { m_resultIdHasBeenSet = true; m_resultId = std::move(value); }

    /**
     * <p>The identifier of the result data.</p>
     */
    inline void SetResultId(const char* value) { m_resultIdHasBeenSet = true; m_resultId.assign(value); }

    /**
     * <p>The identifier of the result data.</p>
     */
    inline ResultData& WithResultId(const Aws::String& value) { SetResultId(value); return *this;}

    /**
     * <p>The identifier of the result data.</p>
     */
    inline ResultData& WithResultId(Aws::String&& value) { SetResultId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the result data.</p>
     */
    inline ResultData& WithResultId(const char* value) { SetResultId(value); return *this;}

  private:

    Document m_document;
    bool m_documentHasBeenSet = false;

    double m_relevanceScore;
    bool m_relevanceScoreHasBeenSet = false;

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
