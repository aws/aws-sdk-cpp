/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{
  class DeleteParametersResult
  {
  public:
    AWS_SSM_API DeleteParametersResult();
    AWS_SSM_API DeleteParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DeleteParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of the deleted parameters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeletedParameters() const{ return m_deletedParameters; }
    inline void SetDeletedParameters(const Aws::Vector<Aws::String>& value) { m_deletedParameters = value; }
    inline void SetDeletedParameters(Aws::Vector<Aws::String>&& value) { m_deletedParameters = std::move(value); }
    inline DeleteParametersResult& WithDeletedParameters(const Aws::Vector<Aws::String>& value) { SetDeletedParameters(value); return *this;}
    inline DeleteParametersResult& WithDeletedParameters(Aws::Vector<Aws::String>&& value) { SetDeletedParameters(std::move(value)); return *this;}
    inline DeleteParametersResult& AddDeletedParameters(const Aws::String& value) { m_deletedParameters.push_back(value); return *this; }
    inline DeleteParametersResult& AddDeletedParameters(Aws::String&& value) { m_deletedParameters.push_back(std::move(value)); return *this; }
    inline DeleteParametersResult& AddDeletedParameters(const char* value) { m_deletedParameters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of parameters that weren't deleted because the parameters aren't
     * valid.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidParameters() const{ return m_invalidParameters; }
    inline void SetInvalidParameters(const Aws::Vector<Aws::String>& value) { m_invalidParameters = value; }
    inline void SetInvalidParameters(Aws::Vector<Aws::String>&& value) { m_invalidParameters = std::move(value); }
    inline DeleteParametersResult& WithInvalidParameters(const Aws::Vector<Aws::String>& value) { SetInvalidParameters(value); return *this;}
    inline DeleteParametersResult& WithInvalidParameters(Aws::Vector<Aws::String>&& value) { SetInvalidParameters(std::move(value)); return *this;}
    inline DeleteParametersResult& AddInvalidParameters(const Aws::String& value) { m_invalidParameters.push_back(value); return *this; }
    inline DeleteParametersResult& AddInvalidParameters(Aws::String&& value) { m_invalidParameters.push_back(std::move(value)); return *this; }
    inline DeleteParametersResult& AddInvalidParameters(const char* value) { m_invalidParameters.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteParametersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteParametersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteParametersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_deletedParameters;

    Aws::Vector<Aws::String> m_invalidParameters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
