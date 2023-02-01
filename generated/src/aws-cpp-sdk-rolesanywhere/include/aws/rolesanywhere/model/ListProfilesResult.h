/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListProfilesResult
  {
  public:
    AWS_ROLESANYWHERE_API ListProfilesResult();
    AWS_ROLESANYWHERE_API ListProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API ListProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline ListProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline ListProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline ListProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of profiles.</p>
     */
    inline const Aws::Vector<ProfileDetail>& GetProfiles() const{ return m_profiles; }

    /**
     * <p>A list of profiles.</p>
     */
    inline void SetProfiles(const Aws::Vector<ProfileDetail>& value) { m_profiles = value; }

    /**
     * <p>A list of profiles.</p>
     */
    inline void SetProfiles(Aws::Vector<ProfileDetail>&& value) { m_profiles = std::move(value); }

    /**
     * <p>A list of profiles.</p>
     */
    inline ListProfilesResult& WithProfiles(const Aws::Vector<ProfileDetail>& value) { SetProfiles(value); return *this;}

    /**
     * <p>A list of profiles.</p>
     */
    inline ListProfilesResult& WithProfiles(Aws::Vector<ProfileDetail>&& value) { SetProfiles(std::move(value)); return *this;}

    /**
     * <p>A list of profiles.</p>
     */
    inline ListProfilesResult& AddProfiles(const ProfileDetail& value) { m_profiles.push_back(value); return *this; }

    /**
     * <p>A list of profiles.</p>
     */
    inline ListProfilesResult& AddProfiles(ProfileDetail&& value) { m_profiles.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProfileDetail> m_profiles;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
