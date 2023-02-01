/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/EnvironmentSummary.h>
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
namespace Proton
{
namespace Model
{
  class ListEnvironmentsResult
  {
  public:
    AWS_PROTON_API ListEnvironmentsResult();
    AWS_PROTON_API ListEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of environment detail data summaries.</p>
     */
    inline const Aws::Vector<EnvironmentSummary>& GetEnvironments() const{ return m_environments; }

    /**
     * <p>An array of environment detail data summaries.</p>
     */
    inline void SetEnvironments(const Aws::Vector<EnvironmentSummary>& value) { m_environments = value; }

    /**
     * <p>An array of environment detail data summaries.</p>
     */
    inline void SetEnvironments(Aws::Vector<EnvironmentSummary>&& value) { m_environments = std::move(value); }

    /**
     * <p>An array of environment detail data summaries.</p>
     */
    inline ListEnvironmentsResult& WithEnvironments(const Aws::Vector<EnvironmentSummary>& value) { SetEnvironments(value); return *this;}

    /**
     * <p>An array of environment detail data summaries.</p>
     */
    inline ListEnvironmentsResult& WithEnvironments(Aws::Vector<EnvironmentSummary>&& value) { SetEnvironments(std::move(value)); return *this;}

    /**
     * <p>An array of environment detail data summaries.</p>
     */
    inline ListEnvironmentsResult& AddEnvironments(const EnvironmentSummary& value) { m_environments.push_back(value); return *this; }

    /**
     * <p>An array of environment detail data summaries.</p>
     */
    inline ListEnvironmentsResult& AddEnvironments(EnvironmentSummary&& value) { m_environments.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the current requested list of environments.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the current requested list of environments.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the current requested list of environments.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the current requested list of environments.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the current requested list of environments.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the current requested list of environments.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the current requested list of environments.</p>
     */
    inline ListEnvironmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EnvironmentSummary> m_environments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
