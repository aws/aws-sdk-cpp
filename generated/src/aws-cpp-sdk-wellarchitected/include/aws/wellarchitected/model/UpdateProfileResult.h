/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/Profile.h>
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
  class UpdateProfileResult
  {
  public:
    AWS_WELLARCHITECTED_API UpdateProfileResult();
    AWS_WELLARCHITECTED_API UpdateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API UpdateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The profile.</p>
     */
    inline const Profile& GetProfile() const{ return m_profile; }

    /**
     * <p>The profile.</p>
     */
    inline void SetProfile(const Profile& value) { m_profile = value; }

    /**
     * <p>The profile.</p>
     */
    inline void SetProfile(Profile&& value) { m_profile = std::move(value); }

    /**
     * <p>The profile.</p>
     */
    inline UpdateProfileResult& WithProfile(const Profile& value) { SetProfile(value); return *this;}

    /**
     * <p>The profile.</p>
     */
    inline UpdateProfileResult& WithProfile(Profile&& value) { SetProfile(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Profile m_profile;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
