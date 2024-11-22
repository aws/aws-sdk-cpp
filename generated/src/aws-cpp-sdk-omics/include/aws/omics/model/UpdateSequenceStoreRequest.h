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
    AWS_OMICS_API UpdateSequenceStoreRequest();

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
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateSequenceStoreRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateSequenceStoreRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateSequenceStoreRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the sequence store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateSequenceStoreRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateSequenceStoreRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateSequenceStoreRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the sequence store.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateSequenceStoreRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateSequenceStoreRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateSequenceStoreRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To ensure that requests don't run multiple times, specify a unique token for
     * each request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateSequenceStoreRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateSequenceStoreRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateSequenceStoreRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI of a bucket and folder to store Read Sets that fail to upload.</p>
     */
    inline const Aws::String& GetFallbackLocation() const{ return m_fallbackLocation; }
    inline bool FallbackLocationHasBeenSet() const { return m_fallbackLocationHasBeenSet; }
    inline void SetFallbackLocation(const Aws::String& value) { m_fallbackLocationHasBeenSet = true; m_fallbackLocation = value; }
    inline void SetFallbackLocation(Aws::String&& value) { m_fallbackLocationHasBeenSet = true; m_fallbackLocation = std::move(value); }
    inline void SetFallbackLocation(const char* value) { m_fallbackLocationHasBeenSet = true; m_fallbackLocation.assign(value); }
    inline UpdateSequenceStoreRequest& WithFallbackLocation(const Aws::String& value) { SetFallbackLocation(value); return *this;}
    inline UpdateSequenceStoreRequest& WithFallbackLocation(Aws::String&& value) { SetFallbackLocation(std::move(value)); return *this;}
    inline UpdateSequenceStoreRequest& WithFallbackLocation(const char* value) { SetFallbackLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags keys to propagate to the S3 objects associated with read sets in the
     * sequence store.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPropagatedSetLevelTags() const{ return m_propagatedSetLevelTags; }
    inline bool PropagatedSetLevelTagsHasBeenSet() const { return m_propagatedSetLevelTagsHasBeenSet; }
    inline void SetPropagatedSetLevelTags(const Aws::Vector<Aws::String>& value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags = value; }
    inline void SetPropagatedSetLevelTags(Aws::Vector<Aws::String>&& value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags = std::move(value); }
    inline UpdateSequenceStoreRequest& WithPropagatedSetLevelTags(const Aws::Vector<Aws::String>& value) { SetPropagatedSetLevelTags(value); return *this;}
    inline UpdateSequenceStoreRequest& WithPropagatedSetLevelTags(Aws::Vector<Aws::String>&& value) { SetPropagatedSetLevelTags(std::move(value)); return *this;}
    inline UpdateSequenceStoreRequest& AddPropagatedSetLevelTags(const Aws::String& value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags.push_back(value); return *this; }
    inline UpdateSequenceStoreRequest& AddPropagatedSetLevelTags(Aws::String&& value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags.push_back(std::move(value)); return *this; }
    inline UpdateSequenceStoreRequest& AddPropagatedSetLevelTags(const char* value) { m_propagatedSetLevelTagsHasBeenSet = true; m_propagatedSetLevelTags.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>S3 access configuration parameters.</p>
     */
    inline const S3AccessConfig& GetS3AccessConfig() const{ return m_s3AccessConfig; }
    inline bool S3AccessConfigHasBeenSet() const { return m_s3AccessConfigHasBeenSet; }
    inline void SetS3AccessConfig(const S3AccessConfig& value) { m_s3AccessConfigHasBeenSet = true; m_s3AccessConfig = value; }
    inline void SetS3AccessConfig(S3AccessConfig&& value) { m_s3AccessConfigHasBeenSet = true; m_s3AccessConfig = std::move(value); }
    inline UpdateSequenceStoreRequest& WithS3AccessConfig(const S3AccessConfig& value) { SetS3AccessConfig(value); return *this;}
    inline UpdateSequenceStoreRequest& WithS3AccessConfig(S3AccessConfig&& value) { SetS3AccessConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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
