/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateSequenceStoreRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API UpdateSequenceStoreRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSequenceStore"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the sequence store.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateSequenceStoreRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the sequence store.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateSequenceStoreRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the sequence store.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateSequenceStoreRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To ensure that requests don't run multiple times, specify a unique token for
     * each request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateSequenceStoreRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI of a bucket and folder to store Read Sets that fail to upload.</p>
     */
    inline const Aws::String& GetFallbackLocation() const { return m_fallbackLocation; }
    inline bool FallbackLocationHasBeenSet() const { return m_fallbackLocationHasBeenSet; }
    template<typename FallbackLocationT = Aws::String>
    void SetFallbackLocation(FallbackLocationT&& value) { m_fallbackLocationHasBeenSet = true; m_fallbackLocation = std::forward<FallbackLocationT>(value); }
    template<typename FallbackLocationT = Aws::String>
    UpdateSequenceStoreRequest& WithFallbackLocation(FallbackLocationT&& value) { SetFallbackLocation(std::forward<FallbackLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags keys to propagate to the S3 objects associated with read sets in the
     * sequence store.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPropagatedSetLevelTags() const { return m_propagatedSetLevelTags; }
    inline bool PropagatedSetLevelTagsHasBeenSet() const { return m_propagatedSetLevelTagsHasBeenSet; }
    template<typename PropagatedSetLevelTagsT = Aws::Vector<Aws::String>>
    void SetPropagatedSetLevelTags(PropagatedSetLevelTagsT&& value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags = std::forward<PropagatedSetLevelTagsT>(value); }
    template<typename PropagatedSetLevelTagsT = Aws::Vector<Aws::String>>
    UpdateSequenceStoreRequest& WithPropagatedSetLevelTags(PropagatedSetLevelTagsT&& value) { SetPropagatedSetLevelTags(std::forward<PropagatedSetLevelTagsT>(value)); return *this;}
    template<typename PropagatedSetLevelTagsT = Aws::String>
    UpdateSequenceStoreRequest& AddPropagatedSetLevelTags(PropagatedSetLevelTagsT&& value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags.emplace_back(std::forward<PropagatedSetLevelTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>S3 access configuration parameters.</p>
     */
    inline const S3AccessConfig& GetS3AccessConfig() const { return m_s3AccessConfig; }
    inline bool S3AccessConfigHasBeenSet() const { return m_s3AccessConfigHasBeenSet; }
    template<typename S3AccessConfigT = S3AccessConfig>
    void SetS3AccessConfig(S3AccessConfigT&& value) { m_s3AccessConfigHasBeenSet = true; m_s3AccessConfig = std::forward<S3AccessConfigT>(value); }
    template<typename S3AccessConfigT = S3AccessConfig>
    UpdateSequenceStoreRequest& WithS3AccessConfig(S3AccessConfigT&& value) { SetS3AccessConfig(std::forward<S3AccessConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_fallbackLocation;
    bool m_fallbackLocationHasBeenSet = false;

    Aws::Vector<Aws::String> m_propagatedSetLevelTags;
    bool m_propagatedSetLevelTagsHasBeenSet = false;

    S3AccessConfig m_s3AccessConfig;
    bool m_s3AccessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
