/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/SessionDataNamespace.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_QCONNECT_API UpdateSessionDataResult();
    AWS_QCONNECT_API UpdateSessionDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API UpdateSessionDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Data stored in the session.</p>
     */
    inline const Aws::Vector<RuntimeSessionData>& GetData() const{ return m_data; }
    inline void SetData(const Aws::Vector<RuntimeSessionData>& value) { m_data = value; }
    inline void SetData(Aws::Vector<RuntimeSessionData>&& value) { m_data = std::move(value); }
    inline UpdateSessionDataResult& WithData(const Aws::Vector<RuntimeSessionData>& value) { SetData(value); return *this;}
    inline UpdateSessionDataResult& WithData(Aws::Vector<RuntimeSessionData>&& value) { SetData(std::move(value)); return *this;}
    inline UpdateSessionDataResult& AddData(const RuntimeSessionData& value) { m_data.push_back(value); return *this; }
    inline UpdateSessionDataResult& AddData(RuntimeSessionData&& value) { m_data.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The namespace into which the session data is stored. Supported namespaces
     * are: Custom</p>
     */
    inline const SessionDataNamespace& GetNamespace() const{ return m_namespace; }
    inline void SetNamespace(const SessionDataNamespace& value) { m_namespace = value; }
    inline void SetNamespace(SessionDataNamespace&& value) { m_namespace = std::move(value); }
    inline UpdateSessionDataResult& WithNamespace(const SessionDataNamespace& value) { SetNamespace(value); return *this;}
    inline UpdateSessionDataResult& WithNamespace(SessionDataNamespace&& value) { SetNamespace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the session.</p>
     */
    inline const Aws::String& GetSessionArn() const{ return m_sessionArn; }
    inline void SetSessionArn(const Aws::String& value) { m_sessionArn = value; }
    inline void SetSessionArn(Aws::String&& value) { m_sessionArn = std::move(value); }
    inline void SetSessionArn(const char* value) { m_sessionArn.assign(value); }
    inline UpdateSessionDataResult& WithSessionArn(const Aws::String& value) { SetSessionArn(value); return *this;}
    inline UpdateSessionDataResult& WithSessionArn(Aws::String&& value) { SetSessionArn(std::move(value)); return *this;}
    inline UpdateSessionDataResult& WithSessionArn(const char* value) { SetSessionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline UpdateSessionDataResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline UpdateSessionDataResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline UpdateSessionDataResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateSessionDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateSessionDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateSessionDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RuntimeSessionData> m_data;

    SessionDataNamespace m_namespace;

    Aws::String m_sessionArn;

    Aws::String m_sessionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
