/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/TemplateSummary.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{
  class ListTemplatesResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplatesResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The summary of the template.</p>
     */
    inline const Aws::Vector<TemplateSummary>& GetTemplateSummary() const{ return m_templateSummary; }

    /**
     * <p>The summary of the template.</p>
     */
    inline void SetTemplateSummary(const Aws::Vector<TemplateSummary>& value) { m_templateSummary = value; }

    /**
     * <p>The summary of the template.</p>
     */
    inline void SetTemplateSummary(Aws::Vector<TemplateSummary>&& value) { m_templateSummary = std::move(value); }

    /**
     * <p>The summary of the template.</p>
     */
    inline ListTemplatesResult& WithTemplateSummary(const Aws::Vector<TemplateSummary>& value) { SetTemplateSummary(value); return *this;}

    /**
     * <p>The summary of the template.</p>
     */
    inline ListTemplatesResult& WithTemplateSummary(Aws::Vector<TemplateSummary>&& value) { SetTemplateSummary(std::move(value)); return *this;}

    /**
     * <p>The summary of the template.</p>
     */
    inline ListTemplatesResult& AddTemplateSummary(const TemplateSummary& value) { m_templateSummary.push_back(value); return *this; }

    /**
     * <p>The summary of the template.</p>
     */
    inline ListTemplatesResult& AddTemplateSummary(TemplateSummary&& value) { m_templateSummary.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<TemplateSummary> m_templateSummary;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
