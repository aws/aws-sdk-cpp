/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/Workteam.h>
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
  class ListWorkteamsResult
  {
  public:
    AWS_SAGEMAKER_API ListWorkteamsResult();
    AWS_SAGEMAKER_API ListWorkteamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListWorkteamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Workteam</code> objects, each describing a work team.</p>
     */
    inline const Aws::Vector<Workteam>& GetWorkteams() const{ return m_workteams; }

    /**
     * <p>An array of <code>Workteam</code> objects, each describing a work team.</p>
     */
    inline void SetWorkteams(const Aws::Vector<Workteam>& value) { m_workteams = value; }

    /**
     * <p>An array of <code>Workteam</code> objects, each describing a work team.</p>
     */
    inline void SetWorkteams(Aws::Vector<Workteam>&& value) { m_workteams = std::move(value); }

    /**
     * <p>An array of <code>Workteam</code> objects, each describing a work team.</p>
     */
    inline ListWorkteamsResult& WithWorkteams(const Aws::Vector<Workteam>& value) { SetWorkteams(value); return *this;}

    /**
     * <p>An array of <code>Workteam</code> objects, each describing a work team.</p>
     */
    inline ListWorkteamsResult& WithWorkteams(Aws::Vector<Workteam>&& value) { SetWorkteams(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Workteam</code> objects, each describing a work team.</p>
     */
    inline ListWorkteamsResult& AddWorkteams(const Workteam& value) { m_workteams.push_back(value); return *this; }

    /**
     * <p>An array of <code>Workteam</code> objects, each describing a work team.</p>
     */
    inline ListWorkteamsResult& AddWorkteams(Workteam&& value) { m_workteams.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of work teams, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of work teams, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of work teams, use it in the subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of work teams, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of work teams, use it in the subsequent request.</p>
     */
    inline ListWorkteamsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of work teams, use it in the subsequent request.</p>
     */
    inline ListWorkteamsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of work teams, use it in the subsequent request.</p>
     */
    inline ListWorkteamsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Workteam> m_workteams;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
