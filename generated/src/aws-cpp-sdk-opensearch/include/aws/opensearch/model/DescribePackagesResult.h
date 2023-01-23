/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/PackageDetails.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for the response returned by the <code>DescribePackages</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribePackagesResponse">AWS
   * API Reference</a></p>
   */
  class DescribePackagesResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribePackagesResult();
    AWS_OPENSEARCHSERVICE_API DescribePackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribePackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Basic information about a package.</p>
     */
    inline const Aws::Vector<PackageDetails>& GetPackageDetailsList() const{ return m_packageDetailsList; }

    /**
     * <p>Basic information about a package.</p>
     */
    inline void SetPackageDetailsList(const Aws::Vector<PackageDetails>& value) { m_packageDetailsList = value; }

    /**
     * <p>Basic information about a package.</p>
     */
    inline void SetPackageDetailsList(Aws::Vector<PackageDetails>&& value) { m_packageDetailsList = std::move(value); }

    /**
     * <p>Basic information about a package.</p>
     */
    inline DescribePackagesResult& WithPackageDetailsList(const Aws::Vector<PackageDetails>& value) { SetPackageDetailsList(value); return *this;}

    /**
     * <p>Basic information about a package.</p>
     */
    inline DescribePackagesResult& WithPackageDetailsList(Aws::Vector<PackageDetails>&& value) { SetPackageDetailsList(std::move(value)); return *this;}

    /**
     * <p>Basic information about a package.</p>
     */
    inline DescribePackagesResult& AddPackageDetailsList(const PackageDetails& value) { m_packageDetailsList.push_back(value); return *this; }

    /**
     * <p>Basic information about a package.</p>
     */
    inline DescribePackagesResult& AddPackageDetailsList(PackageDetails&& value) { m_packageDetailsList.push_back(std::move(value)); return *this; }


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline DescribePackagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline DescribePackagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline DescribePackagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PackageDetails> m_packageDetailsList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
