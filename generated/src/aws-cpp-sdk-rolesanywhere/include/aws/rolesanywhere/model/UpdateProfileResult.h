/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/ProfileDetail.h>
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
namespace RolesAnywhere
{
namespace Model
{
  class UpdateProfileResult
  {
  public:
    AWS_ROLESANYWHERE_API UpdateProfileResult();
    AWS_ROLESANYWHERE_API UpdateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API UpdateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The state of the profile after a read or write operation.</p>
     */
    inline const ProfileDetail& GetProfile() const{ return m_profile; }

    /**
     * <p>The state of the profile after a read or write operation.</p>
     */
    inline void SetProfile(const ProfileDetail& value) { m_profile = value; }

    /**
     * <p>The state of the profile after a read or write operation.</p>
     */
    inline void SetProfile(ProfileDetail&& value) { m_profile = std::move(value); }

    /**
     * <p>The state of the profile after a read or write operation.</p>
     */
    inline UpdateProfileResult& WithProfile(const ProfileDetail& value) { SetProfile(value); return *this;}

    /**
     * <p>The state of the profile after a read or write operation.</p>
     */
    inline UpdateProfileResult& WithProfile(ProfileDetail&& value) { SetProfile(std::move(value)); return *this;}

  private:

    ProfileDetail m_profile;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
