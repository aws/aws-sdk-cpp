/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{
  class DescribeInboundDmarcSettingsResult
  {
  public:
    AWS_WORKMAIL_API DescribeInboundDmarcSettingsResult();
    AWS_WORKMAIL_API DescribeInboundDmarcSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeInboundDmarcSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the enforcement setting of the applied policy.</p>
     */
    inline bool GetEnforced() const{ return m_enforced; }

    /**
     * <p>Lists the enforcement setting of the applied policy.</p>
     */
    inline void SetEnforced(bool value) { m_enforced = value; }

    /**
     * <p>Lists the enforcement setting of the applied policy.</p>
     */
    inline DescribeInboundDmarcSettingsResult& WithEnforced(bool value) { SetEnforced(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeInboundDmarcSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeInboundDmarcSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeInboundDmarcSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_enforced;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
