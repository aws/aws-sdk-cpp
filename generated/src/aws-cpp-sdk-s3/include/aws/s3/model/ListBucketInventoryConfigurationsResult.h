/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/InventoryConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class ListBucketInventoryConfigurationsResult
  {
  public:
    AWS_S3_API ListBucketInventoryConfigurationsResult() = default;
    AWS_S3_API ListBucketInventoryConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API ListBucketInventoryConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>If sent in the request, the marker that is used as a starting point for this
     * inventory configuration list response.</p>
     */
    inline const Aws::String& GetContinuationToken() const { return m_continuationToken; }
    template<typename ContinuationTokenT = Aws::String>
    void SetContinuationToken(ContinuationTokenT&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = std::forward<ContinuationTokenT>(value); }
    template<typename ContinuationTokenT = Aws::String>
    ListBucketInventoryConfigurationsResult& WithContinuationToken(ContinuationTokenT&& value) { SetContinuationToken(std::forward<ContinuationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of inventory configurations for a bucket.</p>
     */
    inline const Aws::Vector<InventoryConfiguration>& GetInventoryConfigurationList() const { return m_inventoryConfigurationList; }
    template<typename InventoryConfigurationListT = Aws::Vector<InventoryConfiguration>>
    void SetInventoryConfigurationList(InventoryConfigurationListT&& value) { m_inventoryConfigurationListHasBeenSet = true; m_inventoryConfigurationList = std::forward<InventoryConfigurationListT>(value); }
    template<typename InventoryConfigurationListT = Aws::Vector<InventoryConfiguration>>
    ListBucketInventoryConfigurationsResult& WithInventoryConfigurationList(InventoryConfigurationListT&& value) { SetInventoryConfigurationList(std::forward<InventoryConfigurationListT>(value)); return *this;}
    template<typename InventoryConfigurationListT = InventoryConfiguration>
    ListBucketInventoryConfigurationsResult& AddInventoryConfigurationList(InventoryConfigurationListT&& value) { m_inventoryConfigurationListHasBeenSet = true; m_inventoryConfigurationList.emplace_back(std::forward<InventoryConfigurationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tells whether the returned list of inventory configurations is complete. A
     * value of true indicates that the list is not complete and the
     * NextContinuationToken is provided for a subsequent request.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListBucketInventoryConfigurationsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marker used to continue this inventory configuration listing. Use the
     * <code>NextContinuationToken</code> from this response to continue the listing in
     * a subsequent request. The continuation token is an opaque value that Amazon S3
     * understands.</p>
     */
    inline const Aws::String& GetNextContinuationToken() const { return m_nextContinuationToken; }
    template<typename NextContinuationTokenT = Aws::String>
    void SetNextContinuationToken(NextContinuationTokenT&& value) { m_nextContinuationTokenHasBeenSet = true; m_nextContinuationToken = std::forward<NextContinuationTokenT>(value); }
    template<typename NextContinuationTokenT = Aws::String>
    ListBucketInventoryConfigurationsResult& WithNextContinuationToken(NextContinuationTokenT&& value) { SetNextContinuationToken(std::forward<NextContinuationTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBucketInventoryConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet = false;

    Aws::Vector<InventoryConfiguration> m_inventoryConfigurationList;
    bool m_inventoryConfigurationListHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_nextContinuationToken;
    bool m_nextContinuationTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
