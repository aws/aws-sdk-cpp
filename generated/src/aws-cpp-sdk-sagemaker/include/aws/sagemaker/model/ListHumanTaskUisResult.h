/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HumanTaskUiSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListHumanTaskUisResult
  {
  public:
    AWS_SAGEMAKER_API ListHumanTaskUisResult();
    AWS_SAGEMAKER_API ListHumanTaskUisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListHumanTaskUisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects describing the human task user interfaces.</p>
     */
    inline const Aws::Vector<HumanTaskUiSummary>& GetHumanTaskUiSummaries() const{ return m_humanTaskUiSummaries; }

    /**
     * <p>An array of objects describing the human task user interfaces.</p>
     */
    inline void SetHumanTaskUiSummaries(const Aws::Vector<HumanTaskUiSummary>& value) { m_humanTaskUiSummaries = value; }

    /**
     * <p>An array of objects describing the human task user interfaces.</p>
     */
    inline void SetHumanTaskUiSummaries(Aws::Vector<HumanTaskUiSummary>&& value) { m_humanTaskUiSummaries = std::move(value); }

    /**
     * <p>An array of objects describing the human task user interfaces.</p>
     */
    inline ListHumanTaskUisResult& WithHumanTaskUiSummaries(const Aws::Vector<HumanTaskUiSummary>& value) { SetHumanTaskUiSummaries(value); return *this;}

    /**
     * <p>An array of objects describing the human task user interfaces.</p>
     */
    inline ListHumanTaskUisResult& WithHumanTaskUiSummaries(Aws::Vector<HumanTaskUiSummary>&& value) { SetHumanTaskUiSummaries(std::move(value)); return *this;}

    /**
     * <p>An array of objects describing the human task user interfaces.</p>
     */
    inline ListHumanTaskUisResult& AddHumanTaskUiSummaries(const HumanTaskUiSummary& value) { m_humanTaskUiSummaries.push_back(value); return *this; }

    /**
     * <p>An array of objects describing the human task user interfaces.</p>
     */
    inline ListHumanTaskUisResult& AddHumanTaskUiSummaries(HumanTaskUiSummary&& value) { m_humanTaskUiSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to resume pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to resume pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to resume pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to resume pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to resume pagination.</p>
     */
    inline ListHumanTaskUisResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to resume pagination.</p>
     */
    inline ListHumanTaskUisResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to resume pagination.</p>
     */
    inline ListHumanTaskUisResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<HumanTaskUiSummary> m_humanTaskUiSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
