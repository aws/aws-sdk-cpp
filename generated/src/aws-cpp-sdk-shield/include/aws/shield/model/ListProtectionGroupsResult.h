﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/ProtectionGroup.h>
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
namespace Shield
{
namespace Model
{
  class ListProtectionGroupsResult
  {
  public:
    AWS_SHIELD_API ListProtectionGroupsResult();
    AWS_SHIELD_API ListProtectionGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API ListProtectionGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<ProtectionGroup>& GetProtectionGroups() const{ return m_protectionGroups; }
    inline void SetProtectionGroups(const Aws::Vector<ProtectionGroup>& value) { m_protectionGroups = value; }
    inline void SetProtectionGroups(Aws::Vector<ProtectionGroup>&& value) { m_protectionGroups = std::move(value); }
    inline ListProtectionGroupsResult& WithProtectionGroups(const Aws::Vector<ProtectionGroup>& value) { SetProtectionGroups(value); return *this;}
    inline ListProtectionGroupsResult& WithProtectionGroups(Aws::Vector<ProtectionGroup>&& value) { SetProtectionGroups(std::move(value)); return *this;}
    inline ListProtectionGroupsResult& AddProtectionGroups(const ProtectionGroup& value) { m_protectionGroups.push_back(value); return *this; }
    inline ListProtectionGroupsResult& AddProtectionGroups(ProtectionGroup&& value) { m_protectionGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListProtectionGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListProtectionGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListProtectionGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListProtectionGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListProtectionGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListProtectionGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProtectionGroup> m_protectionGroups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
