/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace signer
{
namespace Model
{
  class GetRevocationStatusResult
  {
  public:
    AWS_SIGNER_API GetRevocationStatusResult() = default;
    AWS_SIGNER_API GetRevocationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API GetRevocationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of revoked entities (including zero or more of the signing profile
     * ARN, signing job ARN, and certificate hashes) supplied as input to the API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRevokedEntities() const { return m_revokedEntities; }
    template<typename RevokedEntitiesT = Aws::Vector<Aws::String>>
    void SetRevokedEntities(RevokedEntitiesT&& value) { m_revokedEntitiesHasBeenSet = true; m_revokedEntities = std::forward<RevokedEntitiesT>(value); }
    template<typename RevokedEntitiesT = Aws::Vector<Aws::String>>
    GetRevocationStatusResult& WithRevokedEntities(RevokedEntitiesT&& value) { SetRevokedEntities(std::forward<RevokedEntitiesT>(value)); return *this;}
    template<typename RevokedEntitiesT = Aws::String>
    GetRevocationStatusResult& AddRevokedEntities(RevokedEntitiesT&& value) { m_revokedEntitiesHasBeenSet = true; m_revokedEntities.emplace_back(std::forward<RevokedEntitiesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRevocationStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_revokedEntities;
    bool m_revokedEntitiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
