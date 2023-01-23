/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/EulaAcceptance.h>
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
namespace NimbleStudio
{
namespace Model
{
  class ListEulaAcceptancesResult
  {
  public:
    AWS_NIMBLESTUDIO_API ListEulaAcceptancesResult();
    AWS_NIMBLESTUDIO_API ListEulaAcceptancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API ListEulaAcceptancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of EULA acceptances.</p>
     */
    inline const Aws::Vector<EulaAcceptance>& GetEulaAcceptances() const{ return m_eulaAcceptances; }

    /**
     * <p>A collection of EULA acceptances.</p>
     */
    inline void SetEulaAcceptances(const Aws::Vector<EulaAcceptance>& value) { m_eulaAcceptances = value; }

    /**
     * <p>A collection of EULA acceptances.</p>
     */
    inline void SetEulaAcceptances(Aws::Vector<EulaAcceptance>&& value) { m_eulaAcceptances = std::move(value); }

    /**
     * <p>A collection of EULA acceptances.</p>
     */
    inline ListEulaAcceptancesResult& WithEulaAcceptances(const Aws::Vector<EulaAcceptance>& value) { SetEulaAcceptances(value); return *this;}

    /**
     * <p>A collection of EULA acceptances.</p>
     */
    inline ListEulaAcceptancesResult& WithEulaAcceptances(Aws::Vector<EulaAcceptance>&& value) { SetEulaAcceptances(std::move(value)); return *this;}

    /**
     * <p>A collection of EULA acceptances.</p>
     */
    inline ListEulaAcceptancesResult& AddEulaAcceptances(const EulaAcceptance& value) { m_eulaAcceptances.push_back(value); return *this; }

    /**
     * <p>A collection of EULA acceptances.</p>
     */
    inline ListEulaAcceptancesResult& AddEulaAcceptances(EulaAcceptance&& value) { m_eulaAcceptances.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListEulaAcceptancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListEulaAcceptancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListEulaAcceptancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EulaAcceptance> m_eulaAcceptances;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
