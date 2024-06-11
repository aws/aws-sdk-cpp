﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>GetHostnameSuggestion</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/GetHostnameSuggestionResult">AWS
   * API Reference</a></p>
   */
  class GetHostnameSuggestionResult
  {
  public:
    AWS_OPSWORKS_API GetHostnameSuggestionResult();
    AWS_OPSWORKS_API GetHostnameSuggestionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API GetHostnameSuggestionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The layer ID.</p>
     */
    inline const Aws::String& GetLayerId() const{ return m_layerId; }
    inline void SetLayerId(const Aws::String& value) { m_layerId = value; }
    inline void SetLayerId(Aws::String&& value) { m_layerId = std::move(value); }
    inline void SetLayerId(const char* value) { m_layerId.assign(value); }
    inline GetHostnameSuggestionResult& WithLayerId(const Aws::String& value) { SetLayerId(value); return *this;}
    inline GetHostnameSuggestionResult& WithLayerId(Aws::String&& value) { SetLayerId(std::move(value)); return *this;}
    inline GetHostnameSuggestionResult& WithLayerId(const char* value) { SetLayerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generated host name.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }
    inline void SetHostname(const Aws::String& value) { m_hostname = value; }
    inline void SetHostname(Aws::String&& value) { m_hostname = std::move(value); }
    inline void SetHostname(const char* value) { m_hostname.assign(value); }
    inline GetHostnameSuggestionResult& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}
    inline GetHostnameSuggestionResult& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}
    inline GetHostnameSuggestionResult& WithHostname(const char* value) { SetHostname(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetHostnameSuggestionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetHostnameSuggestionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetHostnameSuggestionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_layerId;

    Aws::String m_hostname;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
