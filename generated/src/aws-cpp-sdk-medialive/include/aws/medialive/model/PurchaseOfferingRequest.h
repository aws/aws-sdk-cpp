/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/RenewalSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for PurchaseOfferingRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PurchaseOfferingRequest">AWS
   * API Reference</a></p>
   */
  class PurchaseOfferingRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API PurchaseOfferingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseOffering"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Number of resources
     */
    inline int GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline PurchaseOfferingRequest& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * Name for the new reservation
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PurchaseOfferingRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PurchaseOfferingRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PurchaseOfferingRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Offering to purchase, e.g. '87654321'
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }
    inline PurchaseOfferingRequest& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}
    inline PurchaseOfferingRequest& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}
    inline PurchaseOfferingRequest& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * Renewal settings for the reservation
     */
    inline const RenewalSettings& GetRenewalSettings() const{ return m_renewalSettings; }
    inline bool RenewalSettingsHasBeenSet() const { return m_renewalSettingsHasBeenSet; }
    inline void SetRenewalSettings(const RenewalSettings& value) { m_renewalSettingsHasBeenSet = true; m_renewalSettings = value; }
    inline void SetRenewalSettings(RenewalSettings&& value) { m_renewalSettingsHasBeenSet = true; m_renewalSettings = std::move(value); }
    inline PurchaseOfferingRequest& WithRenewalSettings(const RenewalSettings& value) { SetRenewalSettings(value); return *this;}
    inline PurchaseOfferingRequest& WithRenewalSettings(RenewalSettings&& value) { SetRenewalSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Unique request ID to be specified. This is needed to prevent retries from
     * creating multiple resources.
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline PurchaseOfferingRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PurchaseOfferingRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PurchaseOfferingRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * Requested reservation start time (UTC) in ISO-8601 format. The specified time
     * must be between the first day of the current month and one year from now. If no
     * value is given, the default is now.
     */
    inline const Aws::String& GetStart() const{ return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }
    inline PurchaseOfferingRequest& WithStart(const Aws::String& value) { SetStart(value); return *this;}
    inline PurchaseOfferingRequest& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}
    inline PurchaseOfferingRequest& WithStart(const char* value) { SetStart(value); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PurchaseOfferingRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline PurchaseOfferingRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline PurchaseOfferingRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline PurchaseOfferingRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PurchaseOfferingRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PurchaseOfferingRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline PurchaseOfferingRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PurchaseOfferingRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PurchaseOfferingRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    RenewalSettings m_renewalSettings;
    bool m_renewalSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_start;
    bool m_startHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
