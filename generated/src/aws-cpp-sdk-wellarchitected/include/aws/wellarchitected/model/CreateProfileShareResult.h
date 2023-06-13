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
  class CreateProfileShareResult
  {
  public:
    AWS_WELLARCHITECTED_API CreateProfileShareResult();
    AWS_WELLARCHITECTED_API CreateProfileShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API CreateProfileShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetShareId() const{ return m_shareId; }

    
    inline void SetShareId(const Aws::String& value) { m_shareId = value; }

    
    inline void SetShareId(Aws::String&& value) { m_shareId = std::move(value); }

    
    inline void SetShareId(const char* value) { m_shareId.assign(value); }

    
    inline CreateProfileShareResult& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}

    
    inline CreateProfileShareResult& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}

    
    inline CreateProfileShareResult& WithShareId(const char* value) { SetShareId(value); return *this;}


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
    inline CreateProfileShareResult& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The profile ARN.</p>
     */
    inline CreateProfileShareResult& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The profile ARN.</p>
     */
    inline CreateProfileShareResult& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateProfileShareResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateProfileShareResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateProfileShareResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_shareId;

    Aws::String m_profileArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
