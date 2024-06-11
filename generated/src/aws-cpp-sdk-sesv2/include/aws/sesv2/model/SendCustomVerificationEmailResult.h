﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>The following element is returned by the service.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendCustomVerificationEmailResponse">AWS
   * API Reference</a></p>
   */
  class SendCustomVerificationEmailResult
  {
  public:
    AWS_SESV2_API SendCustomVerificationEmailResult();
    AWS_SESV2_API SendCustomVerificationEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API SendCustomVerificationEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique message identifier returned from the
     * <code>SendCustomVerificationEmail</code> operation.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }
    inline SendCustomVerificationEmailResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline SendCustomVerificationEmailResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline SendCustomVerificationEmailResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SendCustomVerificationEmailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SendCustomVerificationEmailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SendCustomVerificationEmailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_messageId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
