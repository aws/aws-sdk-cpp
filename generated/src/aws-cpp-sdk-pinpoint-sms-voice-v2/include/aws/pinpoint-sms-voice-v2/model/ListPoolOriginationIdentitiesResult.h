﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/OriginationIdentityMetadata.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class ListPoolOriginationIdentitiesResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ListPoolOriginationIdentitiesResult();
    AWS_PINPOINTSMSVOICEV2_API ListPoolOriginationIdentitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API ListPoolOriginationIdentitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the pool.</p>
     */
    inline const Aws::String& GetPoolArn() const{ return m_poolArn; }
    inline void SetPoolArn(const Aws::String& value) { m_poolArn = value; }
    inline void SetPoolArn(Aws::String&& value) { m_poolArn = std::move(value); }
    inline void SetPoolArn(const char* value) { m_poolArn.assign(value); }
    inline ListPoolOriginationIdentitiesResult& WithPoolArn(const Aws::String& value) { SetPoolArn(value); return *this;}
    inline ListPoolOriginationIdentitiesResult& WithPoolArn(Aws::String&& value) { SetPoolArn(std::move(value)); return *this;}
    inline ListPoolOriginationIdentitiesResult& WithPoolArn(const char* value) { SetPoolArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique PoolId of the pool.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }
    inline void SetPoolId(const Aws::String& value) { m_poolId = value; }
    inline void SetPoolId(Aws::String&& value) { m_poolId = std::move(value); }
    inline void SetPoolId(const char* value) { m_poolId.assign(value); }
    inline ListPoolOriginationIdentitiesResult& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}
    inline ListPoolOriginationIdentitiesResult& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}
    inline ListPoolOriginationIdentitiesResult& WithPoolId(const char* value) { SetPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of any OriginationIdentityMetadata objects.</p>
     */
    inline const Aws::Vector<OriginationIdentityMetadata>& GetOriginationIdentities() const{ return m_originationIdentities; }
    inline void SetOriginationIdentities(const Aws::Vector<OriginationIdentityMetadata>& value) { m_originationIdentities = value; }
    inline void SetOriginationIdentities(Aws::Vector<OriginationIdentityMetadata>&& value) { m_originationIdentities = std::move(value); }
    inline ListPoolOriginationIdentitiesResult& WithOriginationIdentities(const Aws::Vector<OriginationIdentityMetadata>& value) { SetOriginationIdentities(value); return *this;}
    inline ListPoolOriginationIdentitiesResult& WithOriginationIdentities(Aws::Vector<OriginationIdentityMetadata>&& value) { SetOriginationIdentities(std::move(value)); return *this;}
    inline ListPoolOriginationIdentitiesResult& AddOriginationIdentities(const OriginationIdentityMetadata& value) { m_originationIdentities.push_back(value); return *this; }
    inline ListPoolOriginationIdentitiesResult& AddOriginationIdentities(OriginationIdentityMetadata&& value) { m_originationIdentities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPoolOriginationIdentitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPoolOriginationIdentitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPoolOriginationIdentitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPoolOriginationIdentitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPoolOriginationIdentitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPoolOriginationIdentitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_poolArn;

    Aws::String m_poolId;

    Aws::Vector<OriginationIdentityMetadata> m_originationIdentities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
