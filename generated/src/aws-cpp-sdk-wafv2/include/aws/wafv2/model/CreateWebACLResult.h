﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/WebACLSummary.h>
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
namespace WAFV2
{
namespace Model
{
  class CreateWebACLResult
  {
  public:
    AWS_WAFV2_API CreateWebACLResult();
    AWS_WAFV2_API CreateWebACLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API CreateWebACLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>High-level information about a <a>WebACL</a>, returned by operations like
     * create and list. This provides information like the ID, that you can use to
     * retrieve and manage a <code>WebACL</code>, and the ARN, that you provide to
     * operations like <a>AssociateWebACL</a>.</p>
     */
    inline const WebACLSummary& GetSummary() const{ return m_summary; }
    inline void SetSummary(const WebACLSummary& value) { m_summary = value; }
    inline void SetSummary(WebACLSummary&& value) { m_summary = std::move(value); }
    inline CreateWebACLResult& WithSummary(const WebACLSummary& value) { SetSummary(value); return *this;}
    inline CreateWebACLResult& WithSummary(WebACLSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWebACLResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWebACLResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWebACLResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    WebACLSummary m_summary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
