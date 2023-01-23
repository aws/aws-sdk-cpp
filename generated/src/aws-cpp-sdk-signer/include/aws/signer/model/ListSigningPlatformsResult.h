/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/SigningPlatform.h>
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
  class ListSigningPlatformsResult
  {
  public:
    AWS_SIGNER_API ListSigningPlatformsResult();
    AWS_SIGNER_API ListSigningPlatformsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API ListSigningPlatformsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all platforms that match the request parameters.</p>
     */
    inline const Aws::Vector<SigningPlatform>& GetPlatforms() const{ return m_platforms; }

    /**
     * <p>A list of all platforms that match the request parameters.</p>
     */
    inline void SetPlatforms(const Aws::Vector<SigningPlatform>& value) { m_platforms = value; }

    /**
     * <p>A list of all platforms that match the request parameters.</p>
     */
    inline void SetPlatforms(Aws::Vector<SigningPlatform>&& value) { m_platforms = std::move(value); }

    /**
     * <p>A list of all platforms that match the request parameters.</p>
     */
    inline ListSigningPlatformsResult& WithPlatforms(const Aws::Vector<SigningPlatform>& value) { SetPlatforms(value); return *this;}

    /**
     * <p>A list of all platforms that match the request parameters.</p>
     */
    inline ListSigningPlatformsResult& WithPlatforms(Aws::Vector<SigningPlatform>&& value) { SetPlatforms(std::move(value)); return *this;}

    /**
     * <p>A list of all platforms that match the request parameters.</p>
     */
    inline ListSigningPlatformsResult& AddPlatforms(const SigningPlatform& value) { m_platforms.push_back(value); return *this; }

    /**
     * <p>A list of all platforms that match the request parameters.</p>
     */
    inline ListSigningPlatformsResult& AddPlatforms(SigningPlatform&& value) { m_platforms.push_back(std::move(value)); return *this; }


    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline ListSigningPlatformsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline ListSigningPlatformsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Value for specifying the next set of paginated results to return.</p>
     */
    inline ListSigningPlatformsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SigningPlatform> m_platforms;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
