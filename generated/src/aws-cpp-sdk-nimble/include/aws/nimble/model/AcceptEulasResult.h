/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AcceptEulasResult
  {
  public:
    AWS_NIMBLESTUDIO_API AcceptEulasResult();
    AWS_NIMBLESTUDIO_API AcceptEulasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API AcceptEulasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline AcceptEulasResult& WithEulaAcceptances(const Aws::Vector<EulaAcceptance>& value) { SetEulaAcceptances(value); return *this;}

    /**
     * <p>A collection of EULA acceptances.</p>
     */
    inline AcceptEulasResult& WithEulaAcceptances(Aws::Vector<EulaAcceptance>&& value) { SetEulaAcceptances(std::move(value)); return *this;}

    /**
     * <p>A collection of EULA acceptances.</p>
     */
    inline AcceptEulasResult& AddEulaAcceptances(const EulaAcceptance& value) { m_eulaAcceptances.push_back(value); return *this; }

    /**
     * <p>A collection of EULA acceptances.</p>
     */
    inline AcceptEulasResult& AddEulaAcceptances(EulaAcceptance&& value) { m_eulaAcceptances.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EulaAcceptance> m_eulaAcceptances;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
