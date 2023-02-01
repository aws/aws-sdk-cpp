/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/SseConfig.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>Details about a reference store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ReferenceStoreDetail">AWS
   * API Reference</a></p>
   */
  class ReferenceStoreDetail
  {
  public:
    AWS_OMICS_API ReferenceStoreDetail();
    AWS_OMICS_API ReferenceStoreDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReferenceStoreDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The store's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The store's ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The store's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The store's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The store's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The store's ARN.</p>
     */
    inline ReferenceStoreDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The store's ARN.</p>
     */
    inline ReferenceStoreDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The store's ARN.</p>
     */
    inline ReferenceStoreDetail& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>When the store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the store was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the store was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the store was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the store was created.</p>
     */
    inline ReferenceStoreDetail& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the store was created.</p>
     */
    inline ReferenceStoreDetail& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The store's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The store's description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The store's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The store's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The store's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The store's description.</p>
     */
    inline ReferenceStoreDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The store's description.</p>
     */
    inline ReferenceStoreDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The store's description.</p>
     */
    inline ReferenceStoreDetail& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The store's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The store's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The store's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The store's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The store's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The store's ID.</p>
     */
    inline ReferenceStoreDetail& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The store's ID.</p>
     */
    inline ReferenceStoreDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The store's ID.</p>
     */
    inline ReferenceStoreDetail& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The store's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The store's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The store's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The store's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The store's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The store's name.</p>
     */
    inline ReferenceStoreDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The store's name.</p>
     */
    inline ReferenceStoreDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The store's name.</p>
     */
    inline ReferenceStoreDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The store's server-side encryption (SSE) settings.</p>
     */
    inline const SseConfig& GetSseConfig() const{ return m_sseConfig; }

    /**
     * <p>The store's server-side encryption (SSE) settings.</p>
     */
    inline bool SseConfigHasBeenSet() const { return m_sseConfigHasBeenSet; }

    /**
     * <p>The store's server-side encryption (SSE) settings.</p>
     */
    inline void SetSseConfig(const SseConfig& value) { m_sseConfigHasBeenSet = true; m_sseConfig = value; }

    /**
     * <p>The store's server-side encryption (SSE) settings.</p>
     */
    inline void SetSseConfig(SseConfig&& value) { m_sseConfigHasBeenSet = true; m_sseConfig = std::move(value); }

    /**
     * <p>The store's server-side encryption (SSE) settings.</p>
     */
    inline ReferenceStoreDetail& WithSseConfig(const SseConfig& value) { SetSseConfig(value); return *this;}

    /**
     * <p>The store's server-side encryption (SSE) settings.</p>
     */
    inline ReferenceStoreDetail& WithSseConfig(SseConfig&& value) { SetSseConfig(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SseConfig m_sseConfig;
    bool m_sseConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
