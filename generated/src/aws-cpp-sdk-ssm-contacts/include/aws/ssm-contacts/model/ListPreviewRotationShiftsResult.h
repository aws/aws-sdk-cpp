/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/RotationShift.h>
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
  class ListPreviewRotationShiftsResult
  {
  public:
    AWS_SSMCONTACTS_API ListPreviewRotationShiftsResult();
    AWS_SSMCONTACTS_API ListPreviewRotationShiftsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListPreviewRotationShiftsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about a rotation shift, including times, types, and contacts.</p>
     */
    inline const Aws::Vector<RotationShift>& GetRotationShifts() const{ return m_rotationShifts; }

    /**
     * <p>Details about a rotation shift, including times, types, and contacts.</p>
     */
    inline void SetRotationShifts(const Aws::Vector<RotationShift>& value) { m_rotationShifts = value; }

    /**
     * <p>Details about a rotation shift, including times, types, and contacts.</p>
     */
    inline void SetRotationShifts(Aws::Vector<RotationShift>&& value) { m_rotationShifts = std::move(value); }

    /**
     * <p>Details about a rotation shift, including times, types, and contacts.</p>
     */
    inline ListPreviewRotationShiftsResult& WithRotationShifts(const Aws::Vector<RotationShift>& value) { SetRotationShifts(value); return *this;}

    /**
     * <p>Details about a rotation shift, including times, types, and contacts.</p>
     */
    inline ListPreviewRotationShiftsResult& WithRotationShifts(Aws::Vector<RotationShift>&& value) { SetRotationShifts(std::move(value)); return *this;}

    /**
     * <p>Details about a rotation shift, including times, types, and contacts.</p>
     */
    inline ListPreviewRotationShiftsResult& AddRotationShifts(const RotationShift& value) { m_rotationShifts.push_back(value); return *this; }

    /**
     * <p>Details about a rotation shift, including times, types, and contacts.</p>
     */
    inline ListPreviewRotationShiftsResult& AddRotationShifts(RotationShift&& value) { m_rotationShifts.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. This token is used to get the
     * next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. This token is used to get the
     * next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. This token is used to get the
     * next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. This token is used to get the
     * next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. This token is used to get the
     * next set of results.</p>
     */
    inline ListPreviewRotationShiftsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. This token is used to get the
     * next set of results.</p>
     */
    inline ListPreviewRotationShiftsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. This token is used to get the
     * next set of results.</p>
     */
    inline ListPreviewRotationShiftsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPreviewRotationShiftsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPreviewRotationShiftsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPreviewRotationShiftsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RotationShift> m_rotationShifts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
