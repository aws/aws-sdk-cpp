/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/Workforce.h>
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
  class ListWorkforcesResult
  {
  public:
    AWS_SAGEMAKER_API ListWorkforcesResult();
    AWS_SAGEMAKER_API ListWorkforcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListWorkforcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list containing information about your workforce.</p>
     */
    inline const Aws::Vector<Workforce>& GetWorkforces() const{ return m_workforces; }

    /**
     * <p>A list containing information about your workforce.</p>
     */
    inline void SetWorkforces(const Aws::Vector<Workforce>& value) { m_workforces = value; }

    /**
     * <p>A list containing information about your workforce.</p>
     */
    inline void SetWorkforces(Aws::Vector<Workforce>&& value) { m_workforces = std::move(value); }

    /**
     * <p>A list containing information about your workforce.</p>
     */
    inline ListWorkforcesResult& WithWorkforces(const Aws::Vector<Workforce>& value) { SetWorkforces(value); return *this;}

    /**
     * <p>A list containing information about your workforce.</p>
     */
    inline ListWorkforcesResult& WithWorkforces(Aws::Vector<Workforce>&& value) { SetWorkforces(std::move(value)); return *this;}

    /**
     * <p>A list containing information about your workforce.</p>
     */
    inline ListWorkforcesResult& AddWorkforces(const Workforce& value) { m_workforces.push_back(value); return *this; }

    /**
     * <p>A list containing information about your workforce.</p>
     */
    inline ListWorkforcesResult& AddWorkforces(Workforce&& value) { m_workforces.push_back(std::move(value)); return *this; }


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
    inline ListWorkforcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to resume pagination.</p>
     */
    inline ListWorkforcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to resume pagination.</p>
     */
    inline ListWorkforcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Workforce> m_workforces;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
