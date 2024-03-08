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
    AWS_SIGNER_API GetRevocationStatusResult();
    AWS_SIGNER_API GetRevocationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API GetRevocationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of revoked entities (including zero or more of the signing profile
     * ARN, signing job ARN, and certificate hashes) supplied as input to the API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRevokedEntities() const{ return m_revokedEntities; }

    /**
     * <p>A list of revoked entities (including zero or more of the signing profile
     * ARN, signing job ARN, and certificate hashes) supplied as input to the API.</p>
     */
    inline void SetRevokedEntities(const Aws::Vector<Aws::String>& value) { m_revokedEntities = value; }

    /**
     * <p>A list of revoked entities (including zero or more of the signing profile
     * ARN, signing job ARN, and certificate hashes) supplied as input to the API.</p>
     */
    inline void SetRevokedEntities(Aws::Vector<Aws::String>&& value) { m_revokedEntities = std::move(value); }

    /**
     * <p>A list of revoked entities (including zero or more of the signing profile
     * ARN, signing job ARN, and certificate hashes) supplied as input to the API.</p>
     */
    inline GetRevocationStatusResult& WithRevokedEntities(const Aws::Vector<Aws::String>& value) { SetRevokedEntities(value); return *this;}

    /**
     * <p>A list of revoked entities (including zero or more of the signing profile
     * ARN, signing job ARN, and certificate hashes) supplied as input to the API.</p>
     */
    inline GetRevocationStatusResult& WithRevokedEntities(Aws::Vector<Aws::String>&& value) { SetRevokedEntities(std::move(value)); return *this;}

    /**
     * <p>A list of revoked entities (including zero or more of the signing profile
     * ARN, signing job ARN, and certificate hashes) supplied as input to the API.</p>
     */
    inline GetRevocationStatusResult& AddRevokedEntities(const Aws::String& value) { m_revokedEntities.push_back(value); return *this; }

    /**
     * <p>A list of revoked entities (including zero or more of the signing profile
     * ARN, signing job ARN, and certificate hashes) supplied as input to the API.</p>
     */
    inline GetRevocationStatusResult& AddRevokedEntities(Aws::String&& value) { m_revokedEntities.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of revoked entities (including zero or more of the signing profile
     * ARN, signing job ARN, and certificate hashes) supplied as input to the API.</p>
     */
    inline GetRevocationStatusResult& AddRevokedEntities(const char* value) { m_revokedEntities.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRevocationStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRevocationStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRevocationStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_revokedEntities;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
