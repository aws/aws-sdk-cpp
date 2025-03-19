/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/TnbRequest.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace tnb
{
namespace Model
{

  /**
   */
  class InstantiateSolNetworkInstanceRequest : public TnbRequest
  {
  public:
    AWS_TNB_API InstantiateSolNetworkInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InstantiateSolNetworkInstance"; }

    AWS_TNB_API Aws::String SerializePayload() const override;

    AWS_TNB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Provides values for the configurable properties.</p>
     */
    inline Aws::Utils::DocumentView GetAdditionalParamsForNs() const { return m_additionalParamsForNs; }
    inline bool AdditionalParamsForNsHasBeenSet() const { return m_additionalParamsForNsHasBeenSet; }
    template<typename AdditionalParamsForNsT = Aws::Utils::Document>
    void SetAdditionalParamsForNs(AdditionalParamsForNsT&& value) { m_additionalParamsForNsHasBeenSet = true; m_additionalParamsForNs = std::forward<AdditionalParamsForNsT>(value); }
    template<typename AdditionalParamsForNsT = Aws::Utils::Document>
    InstantiateSolNetworkInstanceRequest& WithAdditionalParamsForNs(AdditionalParamsForNsT&& value) { SetAdditionalParamsForNs(std::forward<AdditionalParamsForNsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline InstantiateSolNetworkInstanceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the network instance.</p>
     */
    inline const Aws::String& GetNsInstanceId() const { return m_nsInstanceId; }
    inline bool NsInstanceIdHasBeenSet() const { return m_nsInstanceIdHasBeenSet; }
    template<typename NsInstanceIdT = Aws::String>
    void SetNsInstanceId(NsInstanceIdT&& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = std::forward<NsInstanceIdT>(value); }
    template<typename NsInstanceIdT = Aws::String>
    InstantiateSolNetworkInstanceRequest& WithNsInstanceId(NsInstanceIdT&& value) { SetNsInstanceId(std::forward<NsInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * only applied to the network operation that is created. These tags are not
     * applied to the network instance. Use tags to search and filter your resources or
     * track your Amazon Web Services costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    InstantiateSolNetworkInstanceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    InstantiateSolNetworkInstanceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Utils::Document m_additionalParamsForNs;
    bool m_additionalParamsForNsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_nsInstanceId;
    bool m_nsInstanceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
