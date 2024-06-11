/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
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
  class GetChallengePasswordResult
  {
  public:
    AWS_PCACONNECTORSCEP_API GetChallengePasswordResult();
    AWS_PCACONNECTORSCEP_API GetChallengePasswordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORSCEP_API GetChallengePasswordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The SCEP challenge password.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline void SetPassword(const Aws::String& value) { m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_password.assign(value); }
    inline GetChallengePasswordResult& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline GetChallengePasswordResult& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline GetChallengePasswordResult& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetChallengePasswordResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetChallengePasswordResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetChallengePasswordResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_password;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
