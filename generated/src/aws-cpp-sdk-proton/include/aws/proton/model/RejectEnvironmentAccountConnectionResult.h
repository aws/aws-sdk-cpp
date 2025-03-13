/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/EnvironmentAccountConnection.h>
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
namespace Proton
{
namespace Model
{
  class RejectEnvironmentAccountConnectionResult
  {
  public:
    AWS_PROTON_API RejectEnvironmentAccountConnectionResult() = default;
    AWS_PROTON_API RejectEnvironmentAccountConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API RejectEnvironmentAccountConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The environment connection account detail data that's returned by Proton.</p>
     */
    inline const EnvironmentAccountConnection& GetEnvironmentAccountConnection() const { return m_environmentAccountConnection; }
    template<typename EnvironmentAccountConnectionT = EnvironmentAccountConnection>
    void SetEnvironmentAccountConnection(EnvironmentAccountConnectionT&& value) { m_environmentAccountConnectionHasBeenSet = true; m_environmentAccountConnection = std::forward<EnvironmentAccountConnectionT>(value); }
    template<typename EnvironmentAccountConnectionT = EnvironmentAccountConnection>
    RejectEnvironmentAccountConnectionResult& WithEnvironmentAccountConnection(EnvironmentAccountConnectionT&& value) { SetEnvironmentAccountConnection(std::forward<EnvironmentAccountConnectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RejectEnvironmentAccountConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EnvironmentAccountConnection m_environmentAccountConnection;
    bool m_environmentAccountConnectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
