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
    AWS_PCACONNECTORSCEP_API GetChallengeMetadataResult() = default;
    AWS_PCACONNECTORSCEP_API GetChallengeMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORSCEP_API GetChallengeMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The metadata for the challenge.</p>
     */
    inline const ChallengeMetadata& GetChallengeMetadata() const { return m_challengeMetadata; }
    template<typename ChallengeMetadataT = ChallengeMetadata>
    void SetChallengeMetadata(ChallengeMetadataT&& value) { m_challengeMetadataHasBeenSet = true; m_challengeMetadata = std::forward<ChallengeMetadataT>(value); }
    template<typename ChallengeMetadataT = ChallengeMetadata>
    GetChallengeMetadataResult& WithChallengeMetadata(ChallengeMetadataT&& value) { SetChallengeMetadata(std::forward<ChallengeMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetChallengeMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ChallengeMetadata m_challengeMetadata;
    bool m_challengeMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
