/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mobile/model/BundleDetails.h>
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
namespace Mobile
{
namespace Model
{
  /**
   * <p> Result structure contains a list of all available bundles with details.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ListBundlesResult">AWS
   * API Reference</a></p>
   */
  class ListBundlesResult
  {
  public:
    AWS_MOBILE_API ListBundlesResult();
    AWS_MOBILE_API ListBundlesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MOBILE_API ListBundlesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of bundles. </p>
     */
    inline const Aws::Vector<BundleDetails>& GetBundleList() const{ return m_bundleList; }

    /**
     * <p> A list of bundles. </p>
     */
    inline void SetBundleList(const Aws::Vector<BundleDetails>& value) { m_bundleList = value; }

    /**
     * <p> A list of bundles. </p>
     */
    inline void SetBundleList(Aws::Vector<BundleDetails>&& value) { m_bundleList = std::move(value); }

    /**
     * <p> A list of bundles. </p>
     */
    inline ListBundlesResult& WithBundleList(const Aws::Vector<BundleDetails>& value) { SetBundleList(value); return *this;}

    /**
     * <p> A list of bundles. </p>
     */
    inline ListBundlesResult& WithBundleList(Aws::Vector<BundleDetails>&& value) { SetBundleList(std::move(value)); return *this;}

    /**
     * <p> A list of bundles. </p>
     */
    inline ListBundlesResult& AddBundleList(const BundleDetails& value) { m_bundleList.push_back(value); return *this; }

    /**
     * <p> A list of bundles. </p>
     */
    inline ListBundlesResult& AddBundleList(BundleDetails&& value) { m_bundleList.push_back(std::move(value)); return *this; }


    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListBundlesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListBundlesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListBundlesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BundleDetails> m_bundleList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
