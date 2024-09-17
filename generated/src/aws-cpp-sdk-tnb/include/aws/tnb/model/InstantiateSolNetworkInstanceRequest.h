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
    AWS_TNB_API InstantiateSolNetworkInstanceRequest();

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
    inline Aws::Utils::DocumentView GetAdditionalParamsForNs() const{ return m_additionalParamsForNs; }
    inline bool AdditionalParamsForNsHasBeenSet() const { return m_additionalParamsForNsHasBeenSet; }
    inline void SetAdditionalParamsForNs(const Aws::Utils::Document& value) { m_additionalParamsForNsHasBeenSet = true; m_additionalParamsForNs = value; }
    inline void SetAdditionalParamsForNs(Aws::Utils::Document&& value) { m_additionalParamsForNsHasBeenSet = true; m_additionalParamsForNs = std::move(value); }
    inline InstantiateSolNetworkInstanceRequest& WithAdditionalParamsForNs(const Aws::Utils::Document& value) { SetAdditionalParamsForNs(value); return *this;}
    inline InstantiateSolNetworkInstanceRequest& WithAdditionalParamsForNs(Aws::Utils::Document&& value) { SetAdditionalParamsForNs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline InstantiateSolNetworkInstanceRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the network instance.</p>
     */
    inline const Aws::String& GetNsInstanceId() const{ return m_nsInstanceId; }
    inline bool NsInstanceIdHasBeenSet() const { return m_nsInstanceIdHasBeenSet; }
    inline void SetNsInstanceId(const Aws::String& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = value; }
    inline void SetNsInstanceId(Aws::String&& value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId = std::move(value); }
    inline void SetNsInstanceId(const char* value) { m_nsInstanceIdHasBeenSet = true; m_nsInstanceId.assign(value); }
    inline InstantiateSolNetworkInstanceRequest& WithNsInstanceId(const Aws::String& value) { SetNsInstanceId(value); return *this;}
    inline InstantiateSolNetworkInstanceRequest& WithNsInstanceId(Aws::String&& value) { SetNsInstanceId(std::move(value)); return *this;}
    inline InstantiateSolNetworkInstanceRequest& WithNsInstanceId(const char* value) { SetNsInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * only applied to the network operation that is created. These tags are not
     * applied to the network instance. Use tags to search and filter your resources or
     * track your Amazon Web Services costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline InstantiateSolNetworkInstanceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline InstantiateSolNetworkInstanceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline InstantiateSolNetworkInstanceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline InstantiateSolNetworkInstanceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline InstantiateSolNetworkInstanceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline InstantiateSolNetworkInstanceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline InstantiateSolNetworkInstanceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline InstantiateSolNetworkInstanceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline InstantiateSolNetworkInstanceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Utils::Document m_additionalParamsForNs;
    bool m_additionalParamsForNsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_nsInstanceId;
    bool m_nsInstanceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
