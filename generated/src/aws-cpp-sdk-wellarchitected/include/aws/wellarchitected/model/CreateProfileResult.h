/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
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
namespace WellArchitected
{
namespace Model
{
  class CreateProfileResult
  {
  public:
    AWS_WELLARCHITECTED_API CreateProfileResult();
    AWS_WELLARCHITECTED_API CreateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API CreateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The profile ARN.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArn = value; }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArn = std::move(value); }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArn.assign(value); }

    /**
     * <p>The profile ARN.</p>
     */
    inline CreateProfileResult& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The profile ARN.</p>
     */
    inline CreateProfileResult& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The profile ARN.</p>
     */
    inline CreateProfileResult& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


    /**
     * <p>Version of the profile.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }

    /**
     * <p>Version of the profile.</p>
     */
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersion = value; }

    /**
     * <p>Version of the profile.</p>
     */
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersion = std::move(value); }

    /**
     * <p>Version of the profile.</p>
     */
    inline void SetProfileVersion(const char* value) { m_profileVersion.assign(value); }

    /**
     * <p>Version of the profile.</p>
     */
    inline CreateProfileResult& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}

    /**
     * <p>Version of the profile.</p>
     */
    inline CreateProfileResult& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}

    /**
     * <p>Version of the profile.</p>
     */
    inline CreateProfileResult& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_profileArn;

    Aws::String m_profileVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
