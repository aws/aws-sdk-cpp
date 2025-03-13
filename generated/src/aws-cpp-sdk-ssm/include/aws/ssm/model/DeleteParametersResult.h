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
    AWS_SSM_API DeleteParametersResult() = default;
    AWS_SSM_API DeleteParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DeleteParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of the deleted parameters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeletedParameters() const { return m_deletedParameters; }
    template<typename DeletedParametersT = Aws::Vector<Aws::String>>
    void SetDeletedParameters(DeletedParametersT&& value) { m_deletedParametersHasBeenSet = true; m_deletedParameters = std::forward<DeletedParametersT>(value); }
    template<typename DeletedParametersT = Aws::Vector<Aws::String>>
    DeleteParametersResult& WithDeletedParameters(DeletedParametersT&& value) { SetDeletedParameters(std::forward<DeletedParametersT>(value)); return *this;}
    template<typename DeletedParametersT = Aws::String>
    DeleteParametersResult& AddDeletedParameters(DeletedParametersT&& value) { m_deletedParametersHasBeenSet = true; m_deletedParameters.emplace_back(std::forward<DeletedParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of parameters that weren't deleted because the parameters aren't
     * valid.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidParameters() const { return m_invalidParameters; }
    template<typename InvalidParametersT = Aws::Vector<Aws::String>>
    void SetInvalidParameters(InvalidParametersT&& value) { m_invalidParametersHasBeenSet = true; m_invalidParameters = std::forward<InvalidParametersT>(value); }
    template<typename InvalidParametersT = Aws::Vector<Aws::String>>
    DeleteParametersResult& WithInvalidParameters(InvalidParametersT&& value) { SetInvalidParameters(std::forward<InvalidParametersT>(value)); return *this;}
    template<typename InvalidParametersT = Aws::String>
    DeleteParametersResult& AddInvalidParameters(InvalidParametersT&& value) { m_invalidParametersHasBeenSet = true; m_invalidParameters.emplace_back(std::forward<InvalidParametersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteParametersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_deletedParameters;
    bool m_deletedParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_invalidParameters;
    bool m_invalidParametersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
