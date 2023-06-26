/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

  /**
   */
  class BatchGetCollectionRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API BatchGetCollectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetCollection"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of collection IDs. You can't provide names and IDs in the same
     * request. The ID is part of the collection endpoint. You can also retrieve it
     * using the <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/ServerlessAPIReference/API_ListCollections.html">ListCollections</a>
     * API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>A list of collection IDs. You can't provide names and IDs in the same
     * request. The ID is part of the collection endpoint. You can also retrieve it
     * using the <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/ServerlessAPIReference/API_ListCollections.html">ListCollections</a>
     * API.</p>
     */
    inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }

    /**
     * <p>A list of collection IDs. You can't provide names and IDs in the same
     * request. The ID is part of the collection endpoint. You can also retrieve it
     * using the <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/ServerlessAPIReference/API_ListCollections.html">ListCollections</a>
     * API.</p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_idsHasBeenSet = true; m_ids = value; }

    /**
     * <p>A list of collection IDs. You can't provide names and IDs in the same
     * request. The ID is part of the collection endpoint. You can also retrieve it
     * using the <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/ServerlessAPIReference/API_ListCollections.html">ListCollections</a>
     * API.</p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_idsHasBeenSet = true; m_ids = std::move(value); }

    /**
     * <p>A list of collection IDs. You can't provide names and IDs in the same
     * request. The ID is part of the collection endpoint. You can also retrieve it
     * using the <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/ServerlessAPIReference/API_ListCollections.html">ListCollections</a>
     * API.</p>
     */
    inline BatchGetCollectionRequest& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>A list of collection IDs. You can't provide names and IDs in the same
     * request. The ID is part of the collection endpoint. You can also retrieve it
     * using the <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/ServerlessAPIReference/API_ListCollections.html">ListCollections</a>
     * API.</p>
     */
    inline BatchGetCollectionRequest& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}

    /**
     * <p>A list of collection IDs. You can't provide names and IDs in the same
     * request. The ID is part of the collection endpoint. You can also retrieve it
     * using the <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/ServerlessAPIReference/API_ListCollections.html">ListCollections</a>
     * API.</p>
     */
    inline BatchGetCollectionRequest& AddIds(const Aws::String& value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

    /**
     * <p>A list of collection IDs. You can't provide names and IDs in the same
     * request. The ID is part of the collection endpoint. You can also retrieve it
     * using the <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/ServerlessAPIReference/API_ListCollections.html">ListCollections</a>
     * API.</p>
     */
    inline BatchGetCollectionRequest& AddIds(Aws::String&& value) { m_idsHasBeenSet = true; m_ids.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of collection IDs. You can't provide names and IDs in the same
     * request. The ID is part of the collection endpoint. You can also retrieve it
     * using the <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/ServerlessAPIReference/API_ListCollections.html">ListCollections</a>
     * API.</p>
     */
    inline BatchGetCollectionRequest& AddIds(const char* value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }


    /**
     * <p>A list of collection names. You can't provide names and IDs in the same
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>A list of collection names. You can't provide names and IDs in the same
     * request.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>A list of collection names. You can't provide names and IDs in the same
     * request.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>A list of collection names. You can't provide names and IDs in the same
     * request.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>A list of collection names. You can't provide names and IDs in the same
     * request.</p>
     */
    inline BatchGetCollectionRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>A list of collection names. You can't provide names and IDs in the same
     * request.</p>
     */
    inline BatchGetCollectionRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>A list of collection names. You can't provide names and IDs in the same
     * request.</p>
     */
    inline BatchGetCollectionRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>A list of collection names. You can't provide names and IDs in the same
     * request.</p>
     */
    inline BatchGetCollectionRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of collection names. You can't provide names and IDs in the same
     * request.</p>
     */
    inline BatchGetCollectionRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
