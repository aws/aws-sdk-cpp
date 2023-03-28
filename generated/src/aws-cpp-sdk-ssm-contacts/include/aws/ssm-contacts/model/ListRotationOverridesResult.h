/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/RotationOverride.h>
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
namespace SSMContacts
{
namespace Model
{
  class ListRotationOverridesResult
  {
  public:
    AWS_SSMCONTACTS_API ListRotationOverridesResult();
    AWS_SSMCONTACTS_API ListRotationOverridesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListRotationOverridesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of rotation overrides in the specified time range.</p>
     */
    inline const Aws::Vector<RotationOverride>& GetRotationOverrides() const{ return m_rotationOverrides; }

    /**
     * <p>A list of rotation overrides in the specified time range.</p>
     */
    inline void SetRotationOverrides(const Aws::Vector<RotationOverride>& value) { m_rotationOverrides = value; }

    /**
     * <p>A list of rotation overrides in the specified time range.</p>
     */
    inline void SetRotationOverrides(Aws::Vector<RotationOverride>&& value) { m_rotationOverrides = std::move(value); }

    /**
     * <p>A list of rotation overrides in the specified time range.</p>
     */
    inline ListRotationOverridesResult& WithRotationOverrides(const Aws::Vector<RotationOverride>& value) { SetRotationOverrides(value); return *this;}

    /**
     * <p>A list of rotation overrides in the specified time range.</p>
     */
    inline ListRotationOverridesResult& WithRotationOverrides(Aws::Vector<RotationOverride>&& value) { SetRotationOverrides(std::move(value)); return *this;}

    /**
     * <p>A list of rotation overrides in the specified time range.</p>
     */
    inline ListRotationOverridesResult& AddRotationOverrides(const RotationOverride& value) { m_rotationOverrides.push_back(value); return *this; }

    /**
     * <p>A list of rotation overrides in the specified time range.</p>
     */
    inline ListRotationOverridesResult& AddRotationOverrides(RotationOverride&& value) { m_rotationOverrides.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListRotationOverridesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListRotationOverridesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListRotationOverridesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRotationOverridesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRotationOverridesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRotationOverridesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RotationOverride> m_rotationOverrides;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
