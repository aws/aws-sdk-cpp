/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReferenceItem.h>
#include <aws/omics/model/StoreStatus.h>
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
namespace Omics
{
namespace Model
{
  class CreateVariantStoreResult
  {
  public:
    AWS_OMICS_API CreateVariantStoreResult();
    AWS_OMICS_API CreateVariantStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API CreateVariantStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When the store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the store was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the store was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the store was created.</p>
     */
    inline CreateVariantStoreResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the store was created.</p>
     */
    inline CreateVariantStoreResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The store's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The store's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The store's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The store's ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The store's ID.</p>
     */
    inline CreateVariantStoreResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The store's ID.</p>
     */
    inline CreateVariantStoreResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The store's ID.</p>
     */
    inline CreateVariantStoreResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The store's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The store's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The store's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The store's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The store's name.</p>
     */
    inline CreateVariantStoreResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The store's name.</p>
     */
    inline CreateVariantStoreResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The store's name.</p>
     */
    inline CreateVariantStoreResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The store's genome reference.</p>
     */
    inline const ReferenceItem& GetReference() const{ return m_reference; }

    /**
     * <p>The store's genome reference.</p>
     */
    inline void SetReference(const ReferenceItem& value) { m_reference = value; }

    /**
     * <p>The store's genome reference.</p>
     */
    inline void SetReference(ReferenceItem&& value) { m_reference = std::move(value); }

    /**
     * <p>The store's genome reference.</p>
     */
    inline CreateVariantStoreResult& WithReference(const ReferenceItem& value) { SetReference(value); return *this;}

    /**
     * <p>The store's genome reference.</p>
     */
    inline CreateVariantStoreResult& WithReference(ReferenceItem&& value) { SetReference(std::move(value)); return *this;}


    /**
     * <p>The store's status.</p>
     */
    inline const StoreStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The store's status.</p>
     */
    inline void SetStatus(const StoreStatus& value) { m_status = value; }

    /**
     * <p>The store's status.</p>
     */
    inline void SetStatus(StoreStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The store's status.</p>
     */
    inline CreateVariantStoreResult& WithStatus(const StoreStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The store's status.</p>
     */
    inline CreateVariantStoreResult& WithStatus(StoreStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_id;

    Aws::String m_name;

    ReferenceItem m_reference;

    StoreStatus m_status;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
