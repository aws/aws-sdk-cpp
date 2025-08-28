/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/SseConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/omics/model/ETagAlgorithmFamily.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/S3AccessConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class CreateSequenceStoreRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API CreateSequenceStoreRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSequenceStore"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A name for the store.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateSequenceStoreRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the store.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateSequenceStoreRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Server-side encryption (SSE) settings for the store.</p>
     */
    inline const SseConfig& GetSseConfig() const { return m_sseConfig; }
    inline bool SseConfigHasBeenSet() const { return m_sseConfigHasBeenSet; }
    template<typename SseConfigT = SseConfig>
    void SetSseConfig(SseConfigT&& value) { m_sseConfigHasBeenSet = true; m_sseConfig = std::forward<SseConfigT>(value); }
    template<typename SseConfigT = SseConfig>
    CreateSequenceStoreRequest& WithSseConfig(SseConfigT&& value) { SetSseConfig(std::forward<SseConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for the store. You can configure up to 50 tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSequenceStoreRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSequenceStoreRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An idempotency token used to dedupe retry requests so that duplicate runs are
     * not created.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateSequenceStoreRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 location that is used to store files that have failed a direct upload.
     * You can add or change the <code>fallbackLocation</code> after creating a
     * sequence store. This is not required if you are uploading files from a different
     * S3 bucket.</p>
     */
    inline const Aws::String& GetFallbackLocation() const { return m_fallbackLocation; }
    inline bool FallbackLocationHasBeenSet() const { return m_fallbackLocationHasBeenSet; }
    template<typename FallbackLocationT = Aws::String>
    void SetFallbackLocation(FallbackLocationT&& value) { m_fallbackLocationHasBeenSet = true; m_fallbackLocation = std::forward<FallbackLocationT>(value); }
    template<typename FallbackLocationT = Aws::String>
    CreateSequenceStoreRequest& WithFallbackLocation(FallbackLocationT&& value) { SetFallbackLocation(std::forward<FallbackLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ETag algorithm family to use for ingested read sets. The default value is
     * MD5up. For more information on ETags, see <a
     * href="https://docs.aws.amazon.com/omics/latest/dev/etags-and-provenance.html">ETags
     * and data provenance</a> in the <i>Amazon Web Services HealthOmics User
     * Guide</i>.</p>
     */
    inline ETagAlgorithmFamily GetETagAlgorithmFamily() const { return m_eTagAlgorithmFamily; }
    inline bool ETagAlgorithmFamilyHasBeenSet() const { return m_eTagAlgorithmFamilyHasBeenSet; }
    inline void SetETagAlgorithmFamily(ETagAlgorithmFamily value) { m_eTagAlgorithmFamilyHasBeenSet = true; m_eTagAlgorithmFamily = value; }
    inline CreateSequenceStoreRequest& WithETagAlgorithmFamily(ETagAlgorithmFamily value) { SetETagAlgorithmFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags keys to propagate to the S3 objects associated with read sets in the
     * sequence store. These tags can be used as input to add metadata to your read
     * sets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPropagatedSetLevelTags() const { return m_propagatedSetLevelTags; }
    inline bool PropagatedSetLevelTagsHasBeenSet() const { return m_propagatedSetLevelTagsHasBeenSet; }
    template<typename PropagatedSetLevelTagsT = Aws::Vector<Aws::String>>
    void SetPropagatedSetLevelTags(PropagatedSetLevelTagsT&& value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags = std::forward<PropagatedSetLevelTagsT>(value); }
    template<typename PropagatedSetLevelTagsT = Aws::Vector<Aws::String>>
    CreateSequenceStoreRequest& WithPropagatedSetLevelTags(PropagatedSetLevelTagsT&& value) { SetPropagatedSetLevelTags(std::forward<PropagatedSetLevelTagsT>(value)); return *this;}
    template<typename PropagatedSetLevelTagsT = Aws::String>
    CreateSequenceStoreRequest& AddPropagatedSetLevelTags(PropagatedSetLevelTagsT&& value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags.emplace_back(std::forward<PropagatedSetLevelTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>S3 access configuration parameters. This specifies the parameters needed to
     * access logs stored in S3 buckets. The S3 bucket must be in the same region and
     * account as the sequence store. </p>
     */
    inline const S3AccessConfig& GetS3AccessConfig() const { return m_s3AccessConfig; }
    inline bool S3AccessConfigHasBeenSet() const { return m_s3AccessConfigHasBeenSet; }
    template<typename S3AccessConfigT = S3AccessConfig>
    void SetS3AccessConfig(S3AccessConfigT&& value) { m_s3AccessConfigHasBeenSet = true; m_s3AccessConfig = std::forward<S3AccessConfigT>(value); }
    template<typename S3AccessConfigT = S3AccessConfig>
    CreateSequenceStoreRequest& WithS3AccessConfig(S3AccessConfigT&& value) { SetS3AccessConfig(std::forward<S3AccessConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SseConfig m_sseConfig;
    bool m_sseConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_fallbackLocation;
    bool m_fallbackLocationHasBeenSet = false;

    ETagAlgorithmFamily m_eTagAlgorithmFamily{ETagAlgorithmFamily::NOT_SET};
    bool m_eTagAlgorithmFamilyHasBeenSet = false;

    Aws::Vector<Aws::String> m_propagatedSetLevelTags;
    bool m_propagatedSetLevelTagsHasBeenSet = false;

    S3AccessConfig m_s3AccessConfig;
    bool m_s3AccessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
