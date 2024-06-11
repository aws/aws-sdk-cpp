﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>An HTTP 200 response if the request succeeds, or an error message if the
   * request fails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutEmailIdentityDkimAttributesResponse">AWS
   * API Reference</a></p>
   */
  class PutEmailIdentityDkimAttributesResult
  {
  public:
    AWS_PINPOINTEMAIL_API PutEmailIdentityDkimAttributesResult();
    AWS_PINPOINTEMAIL_API PutEmailIdentityDkimAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API PutEmailIdentityDkimAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutEmailIdentityDkimAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutEmailIdentityDkimAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutEmailIdentityDkimAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
