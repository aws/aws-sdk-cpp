/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/Rotation.h>
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
  class ListRotationsResult
  {
  public:
    AWS_SSMCONTACTS_API ListRotationsResult();
    AWS_SSMCONTACTS_API ListRotationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListRotationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListRotationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListRotationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListRotationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about rotations that meet the filter criteria.</p>
     */
    inline const Aws::Vector<Rotation>& GetRotations() const{ return m_rotations; }

    /**
     * <p>Information about rotations that meet the filter criteria.</p>
     */
    inline void SetRotations(const Aws::Vector<Rotation>& value) { m_rotations = value; }

    /**
     * <p>Information about rotations that meet the filter criteria.</p>
     */
    inline void SetRotations(Aws::Vector<Rotation>&& value) { m_rotations = std::move(value); }

    /**
     * <p>Information about rotations that meet the filter criteria.</p>
     */
    inline ListRotationsResult& WithRotations(const Aws::Vector<Rotation>& value) { SetRotations(value); return *this;}

    /**
     * <p>Information about rotations that meet the filter criteria.</p>
     */
    inline ListRotationsResult& WithRotations(Aws::Vector<Rotation>&& value) { SetRotations(std::move(value)); return *this;}

    /**
     * <p>Information about rotations that meet the filter criteria.</p>
     */
    inline ListRotationsResult& AddRotations(const Rotation& value) { m_rotations.push_back(value); return *this; }

    /**
     * <p>Information about rotations that meet the filter criteria.</p>
     */
    inline ListRotationsResult& AddRotations(Rotation&& value) { m_rotations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRotationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRotationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRotationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<Rotation> m_rotations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
