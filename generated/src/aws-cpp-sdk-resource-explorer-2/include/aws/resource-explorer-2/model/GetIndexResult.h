/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-explorer-2/model/IndexState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resource-explorer-2/model/IndexType.h>
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
namespace ResourceExplorer2
{
namespace Model
{
  class GetIndexResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API GetIndexResult();
    AWS_RESOURCEEXPLORER2_API GetIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API GetIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline GetIndexResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline GetIndexResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index.</p>
     */
    inline GetIndexResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time when the index was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time when the index was originally created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time when the index was originally created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time when the index was originally created.</p>
     */
    inline GetIndexResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when the index was originally created.</p>
     */
    inline GetIndexResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time when the index was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and time when the index was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The date and time when the index was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and time when the index was last updated.</p>
     */
    inline GetIndexResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time when the index was last updated.</p>
     */
    inline GetIndexResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>This response value is present only if this index is
     * <code>Type=AGGREGATOR</code>.</p> <p>A list of the Amazon Web Services Regions
     * that replicate their content to the index in this Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicatingFrom() const{ return m_replicatingFrom; }

    /**
     * <p>This response value is present only if this index is
     * <code>Type=AGGREGATOR</code>.</p> <p>A list of the Amazon Web Services Regions
     * that replicate their content to the index in this Region.</p>
     */
    inline void SetReplicatingFrom(const Aws::Vector<Aws::String>& value) { m_replicatingFrom = value; }

    /**
     * <p>This response value is present only if this index is
     * <code>Type=AGGREGATOR</code>.</p> <p>A list of the Amazon Web Services Regions
     * that replicate their content to the index in this Region.</p>
     */
    inline void SetReplicatingFrom(Aws::Vector<Aws::String>&& value) { m_replicatingFrom = std::move(value); }

    /**
     * <p>This response value is present only if this index is
     * <code>Type=AGGREGATOR</code>.</p> <p>A list of the Amazon Web Services Regions
     * that replicate their content to the index in this Region.</p>
     */
    inline GetIndexResult& WithReplicatingFrom(const Aws::Vector<Aws::String>& value) { SetReplicatingFrom(value); return *this;}

    /**
     * <p>This response value is present only if this index is
     * <code>Type=AGGREGATOR</code>.</p> <p>A list of the Amazon Web Services Regions
     * that replicate their content to the index in this Region.</p>
     */
    inline GetIndexResult& WithReplicatingFrom(Aws::Vector<Aws::String>&& value) { SetReplicatingFrom(std::move(value)); return *this;}

    /**
     * <p>This response value is present only if this index is
     * <code>Type=AGGREGATOR</code>.</p> <p>A list of the Amazon Web Services Regions
     * that replicate their content to the index in this Region.</p>
     */
    inline GetIndexResult& AddReplicatingFrom(const Aws::String& value) { m_replicatingFrom.push_back(value); return *this; }

    /**
     * <p>This response value is present only if this index is
     * <code>Type=AGGREGATOR</code>.</p> <p>A list of the Amazon Web Services Regions
     * that replicate their content to the index in this Region.</p>
     */
    inline GetIndexResult& AddReplicatingFrom(Aws::String&& value) { m_replicatingFrom.push_back(std::move(value)); return *this; }

    /**
     * <p>This response value is present only if this index is
     * <code>Type=AGGREGATOR</code>.</p> <p>A list of the Amazon Web Services Regions
     * that replicate their content to the index in this Region.</p>
     */
    inline GetIndexResult& AddReplicatingFrom(const char* value) { m_replicatingFrom.push_back(value); return *this; }


    /**
     * <p>This response value is present only if this index is
     * <code>Type=LOCAL</code>.</p> <p>The Amazon Web Services Region that contains the
     * aggregator index, if one exists. If an aggregator index does exist then the
     * Region in which you called this operation replicates its index information to
     * the Region specified in this response value. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicatingTo() const{ return m_replicatingTo; }

    /**
     * <p>This response value is present only if this index is
     * <code>Type=LOCAL</code>.</p> <p>The Amazon Web Services Region that contains the
     * aggregator index, if one exists. If an aggregator index does exist then the
     * Region in which you called this operation replicates its index information to
     * the Region specified in this response value. </p>
     */
    inline void SetReplicatingTo(const Aws::Vector<Aws::String>& value) { m_replicatingTo = value; }

    /**
     * <p>This response value is present only if this index is
     * <code>Type=LOCAL</code>.</p> <p>The Amazon Web Services Region that contains the
     * aggregator index, if one exists. If an aggregator index does exist then the
     * Region in which you called this operation replicates its index information to
     * the Region specified in this response value. </p>
     */
    inline void SetReplicatingTo(Aws::Vector<Aws::String>&& value) { m_replicatingTo = std::move(value); }

    /**
     * <p>This response value is present only if this index is
     * <code>Type=LOCAL</code>.</p> <p>The Amazon Web Services Region that contains the
     * aggregator index, if one exists. If an aggregator index does exist then the
     * Region in which you called this operation replicates its index information to
     * the Region specified in this response value. </p>
     */
    inline GetIndexResult& WithReplicatingTo(const Aws::Vector<Aws::String>& value) { SetReplicatingTo(value); return *this;}

    /**
     * <p>This response value is present only if this index is
     * <code>Type=LOCAL</code>.</p> <p>The Amazon Web Services Region that contains the
     * aggregator index, if one exists. If an aggregator index does exist then the
     * Region in which you called this operation replicates its index information to
     * the Region specified in this response value. </p>
     */
    inline GetIndexResult& WithReplicatingTo(Aws::Vector<Aws::String>&& value) { SetReplicatingTo(std::move(value)); return *this;}

    /**
     * <p>This response value is present only if this index is
     * <code>Type=LOCAL</code>.</p> <p>The Amazon Web Services Region that contains the
     * aggregator index, if one exists. If an aggregator index does exist then the
     * Region in which you called this operation replicates its index information to
     * the Region specified in this response value. </p>
     */
    inline GetIndexResult& AddReplicatingTo(const Aws::String& value) { m_replicatingTo.push_back(value); return *this; }

    /**
     * <p>This response value is present only if this index is
     * <code>Type=LOCAL</code>.</p> <p>The Amazon Web Services Region that contains the
     * aggregator index, if one exists. If an aggregator index does exist then the
     * Region in which you called this operation replicates its index information to
     * the Region specified in this response value. </p>
     */
    inline GetIndexResult& AddReplicatingTo(Aws::String&& value) { m_replicatingTo.push_back(std::move(value)); return *this; }

    /**
     * <p>This response value is present only if this index is
     * <code>Type=LOCAL</code>.</p> <p>The Amazon Web Services Region that contains the
     * aggregator index, if one exists. If an aggregator index does exist then the
     * Region in which you called this operation replicates its index information to
     * the Region specified in this response value. </p>
     */
    inline GetIndexResult& AddReplicatingTo(const char* value) { m_replicatingTo.push_back(value); return *this; }


    /**
     * <p>The current state of the index in this Amazon Web Services Region.</p>
     */
    inline const IndexState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the index in this Amazon Web Services Region.</p>
     */
    inline void SetState(const IndexState& value) { m_state = value; }

    /**
     * <p>The current state of the index in this Amazon Web Services Region.</p>
     */
    inline void SetState(IndexState&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the index in this Amazon Web Services Region.</p>
     */
    inline GetIndexResult& WithState(const IndexState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the index in this Amazon Web Services Region.</p>
     */
    inline GetIndexResult& WithState(IndexState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Tag key and value pairs that are attached to the index.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tag key and value pairs that are attached to the index.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tag key and value pairs that are attached to the index.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tag key and value pairs that are attached to the index.</p>
     */
    inline GetIndexResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tag key and value pairs that are attached to the index.</p>
     */
    inline GetIndexResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tag key and value pairs that are attached to the index.</p>
     */
    inline GetIndexResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the index.</p>
     */
    inline GetIndexResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the index.</p>
     */
    inline GetIndexResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the index.</p>
     */
    inline GetIndexResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the index.</p>
     */
    inline GetIndexResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the index.</p>
     */
    inline GetIndexResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the index.</p>
     */
    inline GetIndexResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of the index in this Region. For information about the aggregator
     * index and how it differs from a local index, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">Turning
     * on cross-Region search by creating an aggregator index</a>.</p>
     */
    inline const IndexType& GetType() const{ return m_type; }

    /**
     * <p>The type of the index in this Region. For information about the aggregator
     * index and how it differs from a local index, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">Turning
     * on cross-Region search by creating an aggregator index</a>.</p>
     */
    inline void SetType(const IndexType& value) { m_type = value; }

    /**
     * <p>The type of the index in this Region. For information about the aggregator
     * index and how it differs from a local index, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">Turning
     * on cross-Region search by creating an aggregator index</a>.</p>
     */
    inline void SetType(IndexType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of the index in this Region. For information about the aggregator
     * index and how it differs from a local index, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">Turning
     * on cross-Region search by creating an aggregator index</a>.</p>
     */
    inline GetIndexResult& WithType(const IndexType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the index in this Region. For information about the aggregator
     * index and how it differs from a local index, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">Turning
     * on cross-Region search by creating an aggregator index</a>.</p>
     */
    inline GetIndexResult& WithType(IndexType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Vector<Aws::String> m_replicatingFrom;

    Aws::Vector<Aws::String> m_replicatingTo;

    IndexState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;

    IndexType m_type;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
