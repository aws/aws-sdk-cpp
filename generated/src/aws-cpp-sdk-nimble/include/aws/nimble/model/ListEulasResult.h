/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/Eula.h>
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
  class ListEulasResult
  {
  public:
    AWS_NIMBLESTUDIO_API ListEulasResult();
    AWS_NIMBLESTUDIO_API ListEulasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API ListEulasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of EULA resources.</p>
     */
    inline const Aws::Vector<Eula>& GetEulas() const{ return m_eulas; }
    inline void SetEulas(const Aws::Vector<Eula>& value) { m_eulas = value; }
    inline void SetEulas(Aws::Vector<Eula>&& value) { m_eulas = std::move(value); }
    inline ListEulasResult& WithEulas(const Aws::Vector<Eula>& value) { SetEulas(value); return *this;}
    inline ListEulasResult& WithEulas(Aws::Vector<Eula>&& value) { SetEulas(std::move(value)); return *this;}
    inline ListEulasResult& AddEulas(const Eula& value) { m_eulas.push_back(value); return *this; }
    inline ListEulasResult& AddEulas(Eula&& value) { m_eulas.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEulasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEulasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEulasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEulasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEulasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEulasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Eula> m_eulas;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
