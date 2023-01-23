/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rolesanywhere/model/SubjectSummary.h>
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
namespace RolesAnywhere
{
namespace Model
{
  class ListSubjectsResult
  {
  public:
    AWS_ROLESANYWHERE_API ListSubjectsResult();
    AWS_ROLESANYWHERE_API ListSubjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API ListSubjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline ListSubjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline ListSubjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline ListSubjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of subjects.</p>
     */
    inline const Aws::Vector<SubjectSummary>& GetSubjects() const{ return m_subjects; }

    /**
     * <p>A list of subjects.</p>
     */
    inline void SetSubjects(const Aws::Vector<SubjectSummary>& value) { m_subjects = value; }

    /**
     * <p>A list of subjects.</p>
     */
    inline void SetSubjects(Aws::Vector<SubjectSummary>&& value) { m_subjects = std::move(value); }

    /**
     * <p>A list of subjects.</p>
     */
    inline ListSubjectsResult& WithSubjects(const Aws::Vector<SubjectSummary>& value) { SetSubjects(value); return *this;}

    /**
     * <p>A list of subjects.</p>
     */
    inline ListSubjectsResult& WithSubjects(Aws::Vector<SubjectSummary>&& value) { SetSubjects(std::move(value)); return *this;}

    /**
     * <p>A list of subjects.</p>
     */
    inline ListSubjectsResult& AddSubjects(const SubjectSummary& value) { m_subjects.push_back(value); return *this; }

    /**
     * <p>A list of subjects.</p>
     */
    inline ListSubjectsResult& AddSubjects(SubjectSummary&& value) { m_subjects.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SubjectSummary> m_subjects;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
