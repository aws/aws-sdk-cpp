/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/pca-connector-scep/model/ChallengeMetadata.h>
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
  class GetChallengeMetadataResult
  {
  public:
    AWS_PCACONNECTORSCEP_API GetChallengeMetadataResult();
    AWS_PCACONNECTORSCEP_API GetChallengeMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORSCEP_API GetChallengeMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The metadata for the challenge.</p>
     */
    inline const ChallengeMetadata& GetChallengeMetadata() const{ return m_challengeMetadata; }
    inline void SetChallengeMetadata(const ChallengeMetadata& value) { m_challengeMetadata = value; }
    inline void SetChallengeMetadata(ChallengeMetadata&& value) { m_challengeMetadata = std::move(value); }
    inline GetChallengeMetadataResult& WithChallengeMetadata(const ChallengeMetadata& value) { SetChallengeMetadata(value); return *this;}
    inline GetChallengeMetadataResult& WithChallengeMetadata(ChallengeMetadata&& value) { SetChallengeMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetChallengeMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetChallengeMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetChallengeMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ChallengeMetadata m_challengeMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
