/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/SessionDataNamespace.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/RuntimeSessionData.h>
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
namespace QConnect
{
namespace Model
{
  class UpdateSessionDataResult
  {
  public:
    AWS_QCONNECT_API UpdateSessionDataResult() = default;
    AWS_QCONNECT_API UpdateSessionDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API UpdateSessionDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the session.</p>
     */
    inline const Aws::String& GetSessionArn() const { return m_sessionArn; }
    template<typename SessionArnT = Aws::String>
    void SetSessionArn(SessionArnT&& value) { m_sessionArnHasBeenSet = true; m_sessionArn = std::forward<SessionArnT>(value); }
    template<typename SessionArnT = Aws::String>
    UpdateSessionDataResult& WithSessionArn(SessionArnT&& value) { SetSessionArn(std::forward<SessionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    UpdateSessionDataResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace into which the session data is stored. Supported namespaces
     * are: Custom</p>
     */
    inline SessionDataNamespace GetNamespace() const { return m_namespace; }
    inline void SetNamespace(SessionDataNamespace value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline UpdateSessionDataResult& WithNamespace(SessionDataNamespace value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data stored in the session.</p>
     */
    inline const Aws::Vector<RuntimeSessionData>& GetData() const { return m_data; }
    template<typename DataT = Aws::Vector<RuntimeSessionData>>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Vector<RuntimeSessionData>>
    UpdateSessionDataResult& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    template<typename DataT = RuntimeSessionData>
    UpdateSessionDataResult& AddData(DataT&& value) { m_dataHasBeenSet = true; m_data.emplace_back(std::forward<DataT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSessionDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionArn;
    bool m_sessionArnHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    SessionDataNamespace m_namespace{SessionDataNamespace::NOT_SET};
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<RuntimeSessionData> m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
