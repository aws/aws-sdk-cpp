/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/Protection.h>
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
namespace Shield
{
namespace Model
{
  class ListProtectionsResult
  {
  public:
    AWS_SHIELD_API ListProtectionsResult();
    AWS_SHIELD_API ListProtectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API ListProtectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The array of enabled <a>Protection</a> objects.</p>
     */
    inline const Aws::Vector<Protection>& GetProtections() const{ return m_protections; }

    /**
     * <p>The array of enabled <a>Protection</a> objects.</p>
     */
    inline void SetProtections(const Aws::Vector<Protection>& value) { m_protections = value; }

    /**
     * <p>The array of enabled <a>Protection</a> objects.</p>
     */
    inline void SetProtections(Aws::Vector<Protection>&& value) { m_protections = std::move(value); }

    /**
     * <p>The array of enabled <a>Protection</a> objects.</p>
     */
    inline ListProtectionsResult& WithProtections(const Aws::Vector<Protection>& value) { SetProtections(value); return *this;}

    /**
     * <p>The array of enabled <a>Protection</a> objects.</p>
     */
    inline ListProtectionsResult& WithProtections(Aws::Vector<Protection>&& value) { SetProtections(std::move(value)); return *this;}

    /**
     * <p>The array of enabled <a>Protection</a> objects.</p>
     */
    inline ListProtectionsResult& AddProtections(const Protection& value) { m_protections.push_back(value); return *this; }

    /**
     * <p>The array of enabled <a>Protection</a> objects.</p>
     */
    inline ListProtectionsResult& AddProtections(Protection&& value) { m_protections.push_back(std::move(value)); return *this; }


    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p>
     */
    inline ListProtectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p>
     */
    inline ListProtectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p>
     */
    inline ListProtectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Protection> m_protections;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
