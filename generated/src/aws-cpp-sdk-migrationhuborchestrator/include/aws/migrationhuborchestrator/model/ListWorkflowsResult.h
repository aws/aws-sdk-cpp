/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/MigrationWorkflowSummary.h>
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
  class ListWorkflowsResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowsResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListWorkflowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListWorkflowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListWorkflowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The summary of the migration workflow.</p>
     */
    inline const Aws::Vector<MigrationWorkflowSummary>& GetMigrationWorkflowSummary() const{ return m_migrationWorkflowSummary; }

    /**
     * <p>The summary of the migration workflow.</p>
     */
    inline void SetMigrationWorkflowSummary(const Aws::Vector<MigrationWorkflowSummary>& value) { m_migrationWorkflowSummary = value; }

    /**
     * <p>The summary of the migration workflow.</p>
     */
    inline void SetMigrationWorkflowSummary(Aws::Vector<MigrationWorkflowSummary>&& value) { m_migrationWorkflowSummary = std::move(value); }

    /**
     * <p>The summary of the migration workflow.</p>
     */
    inline ListWorkflowsResult& WithMigrationWorkflowSummary(const Aws::Vector<MigrationWorkflowSummary>& value) { SetMigrationWorkflowSummary(value); return *this;}

    /**
     * <p>The summary of the migration workflow.</p>
     */
    inline ListWorkflowsResult& WithMigrationWorkflowSummary(Aws::Vector<MigrationWorkflowSummary>&& value) { SetMigrationWorkflowSummary(std::move(value)); return *this;}

    /**
     * <p>The summary of the migration workflow.</p>
     */
    inline ListWorkflowsResult& AddMigrationWorkflowSummary(const MigrationWorkflowSummary& value) { m_migrationWorkflowSummary.push_back(value); return *this; }

    /**
     * <p>The summary of the migration workflow.</p>
     */
    inline ListWorkflowsResult& AddMigrationWorkflowSummary(MigrationWorkflowSummary&& value) { m_migrationWorkflowSummary.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListWorkflowsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListWorkflowsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListWorkflowsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<MigrationWorkflowSummary> m_migrationWorkflowSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
