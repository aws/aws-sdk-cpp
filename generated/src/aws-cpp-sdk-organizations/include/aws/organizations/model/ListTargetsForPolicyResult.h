/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/PolicyTargetSummary.h>
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
namespace Organizations
{
namespace Model
{
  class ListTargetsForPolicyResult
  {
  public:
    AWS_ORGANIZATIONS_API ListTargetsForPolicyResult();
    AWS_ORGANIZATIONS_API ListTargetsForPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API ListTargetsForPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of structures, each of which contains details about one of the
     * entities to which the specified policy is attached.</p>
     */
    inline const Aws::Vector<PolicyTargetSummary>& GetTargets() const{ return m_targets; }

    /**
     * <p>A list of structures, each of which contains details about one of the
     * entities to which the specified policy is attached.</p>
     */
    inline void SetTargets(const Aws::Vector<PolicyTargetSummary>& value) { m_targets = value; }

    /**
     * <p>A list of structures, each of which contains details about one of the
     * entities to which the specified policy is attached.</p>
     */
    inline void SetTargets(Aws::Vector<PolicyTargetSummary>&& value) { m_targets = std::move(value); }

    /**
     * <p>A list of structures, each of which contains details about one of the
     * entities to which the specified policy is attached.</p>
     */
    inline ListTargetsForPolicyResult& WithTargets(const Aws::Vector<PolicyTargetSummary>& value) { SetTargets(value); return *this;}

    /**
     * <p>A list of structures, each of which contains details about one of the
     * entities to which the specified policy is attached.</p>
     */
    inline ListTargetsForPolicyResult& WithTargets(Aws::Vector<PolicyTargetSummary>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>A list of structures, each of which contains details about one of the
     * entities to which the specified policy is attached.</p>
     */
    inline ListTargetsForPolicyResult& AddTargets(const PolicyTargetSummary& value) { m_targets.push_back(value); return *this; }

    /**
     * <p>A list of structures, each of which contains details about one of the
     * entities to which the specified policy is attached.</p>
     */
    inline ListTargetsForPolicyResult& AddTargets(PolicyTargetSummary&& value) { m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListTargetsForPolicyResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListTargetsForPolicyResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListTargetsForPolicyResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PolicyTargetSummary> m_targets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
