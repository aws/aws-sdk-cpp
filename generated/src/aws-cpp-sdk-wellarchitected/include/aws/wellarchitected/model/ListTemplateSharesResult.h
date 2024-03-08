/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/TemplateShareSummary.h>
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
namespace WellArchitected
{
namespace Model
{
  class ListTemplateSharesResult
  {
  public:
    AWS_WELLARCHITECTED_API ListTemplateSharesResult();
    AWS_WELLARCHITECTED_API ListTemplateSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListTemplateSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The review template ARN.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArn = value; }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArn = std::move(value); }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArn.assign(value); }

    /**
     * <p>The review template ARN.</p>
     */
    inline ListTemplateSharesResult& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline ListTemplateSharesResult& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline ListTemplateSharesResult& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    /**
     * <p>A review template share summary return object.</p>
     */
    inline const Aws::Vector<TemplateShareSummary>& GetTemplateShareSummaries() const{ return m_templateShareSummaries; }

    /**
     * <p>A review template share summary return object.</p>
     */
    inline void SetTemplateShareSummaries(const Aws::Vector<TemplateShareSummary>& value) { m_templateShareSummaries = value; }

    /**
     * <p>A review template share summary return object.</p>
     */
    inline void SetTemplateShareSummaries(Aws::Vector<TemplateShareSummary>&& value) { m_templateShareSummaries = std::move(value); }

    /**
     * <p>A review template share summary return object.</p>
     */
    inline ListTemplateSharesResult& WithTemplateShareSummaries(const Aws::Vector<TemplateShareSummary>& value) { SetTemplateShareSummaries(value); return *this;}

    /**
     * <p>A review template share summary return object.</p>
     */
    inline ListTemplateSharesResult& WithTemplateShareSummaries(Aws::Vector<TemplateShareSummary>&& value) { SetTemplateShareSummaries(std::move(value)); return *this;}

    /**
     * <p>A review template share summary return object.</p>
     */
    inline ListTemplateSharesResult& AddTemplateShareSummaries(const TemplateShareSummary& value) { m_templateShareSummaries.push_back(value); return *this; }

    /**
     * <p>A review template share summary return object.</p>
     */
    inline ListTemplateSharesResult& AddTemplateShareSummaries(TemplateShareSummary&& value) { m_templateShareSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListTemplateSharesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListTemplateSharesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListTemplateSharesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTemplateSharesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTemplateSharesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTemplateSharesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_templateArn;

    Aws::Vector<TemplateShareSummary> m_templateShareSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
