/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/TemplateStepGroupSummary.h>
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
  class ListTemplateStepGroupsResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplateStepGroupsResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplateStepGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplateStepGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListTemplateStepGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListTemplateStepGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListTemplateStepGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The summary of the step group in the template.</p>
     */
    inline const Aws::Vector<TemplateStepGroupSummary>& GetTemplateStepGroupSummary() const{ return m_templateStepGroupSummary; }

    /**
     * <p>The summary of the step group in the template.</p>
     */
    inline void SetTemplateStepGroupSummary(const Aws::Vector<TemplateStepGroupSummary>& value) { m_templateStepGroupSummary = value; }

    /**
     * <p>The summary of the step group in the template.</p>
     */
    inline void SetTemplateStepGroupSummary(Aws::Vector<TemplateStepGroupSummary>&& value) { m_templateStepGroupSummary = std::move(value); }

    /**
     * <p>The summary of the step group in the template.</p>
     */
    inline ListTemplateStepGroupsResult& WithTemplateStepGroupSummary(const Aws::Vector<TemplateStepGroupSummary>& value) { SetTemplateStepGroupSummary(value); return *this;}

    /**
     * <p>The summary of the step group in the template.</p>
     */
    inline ListTemplateStepGroupsResult& WithTemplateStepGroupSummary(Aws::Vector<TemplateStepGroupSummary>&& value) { SetTemplateStepGroupSummary(std::move(value)); return *this;}

    /**
     * <p>The summary of the step group in the template.</p>
     */
    inline ListTemplateStepGroupsResult& AddTemplateStepGroupSummary(const TemplateStepGroupSummary& value) { m_templateStepGroupSummary.push_back(value); return *this; }

    /**
     * <p>The summary of the step group in the template.</p>
     */
    inline ListTemplateStepGroupsResult& AddTemplateStepGroupSummary(TemplateStepGroupSummary&& value) { m_templateStepGroupSummary.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<TemplateStepGroupSummary> m_templateStepGroupSummary;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
