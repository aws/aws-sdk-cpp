/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
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
  class PutSigningProfileResult
  {
  public:
    AWS_SIGNER_API PutSigningProfileResult();
    AWS_SIGNER_API PutSigningProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API PutSigningProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the signing profile created.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline PutSigningProfileResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline PutSigningProfileResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline PutSigningProfileResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the signing profile being created.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersion = value; }
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersion = std::move(value); }
    inline void SetProfileVersion(const char* value) { m_profileVersion.assign(value); }
    inline PutSigningProfileResult& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}
    inline PutSigningProfileResult& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}
    inline PutSigningProfileResult& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline const Aws::String& GetProfileVersionArn() const{ return m_profileVersionArn; }
    inline void SetProfileVersionArn(const Aws::String& value) { m_profileVersionArn = value; }
    inline void SetProfileVersionArn(Aws::String&& value) { m_profileVersionArn = std::move(value); }
    inline void SetProfileVersionArn(const char* value) { m_profileVersionArn.assign(value); }
    inline PutSigningProfileResult& WithProfileVersionArn(const Aws::String& value) { SetProfileVersionArn(value); return *this;}
    inline PutSigningProfileResult& WithProfileVersionArn(Aws::String&& value) { SetProfileVersionArn(std::move(value)); return *this;}
    inline PutSigningProfileResult& WithProfileVersionArn(const char* value) { SetProfileVersionArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutSigningProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutSigningProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutSigningProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_profileVersion;

    Aws::String m_profileVersionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
