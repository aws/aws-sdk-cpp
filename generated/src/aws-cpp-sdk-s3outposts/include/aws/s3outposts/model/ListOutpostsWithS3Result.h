/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3outposts/model/Outpost.h>
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
namespace S3Outposts
{
namespace Model
{
  class ListOutpostsWithS3Result
  {
  public:
    AWS_S3OUTPOSTS_API ListOutpostsWithS3Result();
    AWS_S3OUTPOSTS_API ListOutpostsWithS3Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3OUTPOSTS_API ListOutpostsWithS3Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the list of Outposts that have the following characteristics:</p>
     * <ul> <li> <p>outposts that have S3 provisioned</p> </li> <li> <p>outposts that
     * are <code>Active</code> (not pending any provisioning nor decommissioned)</p>
     * </li> <li> <p>outposts to which the the calling Amazon Web Services account has
     * access</p> </li> </ul>
     */
    inline const Aws::Vector<Outpost>& GetOutposts() const{ return m_outposts; }

    /**
     * <p>Returns the list of Outposts that have the following characteristics:</p>
     * <ul> <li> <p>outposts that have S3 provisioned</p> </li> <li> <p>outposts that
     * are <code>Active</code> (not pending any provisioning nor decommissioned)</p>
     * </li> <li> <p>outposts to which the the calling Amazon Web Services account has
     * access</p> </li> </ul>
     */
    inline void SetOutposts(const Aws::Vector<Outpost>& value) { m_outposts = value; }

    /**
     * <p>Returns the list of Outposts that have the following characteristics:</p>
     * <ul> <li> <p>outposts that have S3 provisioned</p> </li> <li> <p>outposts that
     * are <code>Active</code> (not pending any provisioning nor decommissioned)</p>
     * </li> <li> <p>outposts to which the the calling Amazon Web Services account has
     * access</p> </li> </ul>
     */
    inline void SetOutposts(Aws::Vector<Outpost>&& value) { m_outposts = std::move(value); }

    /**
     * <p>Returns the list of Outposts that have the following characteristics:</p>
     * <ul> <li> <p>outposts that have S3 provisioned</p> </li> <li> <p>outposts that
     * are <code>Active</code> (not pending any provisioning nor decommissioned)</p>
     * </li> <li> <p>outposts to which the the calling Amazon Web Services account has
     * access</p> </li> </ul>
     */
    inline ListOutpostsWithS3Result& WithOutposts(const Aws::Vector<Outpost>& value) { SetOutposts(value); return *this;}

    /**
     * <p>Returns the list of Outposts that have the following characteristics:</p>
     * <ul> <li> <p>outposts that have S3 provisioned</p> </li> <li> <p>outposts that
     * are <code>Active</code> (not pending any provisioning nor decommissioned)</p>
     * </li> <li> <p>outposts to which the the calling Amazon Web Services account has
     * access</p> </li> </ul>
     */
    inline ListOutpostsWithS3Result& WithOutposts(Aws::Vector<Outpost>&& value) { SetOutposts(std::move(value)); return *this;}

    /**
     * <p>Returns the list of Outposts that have the following characteristics:</p>
     * <ul> <li> <p>outposts that have S3 provisioned</p> </li> <li> <p>outposts that
     * are <code>Active</code> (not pending any provisioning nor decommissioned)</p>
     * </li> <li> <p>outposts to which the the calling Amazon Web Services account has
     * access</p> </li> </ul>
     */
    inline ListOutpostsWithS3Result& AddOutposts(const Outpost& value) { m_outposts.push_back(value); return *this; }

    /**
     * <p>Returns the list of Outposts that have the following characteristics:</p>
     * <ul> <li> <p>outposts that have S3 provisioned</p> </li> <li> <p>outposts that
     * are <code>Active</code> (not pending any provisioning nor decommissioned)</p>
     * </li> <li> <p>outposts to which the the calling Amazon Web Services account has
     * access</p> </li> </ul>
     */
    inline ListOutpostsWithS3Result& AddOutposts(Outpost&& value) { m_outposts.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns a token that you can use to call <code>ListOutpostsWithS3</code>
     * again and receive additional results, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Returns a token that you can use to call <code>ListOutpostsWithS3</code>
     * again and receive additional results, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Returns a token that you can use to call <code>ListOutpostsWithS3</code>
     * again and receive additional results, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Returns a token that you can use to call <code>ListOutpostsWithS3</code>
     * again and receive additional results, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Returns a token that you can use to call <code>ListOutpostsWithS3</code>
     * again and receive additional results, if there are any.</p>
     */
    inline ListOutpostsWithS3Result& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Returns a token that you can use to call <code>ListOutpostsWithS3</code>
     * again and receive additional results, if there are any.</p>
     */
    inline ListOutpostsWithS3Result& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Returns a token that you can use to call <code>ListOutpostsWithS3</code>
     * again and receive additional results, if there are any.</p>
     */
    inline ListOutpostsWithS3Result& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListOutpostsWithS3Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListOutpostsWithS3Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListOutpostsWithS3Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Outpost> m_outposts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Outposts
} // namespace Aws
