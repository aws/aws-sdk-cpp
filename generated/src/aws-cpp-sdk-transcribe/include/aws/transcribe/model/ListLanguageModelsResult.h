/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/LanguageModel.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TranscribeService
{
namespace Model
{
  class ListLanguageModelsResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API ListLanguageModelsResult();
    AWS_TRANSCRIBESERVICE_API ListLanguageModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API ListLanguageModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline ListLanguageModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline ListLanguageModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline ListLanguageModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Provides information about the custom language models that match the criteria
     * specified in your request.</p>
     */
    inline const Aws::Vector<LanguageModel>& GetModels() const{ return m_models; }

    /**
     * <p>Provides information about the custom language models that match the criteria
     * specified in your request.</p>
     */
    inline void SetModels(const Aws::Vector<LanguageModel>& value) { m_models = value; }

    /**
     * <p>Provides information about the custom language models that match the criteria
     * specified in your request.</p>
     */
    inline void SetModels(Aws::Vector<LanguageModel>&& value) { m_models = std::move(value); }

    /**
     * <p>Provides information about the custom language models that match the criteria
     * specified in your request.</p>
     */
    inline ListLanguageModelsResult& WithModels(const Aws::Vector<LanguageModel>& value) { SetModels(value); return *this;}

    /**
     * <p>Provides information about the custom language models that match the criteria
     * specified in your request.</p>
     */
    inline ListLanguageModelsResult& WithModels(Aws::Vector<LanguageModel>&& value) { SetModels(std::move(value)); return *this;}

    /**
     * <p>Provides information about the custom language models that match the criteria
     * specified in your request.</p>
     */
    inline ListLanguageModelsResult& AddModels(const LanguageModel& value) { m_models.push_back(value); return *this; }

    /**
     * <p>Provides information about the custom language models that match the criteria
     * specified in your request.</p>
     */
    inline ListLanguageModelsResult& AddModels(LanguageModel&& value) { m_models.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<LanguageModel> m_models;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
