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


    /**
     * <p>The Amazon Resource Name (ARN) of the signing profile created.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the signing profile created.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the signing profile created.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the signing profile created.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the signing profile created.</p>
     */
    inline PutSigningProfileResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the signing profile created.</p>
     */
    inline PutSigningProfileResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the signing profile created.</p>
     */
    inline PutSigningProfileResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The version of the signing profile being created.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }

    /**
     * <p>The version of the signing profile being created.</p>
     */
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersion = value; }

    /**
     * <p>The version of the signing profile being created.</p>
     */
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersion = std::move(value); }

    /**
     * <p>The version of the signing profile being created.</p>
     */
    inline void SetProfileVersion(const char* value) { m_profileVersion.assign(value); }

    /**
     * <p>The version of the signing profile being created.</p>
     */
    inline PutSigningProfileResult& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}

    /**
     * <p>The version of the signing profile being created.</p>
     */
    inline PutSigningProfileResult& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the signing profile being created.</p>
     */
    inline PutSigningProfileResult& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}


    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline const Aws::String& GetProfileVersionArn() const{ return m_profileVersionArn; }

    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline void SetProfileVersionArn(const Aws::String& value) { m_profileVersionArn = value; }

    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline void SetProfileVersionArn(Aws::String&& value) { m_profileVersionArn = std::move(value); }

    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline void SetProfileVersionArn(const char* value) { m_profileVersionArn.assign(value); }

    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline PutSigningProfileResult& WithProfileVersionArn(const Aws::String& value) { SetProfileVersionArn(value); return *this;}

    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline PutSigningProfileResult& WithProfileVersionArn(Aws::String&& value) { SetProfileVersionArn(std::move(value)); return *this;}

    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline PutSigningProfileResult& WithProfileVersionArn(const char* value) { SetProfileVersionArn(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_profileVersion;

    Aws::String m_profileVersionArn;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
