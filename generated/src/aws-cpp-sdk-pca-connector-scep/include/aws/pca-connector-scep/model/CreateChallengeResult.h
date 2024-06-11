/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/pca-connector-scep/model/Challenge.h>
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
namespace PcaConnectorScep
{
namespace Model
{
  class CreateChallengeResult
  {
  public:
    AWS_PCACONNECTORSCEP_API CreateChallengeResult();
    AWS_PCACONNECTORSCEP_API CreateChallengeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORSCEP_API CreateChallengeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the challenge details for the specified connector.</p>
     */
    inline const Challenge& GetChallenge() const{ return m_challenge; }
    inline void SetChallenge(const Challenge& value) { m_challenge = value; }
    inline void SetChallenge(Challenge&& value) { m_challenge = std::move(value); }
    inline CreateChallengeResult& WithChallenge(const Challenge& value) { SetChallenge(value); return *this;}
    inline CreateChallengeResult& WithChallenge(Challenge&& value) { SetChallenge(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateChallengeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateChallengeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateChallengeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Challenge m_challenge;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
