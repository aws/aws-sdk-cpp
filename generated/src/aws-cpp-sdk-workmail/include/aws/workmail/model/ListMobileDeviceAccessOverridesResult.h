﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MobileDeviceAccessOverride.h>
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
  class ListMobileDeviceAccessOverridesResult
  {
  public:
    AWS_WORKMAIL_API ListMobileDeviceAccessOverridesResult();
    AWS_WORKMAIL_API ListMobileDeviceAccessOverridesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListMobileDeviceAccessOverridesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of mobile device access overrides that exist for the specified
     * WorkMail organization and user.</p>
     */
    inline const Aws::Vector<MobileDeviceAccessOverride>& GetOverrides() const{ return m_overrides; }
    inline void SetOverrides(const Aws::Vector<MobileDeviceAccessOverride>& value) { m_overrides = value; }
    inline void SetOverrides(Aws::Vector<MobileDeviceAccessOverride>&& value) { m_overrides = std::move(value); }
    inline ListMobileDeviceAccessOverridesResult& WithOverrides(const Aws::Vector<MobileDeviceAccessOverride>& value) { SetOverrides(value); return *this;}
    inline ListMobileDeviceAccessOverridesResult& WithOverrides(Aws::Vector<MobileDeviceAccessOverride>&& value) { SetOverrides(std::move(value)); return *this;}
    inline ListMobileDeviceAccessOverridesResult& AddOverrides(const MobileDeviceAccessOverride& value) { m_overrides.push_back(value); return *this; }
    inline ListMobileDeviceAccessOverridesResult& AddOverrides(MobileDeviceAccessOverride&& value) { m_overrides.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. The value is “null”
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMobileDeviceAccessOverridesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMobileDeviceAccessOverridesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMobileDeviceAccessOverridesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMobileDeviceAccessOverridesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMobileDeviceAccessOverridesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMobileDeviceAccessOverridesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MobileDeviceAccessOverride> m_overrides;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
