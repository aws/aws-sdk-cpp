/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
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
namespace QApps
{
namespace Model
{
  class UpdateQAppSessionResult
  {
  public:
    AWS_QAPPS_API UpdateQAppSessionResult();
    AWS_QAPPS_API UpdateQAppSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API UpdateQAppSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the updated Q App session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline UpdateQAppSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline UpdateQAppSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline UpdateQAppSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the updated Q App session.</p>
     */
    inline const Aws::String& GetSessionArn() const{ return m_sessionArn; }
    inline void SetSessionArn(const Aws::String& value) { m_sessionArn = value; }
    inline void SetSessionArn(Aws::String&& value) { m_sessionArn = std::move(value); }
    inline void SetSessionArn(const char* value) { m_sessionArn.assign(value); }
    inline UpdateQAppSessionResult& WithSessionArn(const Aws::String& value) { SetSessionArn(value); return *this;}
    inline UpdateQAppSessionResult& WithSessionArn(Aws::String&& value) { SetSessionArn(std::move(value)); return *this;}
    inline UpdateQAppSessionResult& WithSessionArn(const char* value) { SetSessionArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateQAppSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateQAppSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateQAppSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;

    Aws::String m_sessionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
