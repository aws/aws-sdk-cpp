/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/CollectionStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>Details about a deleted OpenSearch Serverless collection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/DeleteCollectionDetail">AWS
   * API Reference</a></p>
   */
  class DeleteCollectionDetail
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API DeleteCollectionDetail();
    AWS_OPENSEARCHSERVERLESS_API DeleteCollectionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API DeleteCollectionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline DeleteCollectionDetail& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline DeleteCollectionDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the collection.</p>
     */
    inline DeleteCollectionDetail& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the collection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the collection.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the collection.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the collection.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the collection.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the collection.</p>
     */
    inline DeleteCollectionDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the collection.</p>
     */
    inline DeleteCollectionDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the collection.</p>
     */
    inline DeleteCollectionDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status of the collection.</p>
     */
    inline const CollectionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the collection.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the collection.</p>
     */
    inline void SetStatus(const CollectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the collection.</p>
     */
    inline void SetStatus(CollectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the collection.</p>
     */
    inline DeleteCollectionDetail& WithStatus(const CollectionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the collection.</p>
     */
    inline DeleteCollectionDetail& WithStatus(CollectionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CollectionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
